#include<bits/stdc++.h>
using namespace std;
int main()
{
    //the sort function needs two arguments
    // 1st, address of element from where you want to start sorting
    // 2nd, next address of element till where you want to sort



    int arr[6]={4,2,5,1,8,3};
    sort(arr,arr+6);
    //arr is address of 0th index element
    //arr+n is next addresss of (n-1)th index element

    vector<int> v = {4,2,5,1,8,3};
    sort(v.begin(), v.end());
    //v.begin() is the address of 0th index element
    //v.end() is next address of (n-1)th index element

    for(auto ele:arr) cout<<ele<<" ";
    cout<<endl;

    for(auto ele:v) cout<<ele<<" ";
    cout<<endl;
}