#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int twoPower(int n)
{
    if (n == 0)
        return 1;
    else
        return 2 * twoPower(n - 1);
}

void counting1(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";

    counting1(n - 1);
}

void counting2(int n)
{
    if (n == 0)
    {
        return;
    }

    counting2(n - 1);

    cout << n << " ";
}
int main()
{
    int n;
    cout << "Find factorial of : ";
    cin >> n;
    cout << fact(n) << endl;

    cout << "Find two power of : ";
    cin >> n;
    cout << twoPower(n) << endl;

    cout << "Reverse Counting till : ";
    cin >> n;
    counting1(n);
    cout << endl;

    cout << "Forward Counting till : ";
    cin >> n;
    counting2(n);
    cout << endl;

}