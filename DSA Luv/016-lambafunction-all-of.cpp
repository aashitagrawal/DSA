#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    if (x>0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    //defining a lamba function
    auto square = [](int x)
    {
        return x*x;
    };
    cout<<"Square of 4 using lamba function : "<<square(4)<<endl;
    
    cout<<"Directing calling lamba function"<<endl;
    cout<<"Cube of 5 : ";
    cout<< [](int x){return x*x*x;}(5) << endl;


    vector<int> v = {2,3,4};
    //all of - third arugment is true or false for each element
    // return true if all elements satifies
    bool allof = all_of(v.begin(), v.end(), [](int x){return x>0;});
    cout<<"All of = "<<allof<<endl;
    bool allof2 = all_of(v.begin(), v.end(), is_positive);
    cout<<"All of = "<<allof2<<endl;

    //any of - reutrns true if any elements satisfies
    bool anyof = any_of(v.begin(), v.end(), [](int x){return x>0;});
    cout<<"Any of = "<<anyof<<endl;

    //None of - reutrns true if any elements satisfies
    bool noneof = none_of(v.begin(), v.end(), [](int x){return x>0;});
    cout<<"None of = "<<noneof<<endl;


}