#include<iostream>
#include<array>   // To include STL Array
using namespace std;

// std::array is an fixed-size container that provides the functionality of a normal C++ array
// along with useful STL functions.
// To create an array : array<data_type, size> name;

int main()
{
    array<int, 5> numbers;  // Here we create an array of fixed size 5.
    numbers = {5,7,3,1,2};

    cout << numbers[5];   // accessing element

    numbers.fill(90);  // assing the value 90 to every index
                      //  so the array will full of '90'

    // The STL array does not support all the vector methods

    // methods works on STL array,
    cout << numbers.at(2);

    cout << numbers.front();

    cout << numbers.back();

    cout << numbers.size();

    cout << numbers.empty();

    cout << numbers.begin();

    cout << numbers.end();

            numbers.fill(565);     // Not works on vector

}
