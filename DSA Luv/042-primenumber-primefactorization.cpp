#include<bits/stdc++.h>
using namespace std;

// Today's Date - 29 June 2023
// Topic - Prime numbers ans Prime factorization

bool isPrime(int number) {
    for (int i = 2; i*i <= number; i++)
        if (number % i == 0)
            return false;
    return true;
}

void primeFactors(int number) {
    cout<<"Prime Factors of "<<number <<" are : ";
    vector<int> factors;
    for (int i = 2; i <= number; i++) {
        while (number % i == 0) {
            factors.push_back(i);
            number /= i;
        }
    }
    for(auto ele : factors)
        cout<<ele<<" ";
    cout<<endl;
}

void primeFactorsSqrt(int number) {
    cout<<"Prime Factors of "<<number <<" are : ";
    vector<int> factors;
    for (int i = 2; i*i <= number; i++) {
        while (number % i == 0) {
            factors.push_back(i);
            number /= i;
        }
    }
    if(number>1)
        factors.push_back(number);
    for(auto ele : factors)
        cout<<ele<<" ";
    cout<<endl;
}

int main()
{
    // 💡 Factors of any number, the first factor will be a prime number (excluding 1)

    cout<<"5 isPrime :  "<<isPrime(5)<<endl;
    cout<<"24 isPrime :  "<<isPrime(24)<<endl;

    cout<<endl;
    primeFactors(24);
    primeFactors(36); 

    cout<<endl;
    primeFactors(24); 
    primeFactors(36); 

    // More optimized way of finding prime factors is Seive Algorithm

}