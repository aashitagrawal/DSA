#include <bits/stdc++.h>
using namespace std;

void reachHome(int step, int dist)
{
    cout << "Step " << step << " Destinnation " << dist << endl;
    if (step == dist)
    {
        cout << "pauch gaya" << endl;
        return;
    }

    step++;

    reachHome(step, dist);
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

void sayDigit(int n, string *arr)
{
    // base condition
    if (n == 0)
        return;

    // processing
    int num = n % 10;
    n = n / 10;

    // recursion
    sayDigit(n, arr);
    cout << arr[num] << " ";
}

int main()
{
    cout << "Enter distance : ";
    int dist;
    cin >> dist;
    int step = 1;
    reachHome(step, dist);
    cout << endl;

    cout << "which term you want of fibonacii series : ";
    int n;
    cin >> n;
    cout << "ans = " << fib(n);
    cout << endl;

    cout << "Say digit : ";
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cin >> n;
    sayDigit(n, arr);
    cout << endl;
}