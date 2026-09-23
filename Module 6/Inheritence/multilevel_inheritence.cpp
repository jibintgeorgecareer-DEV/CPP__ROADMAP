#include<iostream>
using namespace std;

// Inheritence is a feature where ONE CLASS AQUIRE THE PROPERTIES OF ANOTHER CLASS.
// Inheritance allows one class to reuse the code of another class.
// Single Inheritence | Multilevel Inheritence | Multiple Inheritence | Hierarchical Inheritence |
// Hybrid Inheritence

//+++++++++++++++++++++++++++++ Multilevel Inheritence ++++++++++++++++++++++++++++++++++++++++++++
//One derived class becomes the base class for another class

class A
{
    public:

    int class_A_var = 100;
    
    void showA() { cout<<class_A_var<<endl; }

    A() { cout<<"Class A Constructor Called..."<<endl; }    // If Base class con are private
    ~A() { cout<<"Class A Destructor Called...."<<endl; }   // Derived classes cannot access it.
};

class B : public A  // In here 'public' means: Public members of A remain public in B
{
    public:

    int class_B_var = 200;

    void showB() { cout<<class_A_var<<endl; }

    B() { cout<<"Class B Constructor Called...."<<endl; }
    ~B() { cout<<"Class B Desstructor Called..."<<endl; }

};

class C : public B
{
    public:
        int class_C_var = 300;

        void showC() { cout<<class_A_var<<" "<<class_B_var<<" "<<class_C_var<<endl; }
        C() { cout<<"Class C Constructor Called...."<<endl; }
        ~C() { cout<<"Class C Destructor Called...."<<endl; }

};

int main()
{
    C obj_C;  // We created a object of class C, It can access class 'A' & 'B'

    obj_C.showA();
    obj_C.showB();
    obj_C.showC();

    // Class 'A' con called first | class 'C' destructor called first

    return 0;
}