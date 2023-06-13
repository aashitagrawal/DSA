#include<iostream>
using namespace std;
int main()
{
    //Max till i
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++)
        cin>>arr[i];

    int max=arr[0];
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
        
        arr1[i]=max;
    }
    for(int i=0; i<n; i++)
        cout<<arr1[i]<<" ";
}