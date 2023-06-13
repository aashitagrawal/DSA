#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin>>n;     int arr[n];     for(int i=0; i<n; i++){cin>>arr[i];}

    cout<<"Enter the given sum : ";
    int s;      cin>>s;

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {
            if(sum!=s)
            {
                sum+=arr[j];
            }
            else if(sum==s)
            {
                cout<<endl<<"The indices are : "<<i<<" to "<<j-1;
                break;
            }
            else if(sum>s) {break;}
        }
        if(sum==s)
        {
            break;;
        }
    }
    // cout<<endl<<"The indices are : "<<x<<" to "<<y-1;

}   