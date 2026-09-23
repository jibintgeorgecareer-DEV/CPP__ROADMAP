//Reference is a another name (alias) for existing variable.
//varibale must be initilized | Cannot NULL
#include<iostream>
using namespace std;

void reference_funtion(int &x) //Passing actual variable, NOT COPY
{
    int x = x + 100; //The change in varibale change the actual variable.
}

int main()
{
    int age = 20;    //Original varable
    int &ref = age; //another name for age (Not holding the address of age) , Not create COPY
    cout<<ref;     // one integer with two names ('&' NOT means address of)

    reference_funtion(ref); //Passing actual variable | No COPY 
                            // Changes in function change the variable
}