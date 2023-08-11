#include <bits/stdc++.h>
using namespace std;

// Today's Date - 10 August 2023
// Topic - Longest Increasing Subsequence

const int N = 1e5 + 10;
int dp[N];

int lis(int n, vector<int> nums) // return the length of LIS that ended on nth node
{
    // 'n' is the index
    if (dp[n] != -1)
        return dp[n];
    int maximum = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= nums[n]) // equality for strictly increasing
            continue;
        maximum = max(maximum, lis(i, nums) + 1);
    }
    return dp[n] = maximum;
}
// O(N^2), //there are N calls, and in each call a for loop is there

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = max(lis(i, v), ans);
    }
    cout << ans << endl;
}