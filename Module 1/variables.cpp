#include <iostream>
using namespace std;

//Variables 

void show(int para)
{
    int x = 100; //Local Variable 
                 // scope only inside function
                 //when function destroyed, x destroyed
    cout<<para; // para only scope inside show(0)

    static string name = "Jibin"; // local scope and program lifetime, single copy (like global)

}

class var
{
    int data; // variable inside class belongs to the object of class
              // destroyed value when object destroyed
};

int main()
{
    int age = 20; //Global Varibale
                  // scope & lifetime during the program
                  //any function can access
}