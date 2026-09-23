#include<iostream>
#include<unordered_map>
using namespace std;

// unordered_map is similar to map, But NO sorted order
// It stored in key-value pairs, without sorted order.
// keys are unique

int main()
{
    unordered_map<int, string> employees;

    // storing values

    employees[90] = "Akhil";
    employees[67] = "Manu";
    employees[100] = "Hari";
    employees.insert({67, "Davis"});  // we can also use insert()

    // accessing the values

    cout << employees[90] << endl;

    // You can work methods of map here
    // erase() | find() | count() | size() | empty() | clear()

}