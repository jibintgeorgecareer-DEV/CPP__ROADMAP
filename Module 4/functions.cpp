#include<iostream>
using namespace std;

//--------call by value - sending a copy of value
int call_by_value(int x,int y)
{
    return x+y;
}

//--------------call by referenec
int call_by_reference(int &x)
{
    return x*x;
}

//-----------call by pointer
int call_by_pointer(int *ptr)
{
    (*ptr)++;
    return *ptr / *ptr;

}

int main()
{
    int x = 7, y = 9;
    int num = 5;
    int *p = &num;

    cout<<call_by_value(x,y); // call by value - sending a copy of value

    cout<<call_by_reference(num); // call by reference - sending actual value (no copy), 
                                 // num and &x points to same memory loc

    cout<<call_by_pointer(p);    //We send its memory address (p contains address)
    cout<<call_by_pointer(&num); //Sending address (&num contains address)

return 0;
}