#include <bits/stdc++.h>
using namespace std;

// Today's Date - 10 August 2023
// Topic - Dynamic Programming Question Frog 2
// que link - https://atcoder.jp/contests/dp/tasks/dp_b
// video link - https://youtu.be/mnuBvHbMNJM

const int N = 1e5 + 10;
long long dp[N]; // will store minimum cost of jump to nᵗʰ stone from stone 1

long long jump(int n, int k, vector<int> &height) // will return minimum cost of jump to nᵗʰ stone from stone 1
{
    if (n == 1)
        return 0;
    if (dp[n] != -1) //this is the main concept of dynamic programming, using the stored values
        return dp[n];
    if (n >= 2 && n <= (k + 1))
    {
        return abs(height[n] - height[1]);
    }
    long long minimum = INT_MAX;
    for (int i = n - k; i < n; i++)
    {
        if (n < 1)
            continue;
        long long cost = jump(i, k, height) + abs(height[n] - height[i]);
        minimum = min(minimum, cost);
    }
    return dp[n] = minimum;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    vector<int> height(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> height[i];
    cout<<jump(n,k,height)<<endl;
}