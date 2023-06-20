#include <bits/stdc++.h>
using namespace std;

// Today's date - 20 June 2023
// Topic - Intro to Recusrion

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return fact(n - 1) * n;
}

int main()
{
    int n;
    cout << "Enter number to find factorial : ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
}

// 1. Number of function calls -> n
// 2. Complexity of each call -> O(1)
// Final time complexity = O(n)