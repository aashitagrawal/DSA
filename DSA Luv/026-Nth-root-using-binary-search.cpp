#include <bits/stdc++.h>
using namespace std;

// Today's date - 22 June 2023
// Topic - Nth root of a number using binary search

double findRoot(double num, double root)
{
    const double precision = 1e-10;
    double low = 0, high = num/2, mid;
    while (high - low > precision)
    {
        mid = low + (high - low) / 2;

        double midMultiplied = 1;
        for (int i = 0; i < root; i++)
            midMultiplied *= mid;

        if (midMultiplied < num)
            low = mid;
        else
            high = mid;
    }
    return (high+low)/2;
}

int main()
{
    cout << "Enter number :  ";
    int n;
    cin >> n;
    cout << "What root to find : ";
    int root;
    cin >> root;
    cout << "Ans = " << setprecision(10) << findRoot(n, root);
}