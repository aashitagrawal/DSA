#include <iostream>
using namespace std;
int main()
{
    // Rotation of array que
    {
        // cout << "Rotation of array by 'k' position ::" << endl;
        // cout << "Enter size : ";
        // int n;
        // cin >> n;
        // int arr[n];
        // cout << "Enter array : ";
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        // }
        // cout << "From rotation postion : ";
        // int k;
        // cin >> k;
        // { // your approach
        //     int brr[n];
        //     int brrIndex = 0;
        //     for (int i = n - k; i < n; i++)
        //     {
        //         brr[brrIndex] = arr[i];
        //         brrIndex++;
        //     }
        //     for (int i = 0; i < n - k; i++)
        //     {
        //         brr[brrIndex] = arr[i];
        //         brrIndex++;
        //     }
        //     cout << endl
        //          << "Rotated array is : ";
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << brr[i] << " ";
        //     }
        //     cout << endl;
        // }

        // { // love babbar approach
        //     int brr[n];
        //     for (int i = 0; i < n; i++)
        //     {
        //         brr[(i + k) % n] = arr[i];
        //     }
        //     cout << "Rotated array is : ";
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << brr[i] << " ";
        //     }
        //     cout << endl;
        // }
    }


    // Check if sorted and rotated
    {
        cout<<"Check if sorted and rotated or not ::"<<endl;
        cout<<"Enter size : ";
        int n; cin>>n;
        int arr[n];
        cout<<"Enter elements of array : ";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int getIndex=n-1; //get Index of maximum element of rotated part, which is also the maximum element of the whole array
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[n-1])
            {
                getIndex = i;
                break;
            }
        }
        for(int i=getIndex+1; i<n-1; i++)
        {
            if(arr[i]>arr[i+1] || arr[i]>arr[getIndex])
            {
                cout<<"false"<<endl;
                break;
            }
            else if(i==n-2)
            {
                cout<<"true"<<endl;
            }
        }
    }


    //add two arrays - nhi hua abbi
}