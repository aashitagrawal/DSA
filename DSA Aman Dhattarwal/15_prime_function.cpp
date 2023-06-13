#include<iostream>
using namespace std;

bool isPrime (int num)
{
    int flag=0;
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return false;
    else
    return true;
}

int main()
{
    cout<<endl<<"Find prime numbers between 2 numbers"<<endl;
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1; i<=n2; i++)
    {
        if(isPrime(i))
        cout<<i<<", ";
    }
}