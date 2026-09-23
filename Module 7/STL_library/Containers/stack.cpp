#include<iostream>
#include<stack>
using namespace std;

// In STL, stack is a container that follows LIFO. (Last added First removed)

int main()
{
    stack<int> numbers;

    // storing elements

    numbers.push(88);  // Adds '88' at the top of stack
    numbers.push(45);
    numbers.push(90);  // Stack pointer is at top elements (90)
                       // Last element pushed is the top element
                       
    // access the element

    cout << numbers.top();  // Returns the top element of stack | It dont removes

    // remove element

    numbers.pop();   // removes the TOP element from stack

    // Some methods of stack

    cout << numbers.empty();  // Check stack is empty

    cout << numbers.size();   // Gets number of elements

    // Looping through stack

    while(!numbers.empty())
    {
        cout << numbers.top() << endl;
    }
}