#include <bits/stdc++.h>
using namespace std;

// TWO POINTERS
// Average Time Complexity = O(n)
// Space Complexity = O(1)
// Make two pointers in the array and traverse it, according to you


vector<int> twoPointers(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int currentSum = arr[left] + arr[right];
        if (currentSum == target)
            return {left, right};
        else if (currentSum < target)
            left++;
        else
            right--;
    }

    return {};
}

int main()
{

    // Given a sorted array of integers, implement a function that finds two elements whose sum is equal to the given target value. Return the indices of these two elements.

    vector<int> arr = {2, 4, 7, 9, 11, 13, 15};
    int target = 20;
    vector<int> result = twoPointers(arr, target);
    if (!result.empty())
        cout << "Indices of two elements that sum up to the target: "
             << result[0] << ", " << result[1] << endl;
    else
        cout << "No such elements found." << std::endl;
}