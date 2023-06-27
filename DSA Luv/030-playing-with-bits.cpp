#include <bits/stdc++.h>
using namespace std;

// Today's Date - 26 June 2023
// Topic - Playing with Bits

void printDecimalToBinary(int num)
{
    cout << num << " = ";
    for (int i = 7; i >= 0; i--)
    {
        if (i == 3)
            cout << " ";
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    // Set bit value is 1
    // Un-set bit value is 0

    // How to check if in a binary number, iᵗʰ bit is set or not
    // Example : check in 0101, if 0 index bit is set or not,  you need to 'AND' it with 0001, and if answer is non-zero, then it is set, and if its zero and its not set
    // how will you achieve the number 0001, just right shift 1 << 0 = 0001, 1 << 1 = 0010, 1 << 2 = 0100, 1 << 3 = 1000

    cout << "Enter number : ";
    int num;
    cin >> num;
    printDecimalToBinary(num);

    cout << "Enter index : ";
    int index;
    cin >> index;

    int temp = 1 << index;
    if ((num & (temp)) != 0)
        cout << "Set bit" << endl;
    else
        cout << "Un-set bit" << endl;
    
    cout<<"Bit to set : ";
    int set;
    cin>>set;
    temp = 1 << set;
    int newnum = num | temp;
    printDecimalToBinary(newnum);

    cout<<"Bit to un-set : ";
    int unset;
    cin>>unset;
    temp = 1 << unset;
    newnum = newnum & (~temp);
    printDecimalToBinary(newnum);

    cout<<"Bit to toggle : ";
    int toggle;
    cin>>toggle;
    temp = 1 << toggle;
    newnum = newnum ^ temp;
    printDecimalToBinary(newnum);

    cout<<"Number of set bits = ";
    int setbits=0;
    while(newnum!=0)
    {
        if ((newnum & 1) == 1)
            setbits++;
        newnum = newnum >> 1;
    }
    cout<<setbits<<endl;

    //Use built-in function for set bits count
    cout<<endl<<"Nmber of set bits in original number = ";
    cout<< __builtin_popcount(num)<<endl; //for integers

    long long int largenum = (1LL<<35) - 1;
    cout<<"Number of set bits in "<<largenum<<" = ";
    cout<< __builtin_popcountll(largenum)<<endl; //for long int

}