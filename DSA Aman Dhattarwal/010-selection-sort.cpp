#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    cin>>arr[i];

    //ACTUAL METHOD SHOULD BE THIS and IS CORRECT

    // for(int i=0; i<n; i++)
    // {
    //     int min=arr[i];
    //     int indexCatch=i;
    //     for(int j=i+1; j<n; j++)
    //     {
    //         if(min>arr[j])
    //         {
    //             indexCatch=j;
    //             min=arr[j];
    //         }
    //     }
    //     int temp=arr[i];    arr[i]=arr[indexCatch];     arr[indexCatch]=temp; //swap
    // }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<endl<<arr[i];
    // }

    for(int i=0; i<n; i++)
    {
        for(int j=1+i; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp;
                temp=arr[i];    arr[i]=arr[j];  arr[j]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<endl<<arr[i];
    }



}