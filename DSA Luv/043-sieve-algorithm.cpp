#include <bits/stdc++.h>
using namespace std;

// Today's Date - 29 June 2023
// Topic - Sieve Algorithm: How to find Prime Numbers Optimally
// 💡 The Sieve of Eratosthenes is an efficient algorithm for finding all prime numbers up to a given limit by iteratively marking the multiples of each prime number as composite.
int main()
{
    const int N = 1e7+10;
    vector<bool> isPrime(N, true); 

    isPrime[0] = isPrime[1] = false;


    // SIEVE ALGORITHM
    //do no optimization here, becuase no need, zada farak nahi hai, also we will see different variations of sieve algorithms where the optimizations won't work
    for (int i = 2; i * i <= N; i++) 
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    // Time Complexity - N * log(log(N))

    cout<<"All Prime numbers upto 1e7+10 are :  "<<endl;
    for(int i=0; i<1000; i++)
        if (isPrime[i])
            cout<<i<<endl;


}