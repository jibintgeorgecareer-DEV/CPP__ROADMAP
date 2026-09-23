#include<iostream>
using namespace std;

// static members : Data Members | Member Functions | Objects
// A static object created once, and exists untill the program ends.
// Program starts -> Object created -> Con called -> Object Exists -> main() ends -> Program ends 
// -> Destructor called.

// static object lives untill program ends

class Obj
{
    public:
        Obj()
        {
            cout<<"Constructor Called"<<endl;  // print FIRST
        }
        ~Obj()
        {
            cout<<"Destructor Called"<<endl;  // print THIRD
        }
};

int main()
{
    static Obj object;

    cout<<"Inside Main"<<endl;    // print SECOND
}

// Static object are stored on the 'static storage area' (data segment) NOT on the stack.

// normal object destructor called when it is out-of-scope, happens before main() finishes
// static objects destructor called after main() ends