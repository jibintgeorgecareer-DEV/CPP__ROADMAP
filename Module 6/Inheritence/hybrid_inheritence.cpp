#include<iostream>
using namespace std;

// Inheritence is a feature where ONE CLASS AQUIRE THE PROPERTIES OF ANOTHER CLASS.
// Inheritance allows one class to reuse the code of another class.
// Single Inheritence | Multilevel Inheritence | Multiple Inheritence | Hierarchical Inheritence |
// Hybrid Inheritence

//+++++++++++++++++++++++++++++ Hybrid Inheritence ++++++++++++++++++++++++++++++++++++++++++++
// Its a combination of two or more types
// Single + Multiple | Hierarchical + Multiple | Multilevel + Mulitiple
//          A
//        /   \ 
//        B    C
//         \  /
//           D

class Top
{
    public:
        Top() { cout<<"Top Constructor Called..."<<endl; }

        void top_function() { cout<<"Top Function Called.."<<endl; }

        ~Top() { cout<<"Top Destructor Called..."<<endl; }
};

class Middle_1 : public Top       // inheriting Top
{
    public:
        Middle_1() { cout<<"Middle 1 Constructor Called...."<<endl; }

        void middle_1_function() 
        { 
            cout<<"Middle 1 Constructor Called..."<<endl;
            top_function();
        }
        

        ~Middle_1() { cout<<"Middle 1 Destructor Called...."<<endl; }
};

class Middle_2 : public Top         // Inheriting Top
{
    public:
        Middle_2() { cout<<"Middle 2 Constructor Called...."<<endl; }

        void middle_2_function() 
        { 
            cout<<"Middle 2 function Called..."<<endl; 
            top_function();
        }

        ~Middle_2() { cout<<"Middle 1 Destructor Called...."<<endl; }       
};

class Bottom : public Middle_1, public Middle_2  // inheriting the two middle classes
{
    public:
        Bottom() { cout<<"Bottom Constructor...."<<endl; }

        void bottom_function()
        {
            middle_1_function();
            middle_2_function();
        }

        ~Bottom() { cout<<"Bottom Destructor Called..."<<endl; }
};

int main()
{
    Bottom object;
    object.bottom_function();

    //object.top_function(); Diamond Problem

return 0; 
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
