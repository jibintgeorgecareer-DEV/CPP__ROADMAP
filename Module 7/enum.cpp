#include<iostream>
using namespace std;

// enum is a user-defined type that given names to a fixed set of integer values. (enumeration)

enum VAL
{                   // Each values in enum numeric values from 0 to n
    SUNDAY,         // Value 0
    MONDAY,         // Value 1
    TUESDAY,        // Value 2
    WEDNESDAY       // Value 3
};

int main()
{
    VAL v = MONDAY;
    cout<<v;
}


// We can integers with specific names...