#include <bits/stdc++.h>
using namespace std;

// PREFIX SUM ARRAY
// Average Time Complexity = O(n)
// Space Complexity = O(n)
// Computes the cumulative sum of elements in an array

vector<int> prefixSum(vector<int> &nums)
{
    vector<int> prefix(nums.size(), 0); // Initialing the size 'n' with all value as 0
    prefix[0] = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    return prefix;
}

int main()
{

    // Given an array of integers. The prefix sum array at index i should store the sum of all elements from index 0 to i in the original array. Return the prefix sum array.

    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> prefix = prefixSum(nums);

    for (auto element : prefix)
    {
        cout << element << " ";
    }
    cout << endl;
}