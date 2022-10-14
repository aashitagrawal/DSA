#include<bits/stdc++.h>
using namespace std;

int deciToBin(int num)
{
    // int num2;
    // cin>>num2;
    int arr[33];
    int limit;
    for(int i=0; num!=0; i++)
    {
        limit=i;
        arr[i]= num%2;
        num=num/2;
    }
    int final=0;
    for(int i=0; i<=limit; i++)
    {
        final += pow(10,i)*arr[i];
    }
    return final;
}

int binToDeci(int num)
{
    // int num1;
    // cin>>num1;
    int deci=0,rem1;
    for(int i=0; num!=0; i++)
    {
        rem1 = num%10;
        deci += (rem1*(pow(2,i)));
        num=num/10;
    }
    return deci;
}

int main()
{
    //Que
    // cout<<"Number daal :";
    // int num;
    // cin>>num;

    // // string s = to_string(num);
    // // int len = s.size();

    // int rem;
    // int sum=0,pro=1;
    // while(num!=0)
    // {
    //     rem=num%10;
    //     sum+=rem;
    //     pro*=rem;
    //     num=num/10;
    // }
    // cout<<"Sum and Pro of its digit is = "<<sum<<" "<<pro<<endl;



    // //Que
    // cout<<"Enter binary number : ";
    // int num1;
    // cin>>num1;
    // cout<<binToDeci(num1)<<endl;


    // //Que
    // cout<<endl<<"Enter decimal number : ";
    // int num2;
    // cin>>num2;
    // cout<<deciToBin(num2)<<endl;


    //Que
    cout<<"Enter decimal number : ";
    int num3;
    cin>>num3;
    int x = deciToBin(num3);
    cout<<"Its binary is : "<<x<<endl;

    int arr[33];
    int count=0,rem;
    for(int i=0; x!=0; i++)
    {
        rem = x%10;
        arr[i]=rem;
        x=x/10;
        count++;
    }
    cout<<"Compliment of binary is : ";
    for(int i=0; i<=(count-1); i++)
    {
        if(arr[i]==1)
            arr[i]=0;
        else
            arr[i]=1;
        cout<<arr[i];
    }
    cout<<endl;
    cout<<endl<<"Length  = "<<count<<endl;
    //now array has in rev order

    int finall=0;
    for(int j=0; j<=(count-1); j++)
    {
        // cout<<endl<<pow(10,j)<<endl;
        finall = finall + ((arr[j])*(pow(10,j)));
        cout<<endl<<finall<<endl;
    }
    cout<<"Reversed bits to decimal is : "<<finall<<endl;

    cout<<"Final answer is : "<<binToDeci(finall)<<endl;
    cout<<"FUKC THIS QUE"<<endl;
    
}