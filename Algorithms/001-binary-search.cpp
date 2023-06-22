#include <bits/stdc++.h>
using namespace std;

//BINARY SEARCH
// Average Time Complexity = O(log n)
// Space Complexity = O(1)
// Effectively finds a numbers in a array

int binarySearch1(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int binarySearch2(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (high - low > 1)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid;
    }

    if (arr[low] == target)
        return low;
    if (arr[high] == target)
        return high;
    return -1;
    
}

int main()
{
    // Perform a binary search and return the index of the target element.

    vector<int> arr = {11, 13, 15, 2, 9, 4, 7};
    sort(arr.begin(), arr.end()); //sorting is compulsory in binary search
    int target = 11;
    int result1 = binarySearch1(arr, target);
    int result2 = binarySearch2(arr, target);
    cout << "Target found at index: " << result1 << endl;
    cout << "Target found at index: " << result2 << endl;
}
