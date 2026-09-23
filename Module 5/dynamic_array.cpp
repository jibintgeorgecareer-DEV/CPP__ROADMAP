#include<iostream>
using namespace std;

// Dynamic Array

int main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;

    int *array = new int[size]; //Allocates space for array

    for(int i=0;i<size;i++)
    {
        cin>>array[i];          // reads values to array
    }

    delete[] array;             // Release memory for array

    // Total control over memory handles by programmer.

//After 'delete'
// data no longer exists | memory space can be reused by OS or other apps | cannot access
// The pointer still holds the address | but no longer points to valid memory (Dangling pointer)

return 0;
}