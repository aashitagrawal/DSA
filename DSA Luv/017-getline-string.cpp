#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a ,b;

    cout<<"Enter a sentence : ";
    getline(cin,b);
    cout<<"String you entered = "<<b<<endl;

    cout<<endl<<"'cin' doesnt get lines as input"<<endl;
    cout<<"Enter a sentence : ";
    cin>>a;
    cout<<"String you entered = "<<a<<endl;
}