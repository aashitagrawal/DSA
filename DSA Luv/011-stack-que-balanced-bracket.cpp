#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char,int> m = {{'[',-1},{']',1},{'{',-2},{'}',2}, {'(',-3},{')',3} };
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        int num = m[s[i]];
        count+=num;
    }
    if(!count){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not balanced"<<endl;
    }


}