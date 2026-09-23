#include<iostream>
using namespace std;

// Virtual Function is a member function declared with keyword 'virtual' in base class
// The compiler wait until RUNTIME to decide which function should be called.
// Virtual keyword enables runtime selection.
// Virtual function is not for normal objects, They are for Base class pointer with 
// derived class reference.

// ++++++++++++++++++++ Look at this problem,+++++++++++++++++++++++++++++++++++++++++++++++++++++
class Message
{
    public:
    void hello()
    {
        cout<<"Hello This is Base Class"<<endl;
    }
};

class Msg : public Message   // When we using pointer object of Base class 
{                            // Base class method is called instead of derived class
    public:
    void hello()
    {
        cout<<"Hello This is Derived Class"<<endl;
    }
};
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//+++++++++++++++++++++++ Look at this solution ++++++++++++++++++++++++++++++++++++++++++++++++++
class Parent
{
    public:
    virtual void show()
    {
        cout<<"In Virtual Fuction"<<endl;
    }
};
class Child : public Parent
{
    public:
    void show() override    // 'override' is used to override a virtual function in Base class
    {
        cout<<"In Derived class Function"<<endl;
    }
};
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main()
{
//++++++++++++++++++++++ Problem +++++++++++++++++++++++++++++++++++++++++++++
    Message *ptr;
    Msg obj;
    ptr = &obj;
    ptr->hello(); // It will NOT call the derived class hello(), It calls base class hello()
                  // The compiler sees it as 'Message' pointer, so it calls Message::hello()
                  //This is called Early Binding (static binding), function decides at compile time

// ++++++++++++++++++++++++++ Solution +++++++++++++++++++++++++++++++++++++++++++++++++++++
    Parent *ptr_parent;
    Child c;

    ptr_parent = &c;
    ptr_parent->show(); // It access the Child class show() function

return 0;
}

// Why we need a function to be virtual?
// We make a function virtual, So we can call it through a base class pointer or referenec
// it execute correct derived class function at runtime