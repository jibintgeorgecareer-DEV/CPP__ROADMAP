#include<iostream>
using namespace std;

// Pure Virtual function is a virtual function without an implementation in base class
// virtual void funct() = 0;
// Each derived class must override it
// A class with at least one-pure virtual function is called Abstract class
// Abstract class cannot create object

class Animal    // We can't create a object that have only Pure virtual function
{
    public:
    virtual void speak() = 0; // This is only Pure-Virtual Function, AND the Abstract class
};

class Dog : public Animal   // If Dog not override it become, compile error
{
    public:
    void speak() override // This is virtual function NOT Pure
    {
        cout<<"Bark"<<endl;
    }
};

class Cat : public Animal
{
    public:
    void speak() override   // This is virtual function NOT Pure
    {
        cout<<"Meow"<<endl;
    }
};

int main()
{
    Cat obj;
    obj.speak(); // Meow
    
return 0;
}