#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        return mid;

        else if(arr[mid]>key)
        e=mid-1;

        else
        s=mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int key;
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cin>>key;

    cout<<"Linear Search - Time complexity O(n)"<<endl;
    cout<<linearSearch(arr,n,key)<<endl;
    cout<<"Binary Search - Time complexity O(log(base2)n)"<<endl;
    cout<<binarySearch(arr,n,key)<<endl;


}