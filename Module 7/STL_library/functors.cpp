#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

// A function object is also called a functor, ie an object can be used like a function
// makes objects behave like a function
class Add
{
    public:
        int add_num(int a, int b)
        {
            return a + b;
        }
};

// In main, we can do
// Add add;                                 this is a function object
// cout << add(89,99);

// sort(numbers.begin(), numbers.end());     is a function object  

// Some function object provided by <functional>
// greater<T>(), less<T>(), plus<T>()

int main()
{
    vector<int> nums = {74,53,1,2,6,77,8,54,90};

    sort(nums.begin(), nums.end(), greater<int>());
}