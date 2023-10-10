#include <bits/stdc++.h>
using namespace std;

// Today's Date - 9 October 2023
// Topic - Rod Cutting Problem

// ⚠️TOP DOWN APPROACH⚠️

int func(int len, vector<int>& prices, int dp[]) //reutrn max price if we have rod of length 'len'
{
    if(len==0)
        return 0;
    if(dp[len]!= -1)
        return dp[len];
    int ans = 0;
    for(int length_to_cut = 1; length_to_cut<= prices.size(); ++length_to_cut)
        if(len-length_to_cut >= 0)
            ans = max(ans, func(len-length_to_cut, prices, dp) + prices[length_to_cut-1]);
    return dp[len] = ans;
}

int cutRod(int price[], int n)
{
    int dp[1005];
    memset(dp, -1, sizeof(dp));
    vector<int> prices(price, price+n);
    return func(n, prices, dp);
}

int main()
{
    int n;
    cout<<"Enter size of rod : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<"Max price - "<<cutRod(arr, n)<<endl;

}