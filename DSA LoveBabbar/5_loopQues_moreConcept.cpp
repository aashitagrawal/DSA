#include<iostream>
using namespace std;
int main()
{
    //que3
    for(int i=0; i<=15; i+=2)
    {
        cout<<i<<" ";
        if(i&1)
        {
            continue;
        }
        i++;
    }
    cout<<endl;


    //compiler assigning garbage value
    int a;
    cout<<endl<<" a =  "<<a<<endl;

    int test=1;
    if(true)
    {
        int test=2;
        cout<<test<<endl;
    }
    cout<<endl;

    int i=2;
    for(int i=1; i<=4; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"i = "<<i<<endl;

    
}