#include <bits/stdc++.h>
using namespace std;

// Today's Date - 1 July 2023
// Topic - Modular Multiplicative Inverse : Modular Arithmetic for Division
//  In formula : (a/b)%m = (a%m * b^-1%m)%m
//  Calculating : b^-1%m

const int M = 1e9 + 7;

int power(int a, int b)
{
    a = a % M;
    int result = 1;
    while (b > 0)
    {
        if (b & 1)
            result = (result * 1LL * a) % M;
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return result;
}

const int N = 1e4+10;
int main()
{
    // 💡💡 (a ^ -1)% m = (a ^ (m-2))
    // 'm' should be prime number

    //So a question regarding this
    // Do this for Q queries
    // There are K chocolates to distribute among N children, K<N, find number of ways you can do it, give answer in modulo 1e9+7
    // 0 < K < N < 1e6
    // 0 < Q < 1e5

    //Solution - nCk = n! / n-r!. r!
    int fact[N];
    fact[0]=1;
    for(int i=1; i<N; i++)
        fact[i] = (fact[i-1] * 1LL * i) % M;

    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int ans;
        int numerator = fact[n];
        int denominator = (fact[n-k] * 1LL * fact[k]) %M;
        ans = (numerator%M * 1LL * power(denominator,M-2)) %M;
        cout<<ans<<endl;
    }
    
}