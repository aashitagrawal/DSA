#include <bits/stdc++.h>
using namespace std;

// Today's Date - 14 August 2023
// Topic - Knapsack DP

// que link - https://atcoder.jp/contests/dp/tasks/dp_d
// video link - https://youtu.be/tkoM1Pgt0Q4

// The knapsack problem involves selecting a combination of items with specific values and weights to maximize the total value while staying within a given weight constraint.

// 0-1 knapsack, 0-1 because either we can select an item or we cannot, and 1 denotes, we can select an item only once
// unbounded knapsack, we can select the item any number of times

const int N = 1e5 + 10;
int value[105], weight[105];
long long dp[105][N];

long long knapsack(int index, int weight_left) // returns max sum of values possible, parameters - till which index to consider and what weight is empty
{
    // Base conditions
    if (weight_left == 0)
        return 0;
    if (index < 0)
        return 0;

    if (dp[index][weight_left] != -1)
        return dp[index][weight_left];

    // Choose the index
    long long ans1 = -1;
    if (weight_left - weight[index] >= 0)
        ans1 = knapsack((index - 1), weight_left - weight[index]) + value[index];

    // Didn't choose the index
    long long ans2 = -1;
    ans2 = knapsack(index - 1, weight_left);

    long long ans = max(ans1, ans2);
    return dp[index][weight_left] = ans;
}

int main()
{
    // 0-1 knapsack
    memset(dp, -1, sizeof(dp));
    int n, w; // items, weight capacity
    cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> weight[i] >> value[i];
    cout << knapsack(n - 1, w) << endl;
}