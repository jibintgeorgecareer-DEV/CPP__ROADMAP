#include<iostream>
#include<list>
using namespace std;

// std::list is a STL container that implements a doubly linked list
// list is sequence of container where elements are stored in separated nodes connected to
// each other, allowing insertion/deletion from anywhere in list.
// Each element is a node connected to the previous and next element.
// FIRST STUDY LINKED LIST (DONE)

int main()
{
    list<int> numbers;
    numbers = {10,20,30,40};  // [10] ↔ [20] ↔ [30] ↔ [40]
                              // Each element is a node connected to the previous and next element.

    // storing elements
    
    numbers.push_back(34);  // add element at back
    numbers.push_front(77); // add element at front

    // remove elements

    numbers.pop_back();  // remove element at back
    numbers.pop_front(); // remove element front

    // accessing element

    cout << numbers.front();  // Gets the first element
    cout << numbers.back();   // Gets the last element

    // loop through list

    for(int num : numbers)
    {
        cout << num << endl;
    }

    // Imp methods of list
    cout << numbers.size();   // Returns number of elements

    cout << numbers.empty();  // Check list is empty OR not

   //       numbers.clear();  // Removes all elements
    

    // inserting at postion 

    auto it = numbers.begin();  // Creates a iterator points to front element

    advance(it, 2);    // moves the iterator to 2 postion 

    numbers.insert(it, 299);   // Inserted at position of iteratot 'it' value 299

    numbers.erase(it);      // removes value at 'it'

    numbers.remove(20);    // removes all elements where value is 20

    numbers.reverse();    // reverse the list

    numbers.sort();    // sort the list in ascending order

    numbers.sort(greater<int>());  // sort list in descending order.

    numbers.unique();   // removes all duplicate values

    list<int> list_2;

    numbers.merge(list_2);  // merges two lists

}