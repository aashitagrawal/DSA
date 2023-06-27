#include <bits/stdc++.h>
using namespace std;

// Today's Date - 27 June 2023
// Topic - Faster Vector s / Vector s without specifiying its size

int main()
{


    vector<int> a;
    cout << "METHOD 1 : Enter elements (enter to end) : ";
    string s;
    getline(cin, s);
    stringstream ss(s);
    int n;
    while (ss >> n)
        a.push_back(n);


    vector<int> b;
    cout << "METHOD 2 : Enter elements (non numeric to end) : ";
    int i;
    while (cin >> i)
        b.push_back(i);
    cin.clear();
    cin.ignore();

    vector<int> c;
    cout << "METHOD 3 : Enter elements (-1 to end) : ";
    int j;
    while (true)
    {
        cin >> j;
        if (j == -1)
            break;
        c.push_back(j);
    }
    

    //Test
    int test;
    cout<<"\ntesting input after all vector input : ";
    cin>>test;
    cout<<"Test = "<<test<<endl;
    cout<<"Passed the test\n";



    //Printing all vector
    cout<<"a : ";
    for(auto &ele: a) cout<<ele<<" ";
    cout<<endl;

    cout<<"b : ";
    for(auto &ele: b) cout<<ele<<" ";
    cout<<endl;

    cout<<"c : ";
    for(auto &ele: c) cout<<ele<<" ";
    cout<<endl;
}