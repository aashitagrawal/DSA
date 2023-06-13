#include<iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1; i<=k; i++)
    {
        for(int j=k; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=1; i<=k; i++)
    {
        for(int j=k; j>=1; j--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }


}