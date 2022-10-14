#include<iostream>
using namespace std;
int main()
{
    int base;
    cin>>base;

    char ch ='A';
    int i=1;
    while(i<=base)
    {
        int j=1;
        while(j<=3)
        {
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
    cout<<endl;
    i=1;
    while(i<=base)
    {
        char ch ='A';
        int j=1;
        while(j<=base)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;

    i =1;
    ch='A';
    while(i<=base)
    {
        int j=1;
        while(j<=base)
        {
            //code
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;

    i=1;
    ch='A';
    while(i<=base)
    {
        int j=1;
        char ch1 = ch;
        while(j<=base)
        {
            cout<<ch1<<" ";
            ch1++;
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }

    cout<<endl;

    i =1;
    ch='A';
    while(i<=base)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }

    cout<<endl;

    i =1;
    ch='A';
    while(i<=base)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
        ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;

    i =1;
    ch='A';
    while(i<=base)
    {
        int j=1;
        char ch1=ch;
        while(j<=i)
        {
            cout<<ch1<<" ";
            ch1++;
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }

    cout<<endl;
    int index=64+base;
    ch = (char)index;
    i=1;
    while(i<=base)
    {
        int j=1;
        char ch1=ch;
        while(j<=i)
        {
            cout<<ch1<<" ";
            ch1++;
            j++;
        }
        cout<<endl;
        ch--;
        i++;
    }
    
    
    
}