#include<bits/stdc++.h>
using namespace std;

// Today's Date - 14 August 2023
// Topic - Knapsack question

//que link - https://atcoder.jp/contests/dp/tasks/dp_e
//video link - https://youtu.be/gHVtY5raAQg


int weight[105], value[105];
long long dp[105][100005];

long long knapsack(int index, int value_left) // returns minimum weight, parameters - considering till that index, whose value is 'value' 
{
    if(value_left==0)
        return 0;
    if(index<0)
        return 1e15; //index<0 means no more item left but still value_left is there, therefore not possible so return a huge value
    if(dp[index][value_left]!=-1)
        return dp[index][value_left];

    // Dont choose
    long long ans1 = knapsack(index-1, value_left);

    //Choose
    long long ans2 = 1e15;
    if(value_left - value[index >= 0])
    long long ans2 = knapsack(index-1, value_left-value[index]) + weight[index];

    long long ans = min(ans1, ans2);

    return dp[index][value_left]=ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n,w;
    cin>>n>>w;
    for(int i=0; i<n; i++)
        cin>>weight[i]>>value[i];

    int max_value = 1e5;
    for(int i = max_value; i>=0; i--)
    {
        if(knapsack(n-1, i) <= w)
        {
            cout<<i<<endl;
            break;
        }
    }
}