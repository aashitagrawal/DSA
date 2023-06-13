#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Que 1 - calculator
    // cout<<endl;
    // char ch;
    // int x,y;
    // cin>>x>>ch>>y;
    // switch (ch)
    // {
    // case '+':
    //     cout<<x+y<<endl;
    //     break;

    // case '-':
    //     cout<<x-y<<endl;
    //     break;
    
    // case '*':
    //     cout<<x*y<<endl;
    //     break;

    // case '/':
    //     cout<<x/y<<endl;
    //     break;

    
    // default:
    //     break;
    // }


    //Que 2 - 100,50,20,1 RS note
    int money;
    cout<<endl;
    cin>>money;
    int nn=1;

    switch (nn)
    {
    case 1:
        cout<<money/100<<" == 100 Rs note"<<endl;
        money = money -  (money/100)*100;

    case '-':
        cout<<money/50<<" == 50 Rs note"<<endl;
        money = money -  (money/50)*50;
        
    
    case '*':
        cout<<money/20<<" == 20 Rs note"<<endl;
        money = money -  (money/20)*20;

    case '/':
        cout<<money/1<<" == 1 Re coin"<<endl;
        money = money -  (money/1)*1;

    }
}