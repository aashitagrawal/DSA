#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[], int size)

{
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[size-1])
        {
            s = mid+1;
        } 
        else
        {
            e = mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int size, int key)
{
    int start,end;
    if(key<=arr[size-1])
    {
        start = pivot(arr,size);
        end=size-1;
    }
    else
    {
        end = pivot(arr,size)-1;
        start = 0;
    }
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

long long int sqrt(int n)
{
    int s=0;
    int e=n;
    long long int mid = s + (e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        long long int square = mid*mid;
        if(square== n)
        {
            ans= mid;
            break;
        }
        else if(square>n)
        {
            e= mid-1;
        }
        else if(square<n)
        {
            ans = mid;
            s = mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;


}

float precision(int n, int precision, int tempsol)
{
    float factor = 1;
    float ans=tempsol;
    for(int i=0; i<precision; i++)
    {
        factor/=10;
        for(float j=ans; j*j<n; j+=factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    // //Given a sorted then rotated array, find its pivot element
    // cout<<"Enter sorted and rotated array size and elements : "<<endl;
    // int n; cin>>n;
    // int a[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>a[i];
    // }
    // cout<<"Pivoted element is : "<<a[pivot(a,n)];
    // cout<<"\nEnter element you want to find in this sorted and rotated array : ";
    // int ele; cin>>ele;
    // cout<<"Element is at index = "<<binarySearch(a,n,ele)<<endl;

    
    cout<<"Find sqrt of = ";
    int num;
    cin>>num;
    cout<<"Enter precision = ";
    int p;
    cin>>p;
    int tempsol = sqrt(num);
    cout<<precision(num,p,tempsol)<<endl;

}