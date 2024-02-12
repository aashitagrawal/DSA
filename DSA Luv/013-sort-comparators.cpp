#include<bits/stdc++.h>
using namespace std;

// return true when the first argument should come before the second argument in the sorted order, and false otherwise

bool cmp1(int a, int b){
    return a>b;
}

bool cmp2(vector<int>&a, vector<int>&b){
    return a>b;
}

bool cmp3(pair<int,int>&a, pair<int,int>b){
    return a>b;
}

bool cmp4(pair<int,int>&a, pair<int,int>b){
    if(a.first!=b.first) return a>b;
    else return a.second<b.second;
}

void vecofvec(vector<vector<int>> &p){
    for(auto v: p){
        for(auto ele:v){
            cout<<ele<<" ";
        }cout<<endl;
    }cout<<endl;
}

void vecofpair(vector<pair<int,int>>&v){
    for(auto p :v){
        cout<<p.first<<" "<<p.second<<endl;
    }cout<<endl;
}

int main()
{
    //vector - comparator
    cout<<"vector - comparator"<<endl;
    vector<int> v = {2,1,3,5,8,4,5};
    for(auto ele: v) cout<<ele<<" ";
    cout<<endl;
    sort(v.begin(), v.end(), cmp1);
    for(auto ele: v) cout<<ele<<" ";
    cout<<endl;


    //vector - greater
    cout<<endl<<"vector - greater"<<endl;
    v= {2,1,3,5,9,77,3};
    for(auto ele: v) cout<<ele<<" ";
    cout<<endl;
    sort(v.begin(), v.end(), greater<int>());
    for(auto ele: v) cout<<ele<<" ";
    cout<<endl;

    //vector of vector - greater
    cout<<endl<<"vector of vector - comparator"<<endl;
    vector<vector<int>> p = {{3,4,1},{1,9,5}, {5,2,8},{9,8,2}};
    vecofvec(p);
    sort(p.begin(), p.end(), greater<vector<int>>());
    vecofvec(p);

    //vector of vector - comparator
    cout<<endl<<"vector of vector - comparator"<<endl;
    p = {{3,4,1},{1,9,5}, {5,2,8},{9,8,2}};
    vecofvec(p);
    sort(p.begin(), p.end(), cmp2);
    vecofvec(p);

    //vector of pairs - greater
    cout<<endl<<"vector of pairs - greater"<<endl;
    vector<pair<int,int>> vp = {{2,1},{5,2},{0,1},{4,3},{1,9},{4,1},{4,2}};
    vecofpair(vp);
    sort(vp.begin(), vp.end(), greater<pair<int,int>>());
    vecofpair(vp);

    //vector of pairs - comparator 1
    cout<<endl<<"vector of pairs - comparator 1"<<endl;
    vp = {{2,1},{5,2},{0,1},{4,3},{1,9},{4,1},{4,2}};
    vecofpair(vp);
    sort(vp.begin(), vp.end(), cmp3);
    vecofpair(vp);

    //vector of pairs - comparator 2
    cout<<endl<<"vector of pairs - comparator 2"<<endl;
    vp = {{2,1},{5,2},{0,1},{4,3},{1,9},{4,1},{4,2}};
    vecofpair(vp);
    sort(vp.begin(), vp.end(), cmp4);
    vecofpair(vp);

}