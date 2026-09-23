#include<iostream>
using namespace std;

// Inheritence is a feature where ONE CLASS AQUIRE THE PROPERTIES OF ANOTHER CLASS.
// Inheritance allows one class to reuse the code of another class.
// Single Inheritence | Multilevel Inheritence | Multiple Inheritence | Hierarchical Inheritence |
// Hybrid Inheritence

//+++++++++++++++++++++++++++++ Multiple Inheritence ++++++++++++++++++++++++++++++++++++++++++++
// A class inherits from multiple classes

class Father    // Base class 1
{
    public:

    int height = 180;
    string strenght = "STRENGTH";

    void fathers_function() 
    {
        cout<<"Father function called"<<endl;
    }
};

class Mother    // Base class 2
{
    public:

        int beauty = 1000;
        string confidence = "HIGH";

        void mother_function()
        {
            cout<<"Mother function called"<<endl;
        }
};

class Child : public Father, public Mother // Constructor are called order of inherited;
{                                          // destructor called reverse order of constructor
    public:

    void child_function()
    {
        cout<<" I have my Father's height:"<<height<<", "<<strenght<<endl;
        cout<<" And my Mother's beauty:"<<beauty<<", confidence:"<<confidence<<endl;
    }
};

int main()
{
    Child son;             // The child class is a derived class of both father & mother
    son.child_function();  // It can access both classes properties
    son.fathers_function();
    son.mother_function();
}

//---------- Diamond Problem ----------
//        A                  In here D has two copies of 'A' from 'B' and 'C'
//       / \                 If D access something from 'A' , compiler dont know which copy
//      B   C                to use. (Compilation Error)
//       \ /
//        D


//-------- Ambiguity problem ----------
// In multiple inheritence When two base class 'A' & 'B' have function that have SAME NAME
// the compiler dont know which one to use , its called Ambiguity Problem.

// So we use,

// object.A::function();
// object.B::function();