#include<iostream>
using namespace std;
int main()
{
    int base;
    cin>>base;

    int i=1;
    while(i<=base)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;

    i=1;
    while(i<=base)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;
    int count=1;
    i=1;
    while(i<=base)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count<<"\t";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }


    cout<<endl;

    i=1;
    while(i<=base)
    {
        int j=1;
        int count=i;
        while(j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        i++;
        cout<<endl;
    }

    cout<<endl;

    i=1;
    while(i<=base)
    {
        int j=1;
        int count=i;
        while(j<=i)
        {
            cout<<count<<" ";
            j++;
            count--;
        }
        i++;
        cout<<endl;
    }
}