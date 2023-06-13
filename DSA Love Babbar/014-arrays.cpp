#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[], int size)
{
    for(int i=0; i<=(size-1)/2; i++)
    {
        int temp = arr[i];
        arr[i]=arr[(size-1)-i];
        arr[(size-1)-i] = temp;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<=size-1; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void update(int brr[])
{
    brr[0]=567;
}

int main()
{
//     There are 3 or 4 ways to initialise the array with a value 
// 1 .  We can use the for loop
// 2 . Int array[100000] = {[0 - 99999] = 1 } 
// 3. Std::fill_n(array,n,val)

    // int a[5],b[5],c[5];
    // for(int i=0; i<=4; i++)
    //     a[i]=1;
    
    // // int b[]={[0...4] = 2 } ;
    // fill_n(c,5,1);

    // for(int i=0; i<=4; i++)
    // {
    //     cout<<a[i]<< " "<<b[i]<< " "<<c[i]<<endl;
    // }


    int arr[5]={56,67,87,54,34};
    printArray(arr,5);

    int maxElement = INT32_MIN;
    int minElement = INT32_MAX;
    for(int i=0; i<=4; i++)
    {
        if(arr[i]>maxElement)
            maxElement=arr[i];
        if(arr[i]<minElement)
            minElement=arr[i];
    }
    cout<<"Max element is = "<<maxElement<<endl;
    cout<<"Min element is = "<<minElement<<endl;

    int brr[1]={234324};
    cout<<endl<<brr[0]<<endl;
    update(brr);
    cout<<brr[0]<<endl; //heheh jaaduu

    cout<<endl<<endl;
    int rev[5]={9,10,11,12,13};
    revArray(rev,5);
    printArray(rev,5);



}