#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //Que 1
    // int n;
    // cin>>n;
    // int m=n;
    // int mask=0;

    // if(n==0)
    //     return 1;
    
    // while(n!=0)
    // {
    //     n = n >> 1;
    //     mask = (mask << 1) | 1;
    // }

    // int ans = (~m) & mask;
    // cout<<ans;
    // return 0;


    //Que 2
    cout<<endl;
    int num,count=0;
    cin>>num;
    while(num!=0)
    {
        if(num&1==1)
            count++;
        num=num>>1;
    }
    if(count==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;



}