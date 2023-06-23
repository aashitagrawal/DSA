#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< INT_MAX <<endl;
    // 1 << 0 = 1
    // 1 << 1 = 2
    // 1 << 2 = 4
    // 1 << 3 = 8
    // 1 << 4 = 16
    // therefore, 1 << n = 2ⁿ
    // 💡 whenever, you want to find 2's power, just use left shift
    // cout<< (1 << 32) - 1 <<endl; // here (1 << 32) is 33 bits nummber, so overflow
    

    // signed int has range : -2,147,483,648 to 2,147,483,647
    // unsigned int has range : 0 to 4,294,967,295
    int a = (1LL << 31) -1;//LL denotes that '1' is long long
    unsigned int b = (1LL << 32) -1;
    cout<< a <<endl;
    cout<< b <<endl;
}
