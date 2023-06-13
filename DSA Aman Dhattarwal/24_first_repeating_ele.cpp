#include<bits/stdc++.h>
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{

    // { //High time complexity
    // cout<<"Index Base = 1"<<endl;
    // int n; cin>>n;
    // int arr[n]; for(int i=0; i<n; i++){cin>>arr[i];}

    // int flag=1;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=(i+1); j<n; j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             cout<<"First repeating Index is "<<i+1;
    //             flag=0;
    //             break;
    //         }
    //     }
    //     if(flag==0)
    //         break;
    // }
    // }

    cout<<"TESTING"<<endl; //didn't understood this code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    const int N = 1e5;
    int arr2[N];
    for(int i=0; i<N; i++) //priority is time complexity than memory used for storing this large of an array
    {
        arr2[i]=-1;
    }
    int minindex = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr2[i]!=-1)
        {
            minindex=min(arr2[arr[i]],minindex);
        }
        else
        {
            arr2[arr[i]]=i;
        }
    }

    if(minindex==INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<minindex+1;
    }

    return 0;
}