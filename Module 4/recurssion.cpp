#include<iostream>
using namespace std; //Recurssion - A function calls itself
//Two Rules -> Base Case & Recurssive Case
// Base Case -> stopping condition ,without it recurssion never stops
// Recurssive case -> function calls itself with a smaller problem
// return n * fact(n-1);

void show(int x)
{
    static int i = 0;
    if(i > x) //Bace Case
    {
        return;
    }
    cout<<i;
    i++; //Recursive case
    show(x);
}
int fact(int n) //Factorial using recurssion
{
    if(n == 0)
    {
        return 1;
    }
    return n * fact(n-1);
}

int main()
{
    //show(5);
    int num = 5;
    cout<<fact(num);
return 0;
}