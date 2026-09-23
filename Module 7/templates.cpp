#include<iostream>
using namespace  std;

// Templates allow write code that works on with different data types.
// Instead of writing same function for 'int' 'double' 'float', We can write one using templates
// We use templates in STL like <vector>, <set> etc...

// ---------------- Just tempolate ----------------------------------------------------
template <typename T>  // T represent the type we define later.
T add(T x, T y)        // typename can be any type
{
    return x + y;
}
//--------------------------------------------------------------------------------------

// ---------------- With two typenames -------------------------------------------------
template <typename A, typename B>
void show(A a, B b)
{
    cout<<"typename A:"<<a<<endl;
    cout<<"typename B:"<<b<<endl;
}
// --------------------------------------------------------------------------------------

//-------------------- Class Template ---------------------------------------------------
template <typename Cls>
class Example
{
    private:
        Cls value;      // We can store different types with templates
                        // This like the STL of <vector>, <set> etc..
    public:
        Example(Cls v)
        {
            value = v;
        }

        void display()
        {
            cout<<"Value Inside Class Template:"<<value<<endl;
        }

};

// ---------------------------------------------------------------------------------------


int main()
{
    // So the add() works with numeric data types
    cout<< add(89,9);
    cout<< add(56.8,88.9);

    show("Hello",56); 

    // Class Template -------------------------------------
    Example<int> obj_1(1090);

    Example<double> obj_2(8979.909);

    Example<string> obj_3("Audi");

    // We can assing different types 
    // Examples are <vector> of STL library



return 0;
}