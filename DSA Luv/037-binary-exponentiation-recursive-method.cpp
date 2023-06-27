#include<bits/stdc++.h>
using namespace std;

// Today's Date - 27 June 2023
// Topic - BInary exponentaion using recursion

int power(int a, int b)
{
    if(b==0)
        return 1;

    long long result = power(a,b/2);
    
    if(b&1) //odd number
        return a * result * result;
    else
        return result * result;
}

int main()
{
    //Range of double is too large, at the cost of precision
    double temp = 1e51;
    cout<<fixed<<setprecision(0)<<temp<<endl; //fixed = doesnt give answer in scientifc notation, setpecision sets the deciaml points

    //pow return double, so not realible
    cout<<pow(10,51)<<endl;

    //Using function
    cout<<power(2,10)<<endl;


}