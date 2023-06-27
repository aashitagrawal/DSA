#include<bits/stdc++.h>
using namespace std;

// Today's Date - 26 June 2023
// Topic - Bit Manipulation Tricks

void printDeciToBin(int num, char c = '.')
{
    if(c!='.') cout<<c<<", ";
    cout<<num<<" = ";
    for(int i=7; i>=0; i--)
    {
        if(i==3) cout<<" ";
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}

int main()
{
    for(int i=0; i<8; i++)
        printDeciToBin(i);
    

    //Check odd even using Bit manipulation, its faster than modulo
    cout<<endl<<"Enter num : ";
    int num;
    cin>>num;
    if(num&1)
        cout<<"Odd"<<endl;
    else
        cout<<"Even"<<endl;


    // Divide and Multiply by 2
    cout<<endl<<"Enter num : ";
    cin>>num;
    cout<<num<<"/2 = "<<num/2<<endl;
    cout<<num<<"*2 = "<<num*2<<endl;
    printDeciToBin(num>>1);
    printDeciToBin(num);
    printDeciToBin(num<<1);


    //Upper and Lower case
    cout<<endl;
    for(char i  = 'A'; i<='E'; i++)
        printDeciToBin(int(i),i);
    for(char i  = 'a'; i<='e'; i++)
        printDeciToBin(int(i),i);

    string s;
    cout<<endl<<"Enter a string : ";
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        char temp;
        int code = int(s[i]); // 5th bit is set in lowercase, and unset in capital letter
        code = (~(1<<5) & code); // '|' will make lowercase, '&' will make uppercase
        temp = code;
        s[i] = temp;
    }
    cout<<s<<endl;
    for(int i=0; i<s.size(); i++)
        s[i] = s[i] | ' ';
    cout<<s<<endl;
    for(int i=0; i<s.size(); i++)
        s[i] = s[i] & '_';
    cout<<s<<endl;
    
    cout<<endl<<"Enter num : ";
    cin>>num;
    printDeciToBin(num);
    cout<<"Enter what index you want to clear : ";
    int index;
    cin>>index;
    int temp = num & (~((1<<(index+1))-1));
    printDeciToBin(temp);


    //Power of 2 check
    cout<<endl<<"Enter num : ";
    cin>>num;
    if(__builtin_popcount(num)==1)
        cout<<"Power of 2"<<endl;
    else
        cout<<"Not a power of 2"<<endl;
    if((num & (num-1)) == 0) // 8 = 1000, 7 = 0111, '&' will always be 0 
        cout<<"Power of 2"<<endl;
    else
        cout<<"Not a power of 2"<<endl;

}