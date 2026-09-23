#include<iostream>
using namespace std;

// OOP : Encapsulation | Abstraction | Inheritence | Polymorphism
// OOPs is the HEART of C++;
// A class is a blueprint or template to create objects
// An object is a instance of a class.

// ++++++++++++++++++++++++++++++++++ 4 Pillers of OOP ++++++++++++++++++++++++++++++++++++++++++++

// ----------------Encapsulation---------------------
// Definition: Wrapping data (variables) and methods (functions) into a single unit (class).
// Goal: Set controlled access to data.

// ----------------Abstraction---------------------
// Definition: Showing only essential features and hiding implementation details. (functions)
// Goal: Reduce complexity by focusing on what an object does, not how.

// ----------------Inheritence---------------------
// Definition: A mechanism where one class (child/derived) can reuse properties and methods of another
// Goal: Promote code reuse and hierarchy.

// ----------------Polymorphism---------------------
// Definition: The ability of a function or object to take many forms. (same name with diff arguments)
// Goal: Flexibility — same interface, different behavior.

class Phone           // Phone is the name of class
{
    public:
        string model;     // The are the data member (variables inside the class)
        string brand;

        void show()       // This is the member function (Functions inside the class)
        {
            cout<<"Brand: "<<brand<<endl;
            cout<<"Model: "<<model<<endl;
        }
};

int main()
{
    Phone iphone;  // object of class Phone is iphone
    Phone samsung; // another object of class

    // We can access the properties of a class using objects (data members & member function).

    iphone.brand = "Iphone";     // Assinging values to data members
    iphone.model = "13 mini";
    cout<<"EXAMPLE IPHONE"<<"\n---------------"<<endl;
    iphone.show();               // We access the properties using (.) operator and the object.

    samsung.brand = "Samsung";
    samsung.model = "S23 Ultra";
    cout<<"\nEXAMPLE SAMSUNG"<<"\n---------------"<<endl;
    samsung.show();

    // Why class is better : for 100 phones we need to create 100 variables, But with class we need 
    // one class ,much cleaner and easier to manage.

    // The memory is created when a object is created, NOT creation of class.
    // In here we have 2 objects, These 2 objects contains their own copy of data members.

return 0;
}