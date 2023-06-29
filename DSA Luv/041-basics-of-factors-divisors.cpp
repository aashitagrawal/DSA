#include<bits/stdc++.h>
using namespace std;

//Today's Date - 29 June 2023
// Topics - Calculating Factors/Divsiors


void calculateFactorsBruteForce(int num) {
    cout << "Factors of " << num << ": ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void calculateFactorsSqrt(int num) {
    cout << "Factors of " << num << ": ";
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            cout << i << " ";
            if (i != num / i) {
                cout << num / i << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    cout<<"Using brute force : "<<endl;
    calculateFactorsBruteForce(24);

    cout<<endl<<"Using sqrt : "<<endl;
    calculateFactorsSqrt(24);
    
    // 💡 There is more optimized way, using Prime Factorization
    // formula is combinations of prime factors - you can  find Luv's video on how to do that - https://youtu.be/uy_C8BkuN9w
}