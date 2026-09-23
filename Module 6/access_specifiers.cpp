#include<iostream>
using namespace std;

// Access specifiers controls who can access the members of the class
// There are 3 types of access specifiers: public | private | protected

// ------------------------ public ------------------------------------
// Members that are public can access almost everywhere, (Everyone can access)

// ------------------------ private -----------------------------------
// Members that are private can only be directly accessed inside the class itself ans friend

// ------------------------ protected ---------------------------------
// protected members can be accessed inside the class & derived classes, Not directly from outside.

class Student
{   
    private:          // Only accessed by inside the class and friend functions.
        int marks;
        string clas;

    protected:       // Only accessed insid e class & derived class, friend
        int date_of_birth = 2007;
        int photo;

    public:          // ID & name can be accessed almost everywhere
        int ID;      // By objects, inside & outside class, friend functions
        string name;

    void private_access()  // private members can accessed here
    {
        marks = 100;
        clas = "BCA";
    }

    void protected_access()  // accessing protectd data
    {
        cout<<"DOB:"<<date_of_birth;
    }
};

class Derived : public Student
{
    public:
        void access_Student()
        {
            cout<<"Student Name:"<<name<<endl;
            private_access(); // Accessing the private data of base class with base class function
        }
};

int main()
{
    Student s;
    s.ID = 78;
    s.name = "Mani";

    // s.marks = 89;  cannot access private data
    // s.photo = 80;  cannot access protected data

return 0;
}