#include<iostream>
using namespace std;
int main()
{
    string s = "aashit";
    cout<<((int)s[0]==(int)s[1])<<endl;
    cout<<((int)s[0]==(int)s[2])<<endl;
    cout<<s[3]<<endl;
    s[3]=(char)60;
    cout<<s[3]<<endl;
    

}