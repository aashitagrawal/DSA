#include<iostream>
#include <cmath>
using namespace std;
int main()
{


    int n;
    cin>>n;


    int totalChoco=n,wrapper=n;
    while (wrapper>=3)
    {
        totalChoco+= floor(wrapper/3);
        wrapper = (floor(wrapper/3))+(wrapper%3);
    }
    cout<<totalChoco;
    

}