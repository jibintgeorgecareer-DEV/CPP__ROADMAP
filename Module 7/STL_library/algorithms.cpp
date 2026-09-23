#include<iostream>
#include<algorithm>   // INCLUDE 
#include<vector>
#include<list>
using namespace std;

// STL algorithm is read-made functions provided by C++ that performs common operations on
// containers. such as,
// sort, find, count, reverse, min, max, remove elements...

int main()
{
    vector<int> numbers = {764,889,32,11,90,100};
    list<float> my_list = {200,100,800,500,300};

    vector<int>:: iterator it;
    it = numbers.begin();

    // Sort elements ----------------------------------------

    sort(numbers.begin(), numbers.end());     // Sort the vector in ascending order
    
    sort(numbers.begin(), numbers.end(), greater<int>()); // Sort in descending order

    my_list.sort();  // list have its own function for soarting


    // Reverse elements -------------------------------------

    reverse(numbers.begin(), numbers.end());   // Reverse the elements


    // Search for an element --------------------------------

    int target = 11;   // Imagine want to find number 11

    if(find(numbers.begin(), numbers.end(), target) != numbers.end())
    {
        cout << "FOUND" << endl;     // find() returns an iterator that points to "11"
    }

        // Other way (not common)

        auto ite = find(numbers.begin(), numbers.end(), 11);

        if 
        (ite != numbers.end())
        {
            cout << "FOUND" << endl;
            cout << *ite << ": element" << endl;
        }
    

    // Count the elements  appears

    int count_num = count(numbers.begin(), numbers.end(), target); // returns how many times 11
                                                                   // appears
    
    // find the largest element

    it = max_element(numbers.begin(), numbers.end());
    cout << "Largest Element:" << *it << endl;


    // find the minimum element

    it = min_element(numbers.begin(), numbers.end());
    cout << "Smallest Element:" << *it << endl;


    // Search an element using Binary Search 

    if(binary_search(numbers.begin(), numbers.end(), target))
    {
        cout << "FOUND";           // The elements should be soarted for work correctly
    }


    // Swap two values

    swap(numbers[0], numbers[1]);  // '0' element goes to '1' | '1' goes to '0'


    // Fill a range of same values

    fill(numbers.begin(), numbers.end(), 999);   // numbers will have full of 999


    // remove an element

    numbers.erase(remove(numbers.begin(), numbers.end(), 999), numbers.end());
                                          // It removes all "999" values





}
