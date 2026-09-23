#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

// map is a container STL that stores data as key-value pairs
// 109 -> "Hari"
// 110 -> "Ebin"
// keys are unique and keys are automatically soarted

int main()
{//     key - value
    map<int, string> names;
    
    // storing data

    names[10] = "Alex";
    names[11] = "Hari";
    names[5]  = "Ebin";    // keys are unique & automatically soarted

    // accessing the values

    cout << names[10];   // prints value at key 10

    for(auto n : names)    // auto automatically sets the type
    {
        cout << n.first << n.second << endl;  // first is 'key' & second is 'value'
    }

    // methods in map

    names.end();    // return the last element in map

    int key = 10;
    names.find(key);    // find 'key' exist in map
    
    names.count(45);   // if key exist -> 1 , otherwise -> 0

    names.erase(11);   // Erase an element from map

    names.size();     // returns size of key-value pairs

    names.empty();    // Check map is empty

    names.clear();    // removes everything


    auto it = names.begin();
    cout << it->first << endl;    // returns the first element (key) using iterator
    cout << it->second << endl;  // return the second element (value) using iterator

return 0;
}