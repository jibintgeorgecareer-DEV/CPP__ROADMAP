#include<iostream>
using namespace std;
//pointer is variable that stores address of another variable.

int main()
{
    int number = 2006;

    int *pointer = &number; // & operator returns address of variable.
    
    cout<< pointer;  //returns the address stores in 'pointer' (address of number)
    cout<< *pointer; //returns the value of number (returns 2006) | called Dereferencing
    cout<< &pointer; //returns address of variable 'pointer'

    *pointer = 2005; //Changed the value stored at variable 'number'

    int *nullpointer = nullptr; // Null pointer does not point anywhere | safer than uninitialized



    //---------- pointer ARITHMETICS---------------------------------------------
    int array[5] = {1,2,3,4,5};

    int *ptr = array; // Now ptr points to the first element of array ( array[0] )
    cout<< ptr;     // Prints address of array[0]
    cout<< ptr++;  // Prints address of array[1] | we can use ptr-- also


//++++++++++++++++++++++++++++++++++++++++++++++++++
    cout<< (*pointer)++; //Increment the value
    cout<< *(ptr + 1); //increment the address
//++++++++++++++++++++++++++++++++++++++++++++++++++

return 0;
}