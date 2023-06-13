#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[100];
    int i=1;
    do
    {
        arr[i]=num%2;
        num=num/2;
        i++;
    } while (num>0);
    for(int j=(i-1); j>0; j--)
    {
        cout<<arr[j];
    }
    
}