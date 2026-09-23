#include<iostream>
using namespace std;
// Dangling pointers are pointers that points to memory location that is no longer valid.
//A pointer still has an address, but the memory at that address is no longer available.

int main()
{
    int *memory = new int(500);

    cout<<"Value:"<< *memory;

    delete memory;

    cout<< *memory;  //Dangling pointer     |    DANGEROUS

// This is called use-after-free and causes undefined behavior.

// After 'delete'  set the pointer to nullptr
memory = nullptr;


//------- with functions --------------------

int *value()
{
    int val = 672;

    return &val; // Cannot return address , variable destroyed when function ends
}

// Above example , is dangerous; number is a local variable 
// When function finishes variable destroyed , So 
//the returned pointer points to a variable that no longer exists.

return 0;
}
