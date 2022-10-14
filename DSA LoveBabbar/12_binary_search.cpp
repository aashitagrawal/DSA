#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=(size-1);
    int mid=(start+end)/2;
    cout<<endl;
    while(start <= end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
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
    return -1;
}

int main()
{
    cout<<"\nBinary Search";
    cout<<"\nEnter size of array : ";     int n;  cin>>n;
    cout<<"Enter elements of array : ";     int a[n];   for(int i=0; i<n; i++){cin>>a[i];}
    cout<<"Enter which element you want to find : ";    int search; cin>>search;
    cout<<"It is at index : "<<binarySearch(a,n,search)<<endl;

    cout<<"\nBinary Search";
    cout<<"\nEnter size of array : ";     int m;  cin>>m;
    cout<<"Enter elements of array : ";     int b[m];   for(int i=0; i<m; i++){cin>>b[i];}
    cout<<"Enter which element you want to find : ";    int searchh; cin>>searchh;
    cout<<"It is at index : "<<binarySearch(b,m,searchh)<<endl;

    
    
}