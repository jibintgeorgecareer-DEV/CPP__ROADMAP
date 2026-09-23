#include<iostream>
using namespace std;
//Inline functions, used to eliminate overhead of small functions
// inline keyword tells the compiler: "If possible replace function call with, function code."
// Compiler decide wheather the function needs to be inline, It may ignore

inline int add(int x, int y)
{
    return x+y;
}

int main()
{
    cout<<add(5,5);

return 0;
}