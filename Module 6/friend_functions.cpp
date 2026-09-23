#include<iostream>
using namespace std;

// A friend function is a normal function that is not a member of a class, But its allowed to 
// access the class's private & protected members.
// Normally, private members can only accessed by class's own member functions. but friend can

// Friend functions are declared inside the class & defined outside the class like normal functions

class Mybike
{
    private:
        int key;

    public:
        Mybike(int key) { this->key = key; }
    
    friend void show_key(Mybike bike);  // Allowed to access private of calss
};                                      // The definition must outside the class.

void show_key(Mybike bike)   // Defined outside of the class
{
    cout<<"Key is "<<bike.key;
}

int main()
{
    Mybike b(101);

    show_key(b); // Calling the friend function like a normal function

return 0;
}

// Why i need a friend function ?
// U need a friend function when, U want a function that is not a member of a class but still needs
// access to its private or protected data.