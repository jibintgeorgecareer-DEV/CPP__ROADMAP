#include<iostream>

//------------------- Function Overloading-----------------------------------
// The compiler decides which function be called, with their number of parameters and type
// COMPILE-TIME POLYMORPHISM
class Base
{
    public:

        void display(std::string s)
        {
            std::cout<<"I display String "<<s<<std::endl;
        }

        void display(int i)
        {
            std::cout<<"I display int "<<i<<std::endl;
        }

        void display(std::string s1, std::string s2)
        {
            std::cout<<"I display two string "<<s1<<" "<<s2<<std::endl;
        }
};

int main()
{
    Base obj;
    obj.display("Hello");
    obj.display(100);
    obj.display("Hello","World");

return 0; 
}

// In inheritence, suppose the base class & derived class have same methods with same names
// The derived class method will overloads base class method
// Calling the base class method make an compile error

class BASE
{
    public:
    void show(int a){}
};
class DERIVED : public BASE
{
    public:
    void show(int a, int b) { std::cout<<"Called derived show()"; }
};
DERIVED d;
// d.show(5); Accessing BASE class method makes an error