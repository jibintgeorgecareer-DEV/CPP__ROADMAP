#include<iostream>
#include<set>
using namespace std;

// set stores unique elements in soarted order automatically
// NO duplicate values 

int main()
{
    set<int> numbers;

    // storing values
    
    numbers.insert(89);
    numbers.insert(23);
    numbers.insert(123);   // set automatically order the element in ascending
                          // duplicated values are ignored  
    
    // Loop through set

    for(int num : numbers)
    {
        cout << num << endl;    
    }

    // some methods of set

    numbers.find(89);   // If element is present, find() return iterator point to 89
                        // OR it return numbers.end()

    numbers.count(89);   // return 1 if present otherwise 0
    
    numbers.erase(89);     // removes an element

    numbers.size();      // return number of elements

    numbers.empty();    // Check set is empty OR not

    numbers.clear();    // removes all elements

    // set with iterator

    auto it = numbers.begin();
    cout << *it;     // Prints the first elements of the set.

return 0;
}