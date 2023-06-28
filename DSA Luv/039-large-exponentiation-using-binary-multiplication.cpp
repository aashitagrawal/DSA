#include<bits/stdc++.h>
using namespace std;

// Today's Date - 28 June 2023
// Topic - Large Exponentiation using Binary Multiplication

// CASES : 
// (a ^ b) % M
//          CASE : 1
// if value of 'a' ranges upto 10^18 : Then we will simply mod it with 'M' because
// (a^b)%M = ((a%m)^b)%M
//          CASE : 2
// if value of 'm' ranges upto 10^18 : Then when we will multiply a * a, it will overflow, so we have to make a multiplication function that returns 'moded multiplied value' without any overflow

// Case 3 : if b ranges upto 10^18, next code

long long M = 1e18+7;

long long multiply(long long a, long long b) // 3 * 13 = 3 * 1101 (in binary) = 3 * (8 + 4 + 1)
{
    long long ans = 0;
    while(b>0)
    {
        if(b&1)
            ans = (ans + a) %M;
        a = (a + a) % M;
        b = (b>>1);
    }
    return ans;   
}

int power(long long a, long long b) // 3^13 = 3^(1101) in binary = 3^8 * 3^4 * 3^0
{
    a = a%M;
    long long ans = 1;
    while(b>0)
    {
        if(b&1)
            ans = multiply(ans,a);
        a = multiply(a,a);
        b = (b>>1);
    }
    return ans%M;
} 


//Time complexity = (log(n))^2
int main()
{
    // 0 <= a <= 10^18
    // 0 <= b <= 10^9
    // M = 10^18 + 7
    cout<<power(99999999999999,999999);
}