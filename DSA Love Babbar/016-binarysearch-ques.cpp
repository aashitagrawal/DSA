#include<bits/stdc++.h>
using namespace std;

int mountain(int arr[], int size)
{
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    //or
    mid = (start+end)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    return start;
}

int firstOcc(int arr[], int size, int key)
{
    int start=0;
    int end=(size-1);
    int mid=(start+end)/2;
    cout<<endl;
    int ans=-1;
    while(start <= end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key) //search in left
        {
            end=mid-1;
        }
        if(arr[mid]<key) //search in right
        {
            start=mid+1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start=0;
    int end=(size-1);
    int mid=(start+end)/2;
    cout<<endl;
    int ans=-1;
    while(start <= end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        if(arr[mid]>key) //search in left
        {
            end=mid-1;
        }
        if(arr[mid]<key) //search in right
        {
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    cout<<"\nFirst and last occ";
    cout<<"\nEnter size of array : ";     int n;  cin>>n;
    cout<<"Enter elements of array : ";     int a[n];   for(int i=0; i<n; i++){cin>>a[i];}
    cout<<"Whose first and last occ you want to find : ";    int search; cin>>search;

    cout<<"First occ : "<<firstOcc(a,n,search)<<"\nLast occ : "<<lastOcc(a,n,search)<<endl;

    cout<<"\nEnter mountain array size and elements : ";
    cout<<"\nEnter size of array : ";  cin>>n;
    cout<<"Enter elements of array : ";     for(int i=0; i<n; i++){cin>>a[i];}
    cout<<"\nPeak element is : "<<a[mountain(a,n)];


}