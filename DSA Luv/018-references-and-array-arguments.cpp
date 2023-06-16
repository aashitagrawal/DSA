#include<bits/stdc++.h>
using namespace std;

void incr(int x){x++;}

void increment(int &x){x+=14;}

void func(int x[]){
    x[0]=100;
}

void func(int x[][10]){
    x[0][0]=100;
}

int main()
{
    system("CLS");
    int a = 2;
    cout<<"before : \t\t\t"<<a<<endl;
    incr(a);
    cout<<"after (witohut reference) : \t"<<a<<endl;
    increment(a);
    cout<<"after (with reference) : \t"<<a<<endl<<endl;

    //⚠️⚠️Arrays are automtically always passed as reference ⚠️⚠️
    int arr[5]={2,3,55,1,7};
    cout<<"before : \t\t\t"<<arr[0]<<endl;
    func(arr);
    cout<<"after : \t\t\t"<<arr[0]<<endl<<endl;

    // Passing N -dimensional array, exclude first dimension size, specify the remaining dimensions in function.
    int brr[10][10];
    brr[0][0]=2;
    cout<<"before : \t\t\t"<<brr[0][0]<<endl;
    func(brr);
    cout<<"after : \t\t\t"<<brr[0][0]<<endl;
    // In competitive programming, 'global' N-dimensional arrays are commonly used to avoid passing them as arguments.
}