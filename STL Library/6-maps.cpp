#include<bits/stdc++.h>
using namespace std;

void printMap(map<int,string> &m){
    cout<<"Size = "<<m.size()<<endl;
    for(auto &ele: m)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}
void printMap(map<string,int> &m){
    cout<<"Size = "<<m.size()<<endl;
    for(auto &ele: m)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}

int main()
{
    map<int,string> m;
    m[1]="hare";
    m[4]="krishna";
    m[2]="krishna";
    m[-1]="chant";
    m[3]="hare";
    m.insert({4,"krishna"});
    m.insert(make_pair(5,"krishna"));
    //long way to print
    map<int,string> :: iterator it;
    for(it = m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<it->second<<endl;
    }

    //find
    auto it2 = m.find(-1); //returns an iterator of the pair
    auto it3 = m.find(100); // return m.end(), which iterator next to iterator of last element
    cout<<(*it2).first<<" "<<(*it2).second<<endl;
    if(it3==m.end()) cout<<"no value"<<endl;

    //erase
    //you can pass "key" or "iterator" in erase function
    m[6]="what";
    m[7]="wwhat";
    printMap(m);

    auto it4 = m.find(6);
    m.erase(it4);
    m.erase(7);
    printMap(m);

    //clear
    m.clear();
    printMap(m);

    //question (https://youtu.be/gUrfXZ0hqoA?t=1225)
    // vector<string> v;
    // cout<<"Enter number of strings - "; int n; cin>>n; cout<<"Enter the strings = ";
    // for(int i=0; i<n; i++){
    //     string temp; cin>>temp; v.push_back(temp);
    // }

    // map<string,int> a;
    // for(int i=0; i<n; i++)
    // {
    //     auto it = a.find(v[i]);
    //     if(it == a.end()){
    //         a.insert({v[i],1});
    //     }
    //     else{
    //         (it->second)++;
    //     }
    // }
    // printMap(a);

    //alt solution
    cout<<"Enter number of strings - "; int n; cin>>n; cout<<"Enter the strings = ";
    map<string,int> a;
    for(int i=0; i<n; i++)
    {
        string t; cin>>t;
        a[t]++;
    }
    printMap(a);

}