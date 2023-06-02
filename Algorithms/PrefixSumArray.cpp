#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int>&nums)
{
    int n = nums.size();
    vector<int> prefix(n); //Initialing the size
    prefix[0] = nums[0];

    for(int i=1; i<n; i++)  prefix[i] = prefix[i-1] + nums[i];

    return prefix;
}

int main()
{
    vector<int> nums = {1,2,3,4,5};
    vector<int> prefix = prefixSum(nums);
    
    for(auto element: prefix)   cout<<element<<" ";
    cout<<endl;
}