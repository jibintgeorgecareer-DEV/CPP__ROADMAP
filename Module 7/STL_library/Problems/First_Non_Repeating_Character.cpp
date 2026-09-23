#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

char non_char(string input)
{
    unordered_map<char, int> freq;
    char non_repeater;
    
    for(int i = 0; i < input.size(); i++)
    {
        char ch = input[i];

        freq[ch]++;
    }

    for(int i = 0; i < input.size(); i++)
    {
        char ch = input[i];

        if(freq[ch] == 1)
        {
            non_repeater = ch;
            break;
        }
    }
    
return non_repeater;
}


int main()
{
    string str;

    cout << "Enter String:";
    cin >> str;

    cout << "\nThe First Non Repeater ";
    cout << non_char(str);

return 0;
}