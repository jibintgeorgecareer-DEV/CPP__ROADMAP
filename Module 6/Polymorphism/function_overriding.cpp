#include<iostream>
using namespace std;

// Function Overriding is a type in Polymorphism

//A derived class provides its own implementation of a function that is already defined in base class
 
// Suppose we have a base class 'Animal' and it have a function (bark).
// The derived class 'Dog' writes a function with same name & parameters (bark).
// The deived class replaces (overrides) the base version.
// RUN-TIME POLYMORPHISM

class Animal
{
    public:

    void bark()
    {
        cout<<"Animal Speaks"<<endl;
    }
};

class Dog : public Animal
{
    public:

    void bark()   // Derived class function overrides Base class function.
    {
        cout<<"Dog Barks"<<endl;
    }
};

int main()
{
    Dog obj;
    obj.bark();

return 0;
}