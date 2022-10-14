#include <iostream>
using namespace std;

void lele(int &p)
{
    cout<<"Address of temp p = "<<&p<<endl;
    cout<<"Test 2"<<endl;
    cout << p << endl;
    cout << &p << endl;
    // cout << *p << endl;
    cout<<"Test 3"<<endl;
}

int main()
{
    int a = 5;
    int *p = &a;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"Address of p = "<<&p<<endl;
    cout<<"Test 1"<<endl;
    lele(*p);
    cout<<"Test 4"<<endl;
}