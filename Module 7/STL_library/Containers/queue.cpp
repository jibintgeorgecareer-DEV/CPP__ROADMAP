#include<iostream>
#include<queue>
using namespace std;

// queue is a STL container that follows FIFO principle.
// The first element is removed first

int main()
{
    queue<int> numbers;

    // storing elements

    numbers.push(99);    // Adds an element at the back of queue
    numbers.push(117);
    numbers.push(123);

    // Accessing the elements

    cout << numbers.front();    // Returns element at front | NOT removes the element
    cout << numbers.back();     // Return element at back | NOT removes the element

    // removing the element

    numbers.pop();   // removes element at the front

    // Some the methods of queue

    cout << numbers.empty();    // Return queue is empty

    cout << numbers.size();   // Gets number of elements


    // Loop through queue

    while(!numbers.empty())
    {
        cout << numbers.front() << endl;
    }


return 0;
}
