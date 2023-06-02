#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){
    cout<<"Size = "<<v.size()<<endl;
    for(auto ele: v) cout<<ele<<" ";
    cout<<endl;
}


int main()
{
    //Range based loop
    vector<int> v = {1,2,3,4,5};
    vector<int> ::iterator it;
    for(it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(int ele: v){
        cout<<ele<<" ";
    }
    cout<<endl;

    //auto keyword - this automatically detects the datatype
    auto temp  = 3.14;
    cout<<"Value = "<<temp<<", datatype = "<<typeid(temp).name()<<endl; //output - d (double)

    for(auto a = v.begin(); a!=v.end(); a++){
        cout<<*a<<" ";
    }
    cout<<endl;

    
    vector<pair<int,int>> vp = {{66,44},{22,55}};
    for(auto ele: vp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<endl;
}