#include<iostream>
using namespace std;
// the array name itself a pointer to the first element of the array

int main()
{
    int array[5] = {10,20,30,40,50}; 

    cout<<array;         // returns address of array[0] ie, cout<< &array[0];
    cout<< *(array + 1); // Is same as --------->  cout<< arra[1];   (Pointer Way)

    int *ptr = array;  // ptr -> array[0]

    for(int i=0;i<5;i++)
    {
        cout<< *ptr <<" "; // initially array[1] then... go 
        ptr++;             // incrementing the address | you can use : ptr+2 OR ptr-1
    //  *ptr++ is same as *(ptr + 1) Due to operator precedence   
    }
    // but (*ptr++) access the value

// Operator precedence is set of rules determine the order which different operator (+,-,*,%,/) 
// evaluates first. just like BODMAS 

return 0;
}