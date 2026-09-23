#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    const double pi = 3.1444; // Cannot change value after initilized

    const int *ptr = &x; //Value cannot modify through pointer
    // *ptr = 20 ERROR
    // x = 20 OKEY

    constexpr int limit = 5; // Value is known at compile time
                             // const might not known at compile time

return 0;
}