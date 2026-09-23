// A process is an instance of a program running on your computer.
// It has its own memory space, resources (like file handles, socets), and execution context.
// Example: If you open Chrome and Notepad, each is a separate process.

// A thread is a small unit of execution in a process, the main() is a thread 
// called the main thread.
// A process can contain multiple threads, all sharing the same memory space but running 
// independently.
// Threads are used to perform tasks concurrently inside a program.

// Without thread each task needs to wait for previous task
// task 1 -> task 2 -> task 3 

#include<thread>
#include<iostream>
using namespace std;

void task_1()
{
    cout << "From task 1" << endl;
}

void task_2(int num)
{
    cout << "From task 2" << endl;
    cout << "Number in task 2:" << num << endl;
}

void task_3()
{
    cout << "From task 3" << endl;
}


int main()
{
    cout << "Main thread started.." << endl;

    thread THREAD(task_1);     // creates a thread and start executing task_1()
                                                        //    MAIN THREAD
    THREAD.join();    // join() waits for a thread     //          │
                      // to finish                    //           ├── creates THREAD
                      // main() waits to THREAD             //     │
                      // to finish                          //     ↓
                                                            //  Thread THREAD
                                                            //     │
                                                            //     └── task() 
                                                               
    // If we dont use join(), main() may finish while THREAD running.

    // THREAD with arguments

    thread THREAD_1(task_2, 5);  // We can pass arguments into a thread
    THREAD_1.join();

    // detach() in thread

    thread THREAD_3(task_3);

    THREAD.detach();     // detach() means, thread run independently from thread object.
                        // after detaching main() not wait for it.


return 0;
}