#include<iostream>
using namespace std;

// Exception handling is a mechanism for handle runtime errors without suddenly terminating
// the program.
// There are 3 keywords: 'try'  'throw'     'catch'

// try
//  ↓
// "Try this code"

// throw
//  ↓
// "Something went wrong!"

// catch
//  ↓
// "Handle the problem"

int main()
{
    try                    // 'try' contains code might cause an exception
    {                      // 'try' executing this code, if somethings goes wrong, throw exception.
        int age = -17;

        if(age < 0)
        {
            throw "Invalid Age!";   // 'throw' is used to send an exception (can send diff types)
        }
    }

    catch(const char *error)        // 'catch' receives the exception thrown by 'throw'
    {
        cout<< error;
    }

//------------------- another example with multiple catch------------------

float var = 98.8;  // Change type here

try
{
    throw var;
}

catch(int x)
{
    cout<<"Int exception!";
}
catch(float x)
{
    cout<<"Float exception!";
}
catch(char *x)
{
    cout<<"Char exception!";
}

// ----------------------------------- catch any type of exception --------------
try
{
    throw 10989;
}
catch(...)   // We can catch any data type using '...'
{
    cout<<"Hanle Any Type using (...)";
}



return 0;
}