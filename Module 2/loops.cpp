#include<iostream>
using namespace std;
//----------------Loops

int main()
{
    //-------------for loop--------------------------------------------------
    for(int i = 0; i < 10; i++) //initilizing i (start); set loop limit (stop); iteration (increment)
    {
        cout<<i<<" ";
    }

    //-------------while loop------------------------------------------------
    int i = 10;                //initilizing i (start)
    while(i < 0)               // loop limit (stop)
    {
        cout<<i<<" ";
        i++;                  // iteration (increment)
    }

    //---------------do while-------------------------------------------------
    int x = 1;                //initilizing i (start)
    do
    {
        cout<<x<<" ";
        x++;                 // iteration (increment)
    }
    while(x <= 10);            // loop limit (stop)
}