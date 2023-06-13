#include<iostream>
using namespace std;

int fact (int number)
{
    int n=1;
    for(int i=1; i<=number; i++)
    {
        n=n*i;
    }
    return n;
}

int fact1 (int number)
{
    if(number==1 || number==0)
    {
        return 1;
    }
    else
    {
        return ((number)*fact1(number-1));
    }
}

int main()
{
    int num;
    cin>>num;
    cout<<fact(num);
    cout<<endl<<fact1(num);
}