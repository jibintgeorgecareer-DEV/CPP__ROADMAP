#include<iostream>
using namespace std;

// Dynamic memory allocation : creating memory while the program is running
// In c++ we have operators 'new' and 'delete' for this
// These memory space are NOT created at compilation
// When executing .exe (windows) these spaces are created
// new ALLOCATES MEMORY ON THE HEAP . NOT ON STACK

int main()
{
    int number = 10; //Memory created automatically, C++ relese it automatically when program ends

    int *num = new int; // Dynamically allocates memory for an int at runtime
                       // The 'new' operator dynamically allocates memory during runtime.
        *num = 20;     // Stores value in it. 'num' contains the address (Pointer variable)

    int *n = new int(20); // Initilizes directly when creation

//!!!!!!!!!--> When YOU use 'new' you must release memory using 'delete'  <--!!!!!!!!!!!!!!!

    delete num; // If you forget to 'delete' it become MEMORY LEAK
    delete n;  

//After 'delete'
// data no longer exists | memory space can be reused by OS or other apps | cannot access
// The pointer still holds the address | but no longer points to valid memory (Dangling pointer)

// Why we need Dynamic Memory Allocation ,
// * When we dont know the size of array (User Input), user input size at runtime.
// * We can allocated what we need & when we need.
// * We can keep data alive beyond the function scope.

num = nullptr; // Better do this after 'delete'
n = nullptr;   // Better do this after 'delete'
}