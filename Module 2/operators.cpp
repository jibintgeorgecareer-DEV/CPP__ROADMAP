//operators
#include<iostream>
using namespace std;
int main()
{
    int a,b;

    //-----------ARITHMETIC OPERATOR-----------------------------
    cout<<a+b; 
    cout<<a-b;
    cout<<a*b;
    cout<<a/b;
    cout<<a%b; //Reminder

    //-----------ASSINGMENT OPERATOR-----------------------------
    //Assign values to variables with arithmetics

    a = 100; //assigning 100 to variable a
    a += 1;  // a = a + 1
    a -= 5;  // a = a - 5
    a *= 2;  // a = a * 2
    a /= 4;  // a = a / 4
    a %= 10; // a = a % 10  

    //-----------RELATIONAL OPERATOR (Comparision)-----------------------------
    //Return true or false

    cout<< (a==b) << endl;  //Equal to
    cout<< (a!=b) << endl;  //Not Equal to
    cout<< (a>b) << endl;   //Greater than
    cout<< (a<b) << endl;   //Less than
    cout<< (a>=b) << endl;  //Greater than or equal to
    cout<< (a<=b) << endl;  //Less than or equal to

    //-----------LOGICAL OPERATOR-----------------------------
    //Used to combine multiple conditions

    if(a == b && b == 10)      // AND OPERATOR
    {                          // Both conditions must be true
        cout<<"AND OPERATOR";
    }

    if(a == b || b == 10)      // OR OPERATOR
    {                          // At least one condition must be true
        cout<<"OR OPERATOR";
    }

    bool okey = false;
    if( !okey )                //NOT OPERATOR
    {                          // Reverse Boolean Value
        cout<<"NOT OPERATOR";
    }

    //-----------INCREMENT & DECREMENT-----------------------------

    cout<<a++; // a = a + 1  (POSTFIX INCREMENT) use it then increment
    cout<<a--; // a = a - 1  (POSTFIX DECREMENT) use it then decrement

    cout<<++a; // a = a + 1  (PREFIX INCREMENT) increment then use it
    cout<<--a; // a = a - 1  (PREFIX INCREMENT) increment then use it

    
    //-----------BITWISE OPERATOR-----------------------------
    // These works only on binary bits, | NOT on decimal numbers
    // Returns binary calculation of binary digits
    
    cout<<( a&b ); // Bitwise AND
    cout<<( a|b ); // bitwise OR
    cout<<( a^b ); // Bitwise XOR
    cout<<( ~a );  // bitwise NOT (invert the bits)
    cout<<( a<<1 ); //Left Shift (Shift bits to left filling zero)
    cout<<( a>>2 ); //Right Shift (Shifts bits to right discarding bits on right)


    //-----------CONDITIONAL or TERNARY-----------------------------
    //Short form of if...else

    cout<< ((a <=b )) ? "A is small" : "B is small"; //Check condition ( a<= b)
                                                    // TRUE if : A is small
                                                    // FALSE if : B is small

}