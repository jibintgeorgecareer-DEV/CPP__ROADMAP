#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int length_of_string(string s)
{
    return s.size(); //return s.lenght();
}

string reverse_a_string(string s)
{
   reverse(s.begin(),s.end()); //modify and store in variable s
   return s;
}

bool is_string_palindrome(string s)
{
    string copy = s;
    reverse(s.begin(),s.end());
                                
    if(copy == s)
    {
        return true;  //If string is palindrome returns 1
    }
    return false;
}

void count_vowel_digits_space_consonant(string s) //consonant = NOT vowel BUT alphabet letter
{
    int vowel = 0;
    int digits = 0;
    int space = 0;
    int consonant = 0;

    for(char i : s)
    {
        i = tolower(i);
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
        {
            vowel++;
        }
        else if(i == ' ')
        {
            space++;
        }
        else if(isdigit(i))
        {
            digits++;
        }
        else if(isalpha(i))
        {
            consonant++;
        }
    }
    cout<<"Vowel:"<<vowel<<"\nDigits:"<<digits<<"\nSpace:"<<space;
}

string remove_space(string s)
{
    s.replace(s.find(" "),1,""); //Find the index of "space" , then replace with NULL
    return s;
}

void find_frequency(string s) // How many time a character is presents
{
    int freq[s.size()] = {0};

    for(int i=0;i<s.size();i++)
    {
        char ch = s[i];

        for(int j=0;j<s.size();j++)
        {
            if(s[j] == ch) //OR you can s[i] == s[j]
            {
                freq[i]++;
            }
        }
    }

    int lenOffreq = sizeof(freq) / sizeof(freq[0]);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<"->"<<freq[i]<<endl;
    }
}

int count_words(string s)
{
    int count = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }
    }
    return count + 1;
}

void check_anagrams(string s1, string s2)
{
    if(s1.size() != s2.size())
    {
        cout<<"Not Anagram";
        return;
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1 == s2)
    {
        cout<<"Anagram";
    }
}

int main()
{
    string name = "Jibin";
    string str = "Hello there";

    length_of_string(name);        //Find lenght of string
    reverse_a_string(str);        //Reverse a string
    is_string_palindrome("name"); // Palindrome check
    //count_vowel_digits_space_consonant(str); //Count vowel,space,consonant,digits
    remove_space(str);            //Remove space from string
    //find_frequency(name);
    count_words(str);
    check_anagrams("listen","silent"); //Anagram Check

return 0;
}