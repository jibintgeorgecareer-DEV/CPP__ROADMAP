#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// Given an array of integers, count how many times each number occurs.

void find_freq(vector<int> array, int limit)
{
    unordered_map<int, int> freq;   // for counting elements

    for(auto i : array)
    {
        freq[i]++;
    }

    map<int, int> freq_map(freq.begin(),freq.end());  // changes unordered_map into map
                                                    // Now elements are in order

    cout << "Frequency of Elements" << endl;
    cout << "_____________________" << endl;
    for(auto it : freq_map)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}


int main()
{
    int limit;
    vector<int> nums;
    int num;

    cout << "Enter Limit:";
    cin >> limit;
    cout << "\nEnter Array" << endl;

    for(int i=0;i<limit;i++)
    {
        cin >> num;
        nums.push_back(num);
    }

    find_freq(nums, limit);

return 0;
}