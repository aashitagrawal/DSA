#include<iostream>
using namespace std;
int main()
{
    //video length at 24:16
    cout<<"Entered"<<endl;



    //Que 1
    //0 = FALSE, any other non-zero integer is TRUE
    int a, b=1;
    a=10;
    if(++a)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<++b<<endl;
    }


    //Que2
    a=1,b=2;
    if(a-->0 && ++b>2)
        cout<<"If"<<endl;

    else
        cout<<"Else"<<endl;
    
    cout<<"a = "<<a<<" ,b = "<<b<<endl;

    cout<<endl;

    //Que3
    a=1,b=2;
    if(a-->0 || ++b>2)
        cout<<"If"<<endl;

    else
        cout<<"Else"<<endl;
    
    cout<<"a = "<<a<<" ,b = "<<b<<endl;

    a=1,b=2;
    if(++b>2 || a-->0 )
        cout<<"If"<<endl;

    else
        cout<<"Else"<<endl;
    
    cout<<"a = "<<a<<" ,b = "<<b<<endl;
    //why that output is self explanatory
    cout<<endl;

    cout<<endl;
    
    


    cout<<endl;
    int x = INT32_MAX;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
    cout<<INT32_MIN<<endl;


    //***initialization, condition, increment statements are not necessary***
    // int i=1;
    // for (;;)
    // {
    //     if(i<=5)
    //     {
    //         cout<<i<<endl;
    //     }
    //     i++;
    // }
    //this is infinte loop, why? - this doesnt know when to stop

    int i=1;
    for(;;)
    {
        if(i<=5)
            cout<<i<<" ";
        else
            break;
        i++;
    }
    cout<<endl;
    //***we can put multiple initialization, condition, increment statements***
    for(int x=1,y=2; x<=5 && y<=4; x++,y++ )
    {
        cout<<x<<" "<<y<<endl;
    }
    cout<<endl;


    cout<<"Print Fibonacci upton N terms"<<endl;
    int n,count=0;
    cin>>n;
    int arr[n+2];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; count!=(n-1); i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        count++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //2nd method
    cout<<"FIBOOOOO"<<endl;
    cin>>n;
    count=0;
    int a1=0,b1=1, nextNumber;
    cout<<"0 1 ";
    // for(;count!=(n-2);)
    // {
    //     nextNumber=a1+b1;
    //     cout<<nextNumber<<" ";
    //     a1=b1;
    //     b1=nextNumber;
    //     count++;

    // }

    //Perfect example of when to use FOR/WHILE loop, here I didnt needed the initialization and increment , therefore while was used
    while(count!=(n-2))
    {
        nextNumber=a1+b1;
        cout<<nextNumber<<" ";
        a1=b1;
        b1=nextNumber;
        count++;
    }

    




    


    
}