#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> a)
{
    int s=0, e=a.size()-1;
    for(int i=0; i<a.size(); i++)
    {
        int temp = a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
        if(s==e)
        {
            break;
        }
    }
    return a;
}


int main()
{
    // //Que1
    // vector<int> v;
    // cout<<"size = ";
    // int n; cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     int a;
    //     cin>>a;
    //     v.push_back(a);
    // }
    // cout<<endl<<"Reversed vector is : "<<endl;
    // vector<int> v1 = reverse(v);

    // for(int i=0; i<v1.size(); i++)
    // {
    //     cout<<v1[i]<<" ";
    // }cout<<endl;

    //Move Zeroes
    cout<<endl<<"Enter size : ";
    int n; cin>>n;
    int arr[n],brr[n], brrIndex=0;;
    int count=n;
    cout<<"Enter elements which contais zero : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            brr[brrIndex]=arr[i];
            brrIndex++;
            count--;
        }
    }
    for(int i=0; i<count; i++)
    {
        brr[brrIndex]=0;
        brrIndex++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<brr[i]<<" ";
    }cout<<endl;

}