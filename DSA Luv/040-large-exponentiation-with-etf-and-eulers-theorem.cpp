#include<bits/stdc++.h>
using namespace std;

// Today's Date - 28 June 2023
// Topic - Large Exponentiation with ETF & Euler's Theorem
// Finding A^B % M when B is very Large using Euler Totient Function(ETF) & Euler's Theorem
//💡 basically bhai bahut bade exponential power nikalna ho, toh ETF use karna

// if 'M' is prime - 1e9+7👍
// then, aᵇ % M  =  (a ^ (b%(M-1)) ) % M
// if 'M' is not prime, lets say 1337
// then find its prime factors p1,p2,p3.... then use this formula to calculate phi = (p1-1)(p2-1)(p3-1)...
//Here prime factors are 7 ,191, therfore phi = 6*190 = 1140
// so final formula will be - 
// aᵇ % M  =  (a ^ (b%(phi-1)) ) % M


long long M = 1e18+7;

int power(long long a, long long b, long long m)
{
    a = a%m;
    int ans = 1;
    while(b>0)
    {
        if(b&1)
            ans = (ans * 1LL * a) % m;
        a = (a * 1LL * a) % m;
        b>>=1;
    }
    return ans;
}

int main()
{
    // if 'M' is prime - here 1e18+7 is prime 
    cout<<power(50,power(64,32,M-1),M);
}