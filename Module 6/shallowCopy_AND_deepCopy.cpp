#include<iostream>
using namespace std;

// When you,
// obj1 = obj2; You copy data of obj2 into obj1; changing obj1 dont affect obj2

// The problem happens with object contains a pointer to dynamically allocated memory.
// if your class has a pointer, only the pointer’s address is copied — not the actual data 
// it points to;  Two objects pointing to same memory
// If one object modifies or deletes that memory, the other object is affected → dangling pointers;

// ------------------------ Shallow Copy --------------------------------
// shallow copy copies the pointer itself, so both object -> same memory

class Student
{
    public:
        int *marks;

        Student(int m)
        {
            marks = new int(m);
        }
};

Student s1(88);                                   
// s1
//  │
//  │ marks
//  ↓
// ┌───────┐
// │  88   │   ← Heap
// └───────┘

Student s2 = s1;
// s1                    s2             The default copy operation copies the pointer value.
//  │                     │             Both object points to same object
//  │ marks               │ marks       If both destructors deletes these two pointers, which means
//  └──────────┐  ┌───────┘             (deleting same memory twice) lead to undefined behaviour
//             ↓  ↓                     its called double deletion
//           ┌───────┐
//           │  90   │
//           └───────┘
//              Heap

//------------------------- Deep Copy ------------------------------------------------------
// Deep copy creates a new memory block and copies tha actual data into it.
class Student
{
public:
    int* marks;

    Student(int m)
    {
        marks = new int(m);
    }

    Student(const Student &obj)
    {
        marks = new int(*obj.marks);
    }
};

Student s1(79);
Student s2 = s1;

// After Deep Copy-------------
// s1
//  │
//  ↓                       Now they cantain same value, but in different locations
// ┌─────┐
// │ 79  │
// └─────┘
//  Heap A


// s2
//  │
//  ↓
// ┌─────┐
// │ 79  │
// └─────┘
//  Heap B
//-----------------------------------------------------------------------------------------------


// SHALLOW COPY                                                 DEEP COPY

// Object A ──┐                                         Object A ──> [ Memory A]
//            ├──→ [ SAME MEMORY ]
// Object B ──┘                                         Object B ──> [Memory B]