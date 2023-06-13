#include<bits/stdc++.h>
using namespace std;

void fun1(vector<int> &v){ //this passes the reference of vector - O(1)
    v.push_back(16108);
}


void fun2(vector<int> v){ //this creates a copy of vector - time complexity O(n)
    v.push_back(16);
}

int main()
{
    vector<int> p = {1,2,3};
    fun1(p);
    fun2(p);
    for(auto ele: p) cout<<ele<<" ";
    cout<<endl; 
}