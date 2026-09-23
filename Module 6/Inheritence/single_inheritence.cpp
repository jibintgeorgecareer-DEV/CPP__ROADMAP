#include<iostream>
using namespace std;

// Inheritence is a feature where ONE CLASS AQUIRE THE PROPERTIES OF ANOTHER CLASS.
// Inheritance allows one class to reuse the code of another class.
// Single Inheritence | Multilevel Inheritence | Multiple Inheritence | Hierarchical Inheritence |
// Hybrid Inheritence

//+++++++++++++++++++++++++++++ Single Inheritence ++++++++++++++++++++++++++++++++++++++++++++

class Base                    // This is a Base class (Parent class)
{                             // A Derived class (child class) can aquire the properties of Base
    public:                            // But Base class cannot access the Derived class things
        string base = "Base Variable";

        Base() {} // Called First

        void base_function()
        {
            cout<<"Inside Base Function"<<endl;
        }

        ~Base() {} // Called Second
};
                           // In here 'public' means: Public members of A remain public in B
class Derived : public Base        // This is the derived class, that inherited from Base class
{                                  // Derived can access variable 'base' & base_function()
                                   
    public:

        Derived() {} // Called Second

        void derived_function()
        {
            cout<<"Inside Derived Function"<<endl;
            cout<<"Called "<<base<<endl;           // Accessing Base class variable
        }

        ~Derived(){} // Called First
};

int main()
{
    Derived d;   // Object of derived class

    d.base_function();    // Accessing Base class function with derived class object
    
    d.derived_function(); // Accessing same class function

return 0;
}