#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

// Given an array of integers, remove all duplicate values and return the unique values.

void remove(vector<int> array, int limit)
{
    vector<int> unique_array;    // To store unique elements
    int k = 0;            // index for unique elements

    for(int i=0;i<limit;i++)
    {
        bool exists = false;

        for(int j=0;j<k;j++)
        {
            if(array[i] == unique_array[j]) // check array[i] already in unique_array
            {                               // break j loop
                exists = true;
                break;
            }
        }                                   // j loop boundry here |
        
            if(!exists)
            {
                unique_array.push_back(array[i]);
                k++;
            }

          
    }

    cout << "\nThe Unique Elements.." << endl;

    for(int i=0;i<k;i++)    
    {
        cout << unique_array[i] << " ";
    }
}


int main()
{
    vector<int> nums;
    int limit;

    cout << "Enter Limit:";
    cin >> limit;

    int input;
    for(int i=0;i<limit;i++)
    {
        cin >> input;
        nums.push_back(input);
    }

    remove(nums, limit);

return 0;
}