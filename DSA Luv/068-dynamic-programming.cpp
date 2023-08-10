#include <bits/stdc++.h>
using namespace std;

// Today's Date - 9 August 2023
// Topic - Dynamic Programming

// Some of the standard problems in DP
// 1. Coin Change
// 2. Edit Distance
// 3. Rod Cutting
// 4. Longest Increasing Subsequence
// 5. Knapsack - subset problem
// 6. Longest common subsequence / substring

// Fibonacci Seires - 0 1 1 2 3 5 8 13 21 34 ...
// Time complextiy of recursion - Number of function calls * time complexity of the function
// Here, number of function calls = 2ⁿ * O(1) = O(c)

// BOTTOM DOWN APPROACh
const int N = 1e5 + 10;
int dp[N];
int fib(int n) // this returns nth fibonacci number
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    //memoise
    return dp[n] = fib(n - 2) + fib(n - 1);
}

int main()
{
    // Using DP time complexity is from O(2ⁿ) to O(n)
    memset(dp, -1, sizeof(dp));
    cout << "Enter n : ";
    int n;
    cin >> n;
    cout << "nth fibonacci number is : " << fib(n) << endl;
}