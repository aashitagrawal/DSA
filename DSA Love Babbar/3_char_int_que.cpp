#include<iostream>
using namespace std;
int main ()
{
    char test;
    cout<<"Enter a char ";
    cin>>test;

    if((int)test >=97 && (int)test<=122)
        cout<<"lower case alphabet"<<endl;

    else if ((int)test >=65 && (int)test<=90)
        cout<<"uppercase alphabet"<<endl;

    else if((int)test >=48 && (int)test<=57)
        cout<<"numberss<3"<<endl;
    
    else
        cout<<"wtf u want from your life"<<endl;
    
}