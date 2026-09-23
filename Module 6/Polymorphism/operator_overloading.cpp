#include<iostream>
using namespace std;
// Operator overloading allows give new meaning to an existing OPERATOR when its used with objects
// +    -   *   ==  <   >   ++
// We can, 
//        int a,b;
//        int sum = a + b;
// In Operator Overloading, instead of variable we use objects
//        class_name object1;
//        class_name object2;
//        class_name object3 = object1 + object2;   C++ automattically dont know what its mean
//  Operator Overloading define that behaviour.
// "When i use '+' between two objects, do this."

class Calculate
{
    public:
    int x, y;

    Calculate operator+(Calculate p)
    {
        Calculate result;

        result.x = x + p.x;   // The 'x' & 'y' are the values of object c1
        result.y = y + p.y;   
                              // The 'p.x' & 'p.y' are the values of c2
        return result;  // It return the object 'result'
    }
};

int main()
{
    Calculate c1;
    c1.x = 89;
    c1.y = 66;

    Calculate c2;
    c2.x = 77;
    c2.y = 56;

    Calculate c3 = c1 + c2; // c1 is the calling object & c2 is the parameter p

    cout<<c3.x;   //prints value at x of object 3 , ie 89 + 77

return 0;
}