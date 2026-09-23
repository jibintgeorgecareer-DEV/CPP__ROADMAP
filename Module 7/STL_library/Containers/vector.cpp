#include<iostream>
#include<vector>    // To include vector 
using namespace std;

// vector is a dynamic array that can automattically grow & shrink while storing SAME ELEMENTS
// of the same data type.
// vector is a template

int main()
{
    vector<int> numbers;   // Creating an empty array
    vector<string> names = {"Hari","Gopu","Jibin"};   // With values

    // storing elements
    numbers.push_back(10);
    numbers.push_back(20);     // We use the method push_back() to store 

    // accessing elements
    cout << numbers[0];
    cout << numbers[1];       // We can access elements like an array.

    cout<< numbers.at(1);     // Or u can use the method at()
    cout<< numbers.at(1);     // at() throws an exception if index is invalid

    // modify elements
    numbers[1] = 1000;        // Modify using index or we can use at()
    numbers.at(2) = 2000;

    // removing elements
    numbers.pop_back();       // Removes the last element | Not return the value


    // looping through vector

    for(int i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }

            // Range Based Loop

            for(string n : names)   // This is the common way in STL
            {
                cout << n << endl;
            }

    // ----------------- Commom Method to learn -------------------------------

    cout << numbers.size();   // Returns the numbers of element

    cout << numbers.at(0);    // Returns the value at index '0'

    cout << numbers.front();  // Gets the first element

    cout << numbers.back();   // Gets the last element

            numbers.push_back(899);  // Add an elemets at end

            numbers.pop_back();      // Removes an element

    cout << numbers.empty();   // Check if the vector conatins elements

            numbers.clear();   // Removes all the elements

            numbers.insert(numbers.begin() + 1, 100); // Insert elements at specific spot

            numbers.erase(numbers.begin() + 2);   // Remove element at specific spot
            
            numbers.begin();  // Position to the first element
            
            numbers.end();    // Position to the last element.

}