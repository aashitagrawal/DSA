#include <bits/stdc++.h>
using namespace std;

// Today's Date - 27 June 2023
// Topic - XOR operator

int main()
{
    //💡
    // 0 ^ 0 = 0
    // 1 ^ 1 = 0
    // 0 ^ 1 = 1
    // 1 ^ 0 = 1

    //💡
    // A ^ A = 0
    // A ^ 0 = A

    //💡
    // XOR is associative
    // a^b^c == a^c^b == c^a^b  .....you got the point

    // SWAPPING TWO NUMBERS
    cout << "Enter two numbers : ";
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    a = a ^ b; // a = a^b
    b = b ^ a; // b = b^(a^b) == b^b^a == 0^a = a
    a = a ^ b; // a = (a^b)^a == a^a^b == 0^b = b
    cout << a << " " << b << endl;

    // Question - In a array, every numbers' count is even, except one, find that number in O(N) time and O(1) space
    //💡
    // a^a^a (odd times 'a') = a
    // a^a^a^a (even times 'a') = 0
    cout << "Enter elements : ";
    vector<int> v;
    int input;
    while(cin>>input)
        v.push_back(input);
    cin.clear();
    cin.ignore();

    int ans=0;
    for(auto ele:v)
        ans = ans ^ ele;
    cout<<"the odd count was = "<<ans<<endl;
}