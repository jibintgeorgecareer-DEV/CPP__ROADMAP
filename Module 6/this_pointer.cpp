#include<iostream>
using namespace std;

// 'this' is a special pointer that ALWAYS POINTS TO THE CURRENT OBJECT that called.
// 'this' means : "the current object"
// 'this' exists only inside non-static members
// 'this' contains the address of current object.

class This
{
    public:
        int roll;
        string name;

    This(string name, int roll)
    {
        this->name = name;   // 'this' access the current class/object variable 'name'
        this->roll = roll;
        cout<<"\nAdress of object:"<<this; // Print the current object address
    }
};

int main()
{
    
    This obj1("Arjun",20); 
    This obj2("Hari",21);

return 0;
}