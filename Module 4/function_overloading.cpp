#include<iostream>
using namespace std;
// Multiple function with same name & diff parameters   
// COMPILE TIME POLYMORPHISM , Compiler decide which one to execute during COMPILATION

int add(int x, int y)
{
    return x+y;
}

float add(float x, float y)
{
    return x+y;
}

double add(double x, double y)
{
    return x+y;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    cout<<add(12.7,89.87);
}