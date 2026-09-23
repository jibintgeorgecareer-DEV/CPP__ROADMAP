#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Given an array of integers, find the second largest distinct element.

vector<int> remove_duplicates(vector<int> array) // first i am going to remove the duplicates from
{                                                // the array
    vector<int> unique_array;
    int k = 0;

    for(int i=0;i<array.size();i++)
    {
        bool exists = false;

        for(int j=0; j<k; j++)
        {
            if(array[i] == unique_array[j])
            {
                exists = true;
                break;
            }
        }

        if(!exists)
        {
            unique_array.push_back(array[i]);
            k++;
        }
    }

    return unique_array;   // The array become in unique values
}

int second_largest(vector<int> array) // find second largest
{
    int first = array[0];
    int second = 0;

    sort(array.begin(), array.end());  // Sorting the array

    for(int i = 0; i < array.size(); i++)
    {
            if(array[i] > first)
            {
                second = first;
                first = array[i];
            }
            else if(array[i] > second && array[i] != first)
            {
                second = array[i];
            }
    }

    return second;
}


int main()
{
    vector<int> nums = {90,10,90,50,12,45,55};

    cout << "The Second Largest Element is ";
    cout << second_largest(remove_duplicates(nums));

    
}