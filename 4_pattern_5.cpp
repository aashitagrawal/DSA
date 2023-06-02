#include<iostream>
using namespace std;
int main()
{
    int base;
    cout<<"Enter base length"<<endl;
    cin>>base;

    //2
    int i=1;
    while(i<=base)
    {  
        int j=1;
        while(j<=base-(i-1))
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }


     //1
    for(int i=1; i<=base; i++)
    {
        for(int j=1; j<=(base-i); j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //4
    i=1;
    while(i<=base)
    {
        int j=1;
        while(j<=(i-1))
        {
            cout<<"  ";
            j++;
        }

        int k=1;
        while(k<=base-(i-1))
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;
        i++;
    }
    //3
    i=1;
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

    cout<<endl;
    i=1;
    int count=1;
    while(i<=base)
    {
        int j=1;
        while(j<=(base-i))
        {
            cout<<" \t";
            j++;
        }
        
        int k=1;
        while(k<=i)
        {
            cout<<count<<"\t";
            count++;
            k++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;

    i=1;
    count=0;
    while(i<=base)
    {
        int j=1;
        while(j<=(base-i))
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i)
        {
            count++;
            cout<<count;
            k++;
        }
        int l=1;
        while(l<=(i-1))
        {
            count--;
            cout<<count;
            l++;
        }
        cout<<endl;
        count=0;

        i++;
    }

    cout<<endl;

    cout<<"dabaang pattern"<<endl;
    i=1;
    while(i<=base)
    {
        int j=1;
        while(j<=base-(i-1))
        {
            cout<<j<<" ";
            j++;
        }
        int k=1;
        while(k<=2*(i-1))
        {
            cout<<"* ";
            k++;
        }
        int l=base-(i-1);
        while(l>=1)
        {
            cout<<l<<" ";
            l--;
        }
        cout<<endl;

        i++;
    }
}
