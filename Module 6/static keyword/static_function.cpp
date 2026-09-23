#include<iostream>
using namespace std;

// static members : Data Members | Member Functions | Objects
// static member function belongs to a class , no to an object
// The static member functions cannot access normal variables
// The static member can access other static variables & functions.

class Hello
{
    public:
        int n = 67;
        static int sta;

        static void show()      // U can call show() using class name.
        {
            cout<<"Hello....";
            //cout<<n;  // ERROR : cannot access 'n'
            //cout<<sta; // CAN ACCESS
        }
};

int main()
{
    Hello::show();  // Calling the static function.

return 0;
}