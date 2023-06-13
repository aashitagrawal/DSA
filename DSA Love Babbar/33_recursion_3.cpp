#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    //base
    if(size==0 || size==-1)
        return true;
    
    if(arr[0]>arr[1])
        return false;
    else
        isSorted(arr+1,size-1);
}

int sumArray(int arr[], int size)
{
    if(size==0)
        return;
    
    
}
int main()
{
    cout<<"Check sorted or not with recursion"<<endl;
    cout<<"Enter size of array : ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter elements : ";
    for(int i=0; i<size; i++)
        cin>>arr[i];
    if(isSorted(arr,size))
        cout<<"Sorted array"<<endl;
    else
        cout<<"Not sorted"<<endl;

}