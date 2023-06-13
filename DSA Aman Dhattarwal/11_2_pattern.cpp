#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>(i); j--) //spaces
        cout<<" ";
        for(int j=1; j<=n; j++) //stars
        cout<<"*";

        cout<<endl;
    }
}