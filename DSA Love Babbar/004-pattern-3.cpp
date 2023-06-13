#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size length of square"<<endl;
    cin>>n;
    int count=1;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=count; j<=count+(n-1); j++)
        {
            cout<<j<<"\t";
        }
        count+=n;
        cout<<endl;
    }

}