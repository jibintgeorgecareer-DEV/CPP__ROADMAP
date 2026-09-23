#include<iostream>
// WHEN C++ RUNS IT MAINLY USES TWO TYPES OF MEMORY : STACK OR HEAP

//------------------------------------STACK-----------------------------------

// STACK is where local variables & function calls are stored
// The memory is managed automattically and it is fast
// It is limited in size & variable deleted when scope ends

void stack()
{                // main() start -> test() -> x created -> x printed -> test() end -> x destroyed
    int x = 2000;
    std::cout<<x;

    int array[10000000000]; // Since array is limited size ,it may cause STACK OVERFLOW

    int *array = new int[1000000000000]; // Much safer HEAP is much larger that STACK
}

//------------------------------------HEAP-----------------------------------

// The heap stores dynamically allocated memory like pointers, 'new' operator, STL containers
// smart pointer targets(make_shared,make_unique)
//Memory allocated during runtime, managed using 'new' and 'delete'
// Bigger than stack
// sligthly slower than stack
// Memory stayed allocated until you release it.

int main()
{
    stack(); 

    int *point = new int(900); // allocated memory for int 900 in heap owned by 'point'
                               // integer 900 on heap | variablr 'point' on stack

delete point;
}

// When main() ends
// x destroyed | point also destroyed 
// If you forget to 'delete' point ,heap memory remains allocated untill the program exits.
// causes memory leaks.