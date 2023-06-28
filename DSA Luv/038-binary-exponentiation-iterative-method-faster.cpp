#include<bits/stdc++.h>
using namespace std;

// Today's Date - 28 June 2023
// Topic - BInary exponentaion using iteration

int M = 1e9+7;

int power(int a, int b) // 3^13 = 3^(1101) in binary = 3^8 * 3^4 * 3^0
{
    long long ans = 1;
    while(b)
    {
        if(b&1)
            ans = ans * a;
        a = a* a;
        b = (b>>1);
    }
    return ans;
} 

int powerr(int a, int b) // using modulo
{
    long long ans = 1;
    while(b)
    {
        if(b&1)
            ans = (ans * a)%M;
        a = (a* a)%M;
        b = (b>>1);
    }
    return ans;
}

int main()
{
    cout<<"Enter two numbers a^b :";
    int a,b;
    cin>>a>>b;
    cout<<"Ans = "<<power(a,b)<<endl;

    cout<<"Enter two numbers a^b :";
    cin>>a>>b;
    cout<<"Ans = "<<powerr(a,b)<<endl;;
}