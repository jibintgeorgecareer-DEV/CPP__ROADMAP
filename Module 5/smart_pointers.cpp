#include<iostream>
#include<memory> // for smart pointers
using namespace std;

// Smart poinyers are objcets ,behave like a pointer but automattically manages dynamic memory

//int *m = new int(100);   // When we create a memory 
//delete m;                // we need to release the memory using 'delete'

// When we use 'smart pointers' we dont need to use 'delete' | It automatically release memory.

int main()
{
        //There are 3 main smart pointers
        // unique_ptr  | shared_ptr  | weak_ptr
        int num = 15;

//------------------------------------UNIQUE_PTR-----------------------------------
// unique_ptr owenship is unique(one owner) | when main() ends unique_ptr deleted automattically.
        unique_ptr<int> ptr = make_unique<int>(10); //Points to memory location '10'
        
        //unique_ptr<int> cpy = ptr; -> This makes an error | cannot copy but moves the ownership
        unique_ptr<int> cpy = move(ptr); // Now ptr is null and cpy points to the value '10'

//------------------------------------SHARED_PTR-----------------------------------
// shared_ptr allows multiple owners
        shared_ptr<int> ptr1 = make_shared<int>(10);
        shared_ptr<int> ptr2 = ptr1;          // Both ptr1 & ptr2 points to same object.
                                              // the object destroyed when , ptr1 & ptr2 destroyed
                                              // ie, when main ends: its called REFERENCE COUNTING

//------------------------------------WEAK_PTR-----------------------------------
// weak_ptr used to observe an object managed by shared_ptr without owning it.
        shared_ptr<int> sp = make_shared<int>(num);

        weak_ptr<int> wp = sp; // wp NOT owning the object | not increasing shared_ptr 
                              // reference count.

// USING new & delete  YOU HAVE MANUALLY DEALLOCATE MEMORY BUT USING THESE SMART POINTERS 
// YOU DONT NEED TO.

// unique_ptr HAVE ONLY ONE OWNER BUT YOU CAN MOVE OWNERSHIP

// shared_ptr CAN HAVE MULTIPLE OWNERS AND IT COUNTS THE OWNERSHIP (REFERENCE COUNTING)

// weak_ptr USED TO OBSERVE THE OBJECT OWNED BY shared_ptr | IT DONT OWNED THE OBJECT

}
