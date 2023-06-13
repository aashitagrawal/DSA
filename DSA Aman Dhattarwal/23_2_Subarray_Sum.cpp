#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int sum=0;
    for(int i=0; i<n; i++) //high time complexity
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                sum+=arr[k];
            }
            cout<<sum<<" ";
            sum=0;
        }
    }
    cout<<endl;
    sum=0;
    for(int i=0; i<n; i++) //less time complexity
    {
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
        sum=0;
    }
}