//Control Statements
// 1. Desicision Making
//    if | if-else | else-if ladder | nested if | switch

// 2. Looping
//    for  | while  | do-while

// 3. Jump statements
//    break  | continue  | return  | goto

#include<iostream>
using namespace std;
int main()
{
    int a = 2000;
    int b = 100;

    if( a > 1000)               //Execute code if condition is true
    {
        cout<<"If Statement";
    }

            if( a == b)          //if-else chooses between two blocks
            {
                cout<<"a is b";
            }
            else
            {
                cout<<"a is NOT b";
            }

    if( a>b )                   //else-if ladder (check multiple conditions)
    {
        cout<<"a is BIG";
    }
    else if( a==b )
    {
        cout<<"Equal";
    }
    else if( b>a )
    {
        cout<<"b is BIG";
    }
    else
    {
        cout<<"In else";
    }



                 if(b = 1500)      //Nested if 
                 {
                    if( a == 200)
                    {
                        cout<<"Inside of inside";
                    }
                 }
                 

    switch(a)  //Switch statement (Checks one variable against many values)
    {
        case 1 : cout<<"a is ONE";
                 break;

        case 2000: cout<<"a is 2000";
                   break;
        default: cout<<"Invalid";
    }
}