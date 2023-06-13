#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];


    int d; //common differnce
    int temp_len = 0;
    int max_len=0;
    for(int i=0; i<(n-1); i++)
    {
        d=arr[i+1]-arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]-arr[j-1]==d)
                temp_len++;
    
            else
                break;
        }
        if(temp_len>max_len)
        {
           max_len=temp_len;
        }
        temp_len=0;
    }
    cout<<max_len+1;
}