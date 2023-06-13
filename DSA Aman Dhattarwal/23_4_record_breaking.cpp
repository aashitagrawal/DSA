#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; int arr[n+1]; for(int i=0; i<n; i++){cin>>arr[i];}

    int count=0;
    for(int i=0; i<n; i++)
    {
        if(i==0){if(arr[1]<arr[0]){count++;}} //checking for first day

        for(int j=(i-1); j>=0; j--) //checking for rest of the days
        {
            if(arr[j]>arr[i])
                break;

            else if(j==0)
            {
                if(i==(n-1)) //for last day
                    count++;

                else
                {
                    if(arr[i+1]<arr[i])
                        count++;
                }
            }
        }
    }
    cout<<count;



    //optimised
    int daycount=0;
    int max=-1;
    arr[n]= -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max && arr[i]>arr[i+1])
        {
            daycount++;
            max=arr[i];
        }
    }
    cout<<endl<<daycount;
}