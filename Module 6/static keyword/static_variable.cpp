#include<iostream>
using namespace std;

// static members : Data Members | Member Functions | Objects

// When we declare a variable, every object have its own copy of the variabel But when we 
// make a variable static every object share same static variable (there is only one copy).
// static members are belongs to the class; NOT to the object.

class Student
{
    public:
        string name;          // Every object have their own 'name' variable
        static string college; // Every object shares same 'collge' variable

    void show()
    {
        cout<<"NAME: "<<this->name<<endl;
        cout<<"COLLGE: "<<college;
        cout<<"\n\n";
    }
};

string Student::college = "St.Thomas College";  // static members are intilized outside the class.
                                              // scope resolution operator (::) used to access
                                              // members outside the class.
                                    
int main()
{
    Student s1;
    s1.name = "Mani";
    s1.show();
    
    Student s2;
    s2.name = "Hari";
    s2.show();

return 0;
}

// ---------------Counting object using static ----------------

class Count
{
    public:
        static int c;

        Count()
        {
            c++;
        }
};
int Count::c = 0;

// When evrytime creating object the value of 'c' incremented by 1.
// If U create 3 object : the value of 'c' will be 3