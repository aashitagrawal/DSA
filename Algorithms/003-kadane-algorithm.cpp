#include <bits/stdc++.h>
using namespace std;

// KADANE ALGORITHM
// Average Time Complexity = O(n)
// Space Complexity = O(1)
// You can find the maximum sum of a subarray

int kadanesAlgorithm(const vector<int> &arr)
{
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int num : arr)
    {
        currentSum = max(num, currentSum + num);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{

    //  Given an array of integers, this finds the maximum sum of any contiguous subarray within the given array and returns it.

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = kadanesAlgorithm(arr);
    cout << "The maximum sum of a subarray is: " << result << endl;
}
