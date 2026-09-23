#include<iostream>
using namespace std;

// Function pointer (Pointer to a function)
void message()
{
    cout<<"Learn C++";
}

// Function that returns a pointer
int *get_age()
{
    static int age = 25;
    return &age;
}

int main()
{

//****************Function pointer (Pointer to a function)*********************************

    void (*ptr)(); //Declared a pointer to a function that returns void
    ptr = message; // Assing function to pointer
    ptr(); // Calls the function via pointer ptr
//*****************************************************************************************

//*********************Function returns pointer********************************************
    int *pointer = get_age();
    cout<< *pointer; // returns 25
    cout<< pointer; // returns address of value 25 stored 
//*****************************************************************************************

}