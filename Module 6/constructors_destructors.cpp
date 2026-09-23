#include<iostream>

// constructors -> object created -> destructors -> object destroyed.

// A Constructor is a special member function that is automattically called when object is created.
// Constructor runs automattically | Constructors lets initilize values (data members)
// Constructor have same name as class
// Can be overloaded | No return type
// Constructors are called exact order of creation

// A Destructor is a special function that called when the object is destroyed
// We can use destructors for releasing memory using 'delete'
// Destructors cannot be overloaded | No parameters | start with '~' | Cant overload (no multiples)
// Destructors are called Reverse order of creation(LIFO) (Last object destroyed First)

class Student
{
    public:
        std::string name;
        int age;

        Student(std::string n, int a)    // Parameterized Constructor 
        {
            name = n;
            age = a;
            std::cout<<"Constructor Called......";
        }

        void show()
        {
            std::cout<<"Name:"<<name;
            std::cout<<"\nAge:"<<age;
        }

        ~Student()
        {
            std::cout<<"Destructor Called........";   //Destructor have no (return type, parameters)
        }

};

int main()
{
    Student s1("Hari",20);  // values initialized by constructors
    s1.show();

}


// ------------- Constructor Overloading ------------------

class Con_Overload
{
    public:
        int int_sum;
        float float_sum;

        Con_Overload(int a, int b)
        {
            int_sum = a + b;
        }
        Con_Overload(int a, int b, int c)
        {
            int_sum = a + b + c;
        }
        Con_Overload(float a, float b, float c)
        {
            float_sum = a + b + c;
        }
};

// Constructor called by the number of arguments & type.

// Con_Overload obj(8,9);              -> calls first constructor 
// Con_Overload obj(5,6,7);            -> calls second constructor
// Con_Overload obj(12.5,678.2,89.5);  -> calls third constructor

// ---------------------- Types of Constructors -------------------------------
// There are mainly 3 types of constructors
// Deafult | Parameterized | Copy 

class Cons
{
    public:
    int data;

        Cons()                      // Constructor that takes no arguments
        {                           // If U dont provide a constructor C++ automattically create one
            std::cout<<"Default Constructor";
        }

        Cons(int x)               
        {                                           // Constructor that receives arguments
            std::cout<<"Parameterized Constructor"; // It can have multiple arguments
        }

        Cons(const Cons &obj)           // Copy constructor creates new object by copying 
        {                               // an existing object.
            data = obj.data; 
            std::cout<<"Copy Constructor";
        }
};

Cons object1();    // Default constructor called
Cons object2(19);  // Parameterized constructor called
Cons object3 = object2;  // Copy constructor is called