#include <bits/stdc++.h>
using namespace std;

// Today's Date - 9 August 2023
// Topic - Dynamic Programming Question Atcoder
// que link - https://atcoder.jp/contests/dp/tasks/dp_a
// video link - https://youtu.be/mnuBvHbMNJM

const int N = 1e5 + 10;
long long dp[N]; // will store the min cost to jump at nᵗʰ stone from stone 1

long long jump(int n, vector<int> &height) // will return the minimum cost of the nᵗʰ stone
{
    if (n == 1)
        return 0;
    if (n == 2)
        return abs(height[2] - height[1]);
    if (dp[n] != -1)
        return dp[n];
    long long a = jump(n - 2, height) + abs(height[n] - height[n - 2]);
    long long b = jump(n - 1, height) + abs(height[n] - height[n - 1]);
    return dp[n] = min(a, b);
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> height[i];

    memset(dp, -1, sizeof(dp));

    cout << jump(n, height) << endl;
}