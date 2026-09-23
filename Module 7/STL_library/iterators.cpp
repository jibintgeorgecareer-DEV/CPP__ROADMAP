#include<vector>
#include<set>
#include<map>
#include<iostream>
using namespace std;
// iterator is used to traverse & access elements in STL contaners.

int main()
{
    vector<int> numbers;
    numbers = {34,67,44,22,11};

    vector<int>::iterator it;   // Create an iterator 
    it = numbers.begin();   // Now it points to first element

    cout << *it << endl;    // *it means, get the element that points by it
    it++;                  // Then we can increment the iterator to next position

    // iterator in a loop

    for(auto it = numbers.begin(); it != numbers.end(); it++)  // numbers.end() not points to 
    {                                                          // 11 (last element) instead
        cout << *it << endl;                                   // it points to element after 11
    }
    
    // list , set, map, unordered_map, unordered_set are only traversed using iterator

    // itearator with set

    set<string> names;
    names = {"Arun","Anish","Anil"};

    for(auto i = names.begin(); i != names.end(); i++)
    {
        cout << *i << endl;
    }

    // iterator with map
    map<int, string> students;
    students[89] = "Jibin";
    students[99] = "Akhil";
    students[77] = "Manu";

    for(auto x = students.begin(); x != students.end(); x++)
    {
        cout << x->first << "---" << x->second << endl;
    }

    // Iterators & pointers

    // Iterators are looks same like pointers but they are not 
    // pointer - points to memory  | iterator - moves through container

}
