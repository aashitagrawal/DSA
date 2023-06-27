#include <bits/stdc++.h>
using namespace std;

// Today's Date - 27 June 2023
// Topic - GCD and LCM using Euclids algorithm

// 💡 GCD - Greatest common divisor  or  HCF - Highest Common Factor
//  LCM - Least common multiple
// How to find
//  Example 4 , 18
//  Method 1 - by common sense
//  HCF - 2 is the highest number that divides both 4 and 18
//  LCM - 36 is the lowest number that can divide 4 and 18
//  Method 2 - by prime factorisation method
//  4 = 2² * 3⁰
//  18 = 2 * 3²
//  HCF : lowest powers of all = 2 * 3⁰ = 2
//  LCM : highest powers of all = 2² * 3² = 36

// 💡 relation between GCD and LCM
//  a * b = gcd * lcm

int hcf(int a, int b)
{
    if (b % a == 0)
        return a;
    else
        hcf(b % a, a);
}

int main()
{
    // Calculate GCD / HCF using long division method
    cout << "Calculate HCF of two number : ";
    int a, b;
    cin >> a >> b;
    int ans = hcf(a, b);
    cout << "HCF = " << ans << endl;
    cout << "LCM = " << (a * b) / hcf(a, b) << endl;
    // time complexity log(n)

    // GCD inbuilt function
    cout<< __gcd(18,4)<<endl;
}