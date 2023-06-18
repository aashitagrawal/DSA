#include<bits/stdc++.h>
using namespace std;
int main()
{
    // useful modulo property
    // 1. (a+b)%m = (a%m + b%m)%m  
    // 2. (a*b)%m = (a%m * b%m)%m
    // 3. (a-b)%m = (a%m - b%m + m)%m
    // 4. (a/b)%m = (a%m * b^-1%m)%m

    //why the number is 10^9+7
    // 10^9+7 is a prime number
    // 10^9+7 fits in integer data type
    // 10^9+7 has multiplication inverse

    //Find 2^n and mod your answer with 10^9+7
    int n;
    cin>>n;
    int M = 1000000007;
    int ans=1;
    for(int i=0; i<n; i++){
        ans = (ans%M * 2%M)%M;
    }
    cout<<"2 to the power "<<n<<" : "<<ans<<endl;
}