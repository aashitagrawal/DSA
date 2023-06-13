#include<bits/stdc++.h>
using namespace std;
int main()
{
    //O(n) operations for vectors
    //O(log(n)) for maps,sets

    vector<int> v = {2,3,1,6,7,6};
    cout<<"Vector = "; for(auto ele:v) cout<<ele<<" "; cout<<endl;
    //min, max, find reutrns interator
    cout<<*min_element(v.begin(), v.end());
    cout<<endl<<*max_element(v.begin(), v.end());
    cout<<endl<<accumulate(v.begin(), v.end(),0); //third argument is inital sum
    cout<<endl<<"Count of 2 is "<<count(v.begin(), v.end(),2);
    cout<<endl<<"Count of 6 is "<<count(v.begin(), v.end(),6);
    cout<<endl<<"Count of 11 is "<<count(v.begin(), v.end(),11);
    cout<<endl<<*find(v.begin(), v.end(),3);
    if(find(v.begin(), v.end(),100)==v.end()) cout<<endl<<"not found"<<endl;
    reverse(v.begin(), v.end()); //reverse is inPlace
    for(auto ele:v) cout<<ele<<" ";

}