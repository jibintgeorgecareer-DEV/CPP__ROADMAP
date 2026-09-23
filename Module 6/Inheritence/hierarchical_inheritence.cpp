#include<iostream>
using namespace std;

// Inheritence is a feature where ONE CLASS AQUIRE THE PROPERTIES OF ANOTHER CLASS.
// Inheritance allows one class to reuse the code of another class.
// Single Inheritence | Multilevel Inheritence | Multiple Inheritence | Hierarchical Inheritence |
// Hybrid Inheritence

//+++++++++++++++++++++++++++++ Hierarchical Inheritence ++++++++++++++++++++++++++++++++++++++++++++
// Multiple Derived class inherits from a single Base class (ONE PARENT -> MANY CHILDRENS)

class Parent
{
    public:
        int parent_variabel = 1000;

        Parent() { cout<<"Parent Constructor Called..."<<endl; }

        void show() { cout<<"Parent Function Called...."<<endl; }

        ~Parent() { cout<<"Parent Destructor Called...."<<endl; }
};

class Child_1 : public Parent
{
    public:
        void child_1_function()
        {
            cout<<"--------------Inside Child 1 Class---------------"<<endl;
            show();    // Parent Method Called
        }

        Child_1() { cout<<"CHILD 1 CONSTRUCTOR CALLED...."<<endl; }
        ~Child_1() { cout<<"CHILD 1 DESTRUCTOR CALLED...."<<endl; }
};

class Child_2 : public Parent
{
    public:
        void child_2_function()
        {
            cout<<"---------------Inside Child 2 Class----------------"<<endl;
            show(); // Parent class method called
        }

        Child_2() { cout<<"CHILD 2 CONSTRUCTOR CALLED...."<<endl; }
        ~Child_2() { cout<<"CHILD 2 DESTRUCTOR CALLED...."<<endl; }
};

class Child_3 : public Parent
{
    public:
        void child_3_function()
        {
            cout<<"---------------Inside Child 3 Class----------------"<<endl;
            show(); // Parent class method called
        }

        Child_3() { cout<<"CHILD 3 CONSTRUCTOR CALLED...."<<endl; }
        ~Child_3() { cout<<"CHILD 3 DESTRUCTOR CALLED...."<<endl; }
};

int main()
{
    // The Base class constructor is called first | Derived class destructor is called first
    
    Child_1 C1;
    C1.child_1_function();

    Child_2 C2;
    C2.child_2_function();

    Child_3 C3;
    C3.child_3_function();

return 0;
}