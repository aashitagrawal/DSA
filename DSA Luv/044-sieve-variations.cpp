#include<bits/stdc++.h>
using namespace std;

//Today Date - 1 July 2023
//Topics -  Sieve Variations

const int N = 1e3 + 10;
vector<bool> isPrime(N,1);
vector<int> lp(N,0), hp(N,0);

int main()
{
    //💡 Find Lowest and Highest Prime factors of a number
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i<=N; i++)
    {
        if (isPrime[i])
        {
            lp[i] = hp[i] = i;
            for(int j=2*i; j<=N; j+=i)
            {
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                    lp[j]=i;
            }
        }
    }
    // for(int i=2; i<=100; i++)
    //     cout<<"Number "<<i<<" : "<<lp[i]<<" "<<hp[i]<<endl;


    // 💡 Find Prime Factors of a number using previous  (basically using Sieve)
    cout<<"Find prime factors of : ";
    int num;
    cin>>num;
    vector<int> ans;
    // map<int,int> m;
    while(num>1)
    {
        int prime_factor = lp[num];
        if(num % prime_factor ==0)
        {
            // m[prime_factor]++;
            ans.push_back(prime_factor);
            num /= prime_factor;
        }
    }    
    for(auto ele: ans)
        cout<<ele<<" ";
    cout<<endl;
    // for(auto ele: m)
    //     cout<<ele.first<<"^"<<ele.second<<endl;
    // cout<<endl;

    //💡 Find factors of a number
    vector<int> factors [N];
    for(int i=1; i<N; i++)
        for(int j=i; j<N; j+=i)
            factors[j].push_back(i);

    cout<<"Find factors of : ";
    int a;
    cin>>a;
    for(auto ele: factors[a])
        cout<<ele<<" ";
    cout<<endl;
}
