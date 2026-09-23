#include<iostream>
using namespace std;

// Dynamic Binding is also called late binding, which means that the fuction call is resolved
// at runtime rather than at compile time.
// It happens when U use virtual functions & base class pointer/reference points to a derived
// class object.
// The actual function is executed depends on the type of object being pointed to.  
// The connection between function call -> implementation is called binding
// There are two types : Static binding & Dynamic binding
// Static binding is determined at compile time; (Normal function call with object)
// Dynamic binding happens at runtime and its also RUN-TIME POLYMORPHISM

class Animal
{
    public:
        virtual void speak()
        {
            cout<<"Animal Speaks..."<<endl;
        }
};

class Dog : public Animal
{
    public:
        void speak() override
        {
            cout<<"Dog Barks..."<<endl;
        }
};

class Cat : public Animal
{
    public:
        void speak() override
        {
            cout<<"Cat Meows..."<<endl;
        }
};

int main()
{
    Animal *ptr;

    Dog dog;  // Animal *ptr = new Dog();    (To directly assing)
    Cat cat;  // Animal *ptr = new Cat();    (To directly assing)

ptr = &dog;        // Base pointer points to Dog object
ptr->speak();      // Calls Dog::speak() if virtual, otherwise Animal::speak()


ptr = &cat;        // Base pointer points to Cat object
ptr->speak();      // Calls Cat::speak() if virtual, otherwise Animal::speak()


    // without virtual It will call Animal::speak(), Then it will be a static binding

//-----------------------------------------------------------------------------------------------

//  Base pointer + non-virtual function
//        ↓
//  Base class function

//  Base pointer + virtual function
//        ↓
//  Actual object's overridden function
}