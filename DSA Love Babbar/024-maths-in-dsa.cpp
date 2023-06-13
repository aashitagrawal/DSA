#include <bits/stdc++.h>
using namespace std;

int sieveOfEratosthenes(int x)
{
    int count = 0;
    vector<bool> prime(x + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < x; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i * 2; j < x; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int euclidAlgo(int a, int b)
{
    // Formula - gcd(a,b)=gcd(a-b,b) //here a>b, until one becomes zero, the other one will be the answer
    if(a==b)
        return a;
    if(a==0 && b!=0)
        return b;
    if(b==0 && a!=0)
        return a;

    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    return b;
}

void moduloFormulas()
{
    // ( a +-* b )%m = a%m +-* b%m
    // ((a%m)%m)%m = a%m
}

//Modular arithmetic
void fastExpo() //didnt understood
{
    cout<<endl<<"Here we are finding  (x^n)%m"<<endl;
    int x,n,m;
    cout<<"Enter x,n,m"<<endl;
    cin>>x>>n>>m;
    cout<<x<<"^"<<n<<"%"<<m<<"=";
    int res=1;
    while(n>0)
    {
        if(n&1)
        {
            res = (1LL * (res) * (x)%m)%m;

        }
        x = (1LL *(x)%m * (x)%m)%m;
        n = n >> 1;

    }
    cout<<res<<endl;


}

int main()
{
    system("CLS");
    // Prime Number
    // Program to count number of prime numbers strictly less than x
    cout << "Program to count number of prime numbers strictly less than x" << endl;
    int x;
    cout << "Enter x" << endl;
    cin >> x;
    cout << sieveOfEratosthenes(x) << endl; // time complexity = O(n*log(log(n)))

    cout<<endl;
    cout<<"Program to find GCD / HCF of two numbers "<<endl;
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<euclidAlgo(a,b)<<endl;

    moduloFormulas();

    //Fast exponentiation (didn't understood)
    //Modular arithmetic
    fastExpo();
}