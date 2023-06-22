#include<bits/stdc++.h>
using namespace std;

// Today's date - 22 June 2023
// Topic - Implementing lower_bound and upper_bound using binary search

// ⚠️array should be sorted before finding lower and upper bound⚠️
// lower_bound - returns the index of the first element that is greater than or equal to the given key
// upper_bound - returns the index of the first element that is greater than the given key
// time complexity - O(logn)
// space complexity - O(1)

int lower_bound(vector<int>&v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    while(high - low > 1)
    {
        int mid = low + (high-low)/ 2;
        if (v[mid] < target)
            low = mid + 1;
        else
            high = mid;
    }
    if(v[low] >= target)
        return low;
    if(v[high] >= target)
        return high;
    return -1;
}

int upper_bound(vector<int>&v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    while(high - low > 1)
    {
        int mid = low + (high-low)/ 2;
        if (v[mid] <= target)
            low = mid + 1;
        else
            high = mid;
    }
    if(v[low] > target)
        return low;
    if(v[high] > target)
        return high;
    return -1;
}


int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    vector<int>v(n); // vector of size n, with initial value 0 of all elements

    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    cout<<"Enter the target element: ";
    int target;
    cin>>target;

    cout<<endl<<"Array = "; for(auto ele:v)cout<<ele<<" "; cout<<endl;
    int l = lower_bound(v, target);
    int u = upper_bound(v, target);
    cout<<"Lower bound: Index = "<<l<<", Value = "<<v[l]<<endl;
    cout<<"Upper bound: Index = "<<u<<", Value = "<<v[u]<<endl;
}