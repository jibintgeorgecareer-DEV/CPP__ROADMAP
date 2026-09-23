#include<iostream>
#include<string> //Basic string
#include<cctype> //toupper() & tolower()
#include<algorithm> //reverse()
using namespace std;

// Strings in C++
// String is a collection of characters

int main()
{
    string name = "Jibin"; // Char stores single character while string stores collection of it
    string dept;
    char c = 'H';
    getline(cin, dept); // Reads entire line | cin>> ends read where find empty space
    
    cout<<name[1]; // We can access string with index like an array and loop through it

    for(char i : name)  // Range based loop (C++ 11) | alternate version of for loop 
    {
        cout<<i;
    }

    //-----------------String Functions----------------------------------------------------------
    
    // 1. lenght() - Returns number of characters
    cout<< name.length();

    // 2. size() - Returns size of string (same as lenght)
    cout<< name.size();

    // 3. empty() - Check string is empty or not (true OR false)
    cout<< name.empty();

    // 4. clear() - Removes all character from string
           name.clear();
           
    // 5. append() - Adds text at end of string
           name.append("T Geroge");

    // 6. Concatenation (+) join two strings
    cout<< name + " " + dept;

    // 7. find() - Finds position (Return index where word is starting)
    cout<< name.find("George");    //if not found returns string::npos

    // 8. substr() - Extract a part of string
    cout<< name.substr(2,6);    //Start from 2 to 5

    // 9. erase() - Removes Characters
    cout<< name.erase(2,1);     //Remove 1 char from index 2

    // 10. insert() - insert characters
    cout<< name.insert(7," ");   //Insert " " at index 7

    // 11.replace() - Replace part of a string
           name.replace(7,2,"value");    //Replace char 2 char from 7 with "value"
    
    // 12.compare() - Compare two string (0 if strings are same)(+ve if name>dept) using ASCII
    cout<< name.compare(dept);

    // 13.at() - access characters like index
    cout<< name.at(2);

    // 14.front() - Returns first character
    cout<< name.front();

    // 15.back() - Returns last character
    cout<< name.back();

    // 16.pop_back() - Removes last character
           name.pop_back();
        
    // 17.push_back() - Adds one character to end
           name.push_back('H');

    // 18.toupper() - Makes string uppercase
           toupper(c);        //Only works with char type
    
    // 19.tolower() - Makes the string lowercse
           tolower(c);
    
    // 20.reverse() - Reverse a string
           reverse(name.begin(),name.end());

    // 21.isalpha() - check char is letter
    cout<< isalpha(c);  

    // 22.islower() & isupper()
    cout<< isupper(c); cout<< islower(c);
}