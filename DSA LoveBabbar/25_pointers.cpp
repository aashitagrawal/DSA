#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("CLS");
    int i = 10;
    double d = 10.5;
    int *ptr1 = &i;
    double *ptr2 = &d;

    cout << i << " " << *ptr1 << endl;
    cout << &i << " " << ptr1 << endl;

    cout << d << " " << *ptr2 << endl;
    cout << &d << " " << ptr2 << endl;

    cout << "size of int = " << sizeof(i) << endl;
    cout << "size of int pointer = " << sizeof(ptr1) << endl;

    cout << "size of double = " << sizeof(d) << endl;
    cout << "size of double pointer = " << sizeof(ptr2) << endl;

    // usually all the pointer's size are 8, just because they store addresses

    int *p;
    cout << endl
         << endl
         << "this is pointing to any garbage address" << endl;
    cout << p << " " << *p << endl;
    cout << "THIS IS A BAD PRACTISE" << endl;
    cout << "create a NULL pointer instead" << endl;
    int *pp = 0;
    // cout << pp << " " << *pp << endl;
    double *ppp = NULL;
    // cout << ppp << " " << *ppp << endl;
    // cout << "No output will be shown" << endl;

    pp = &i;
    ppp = &d;
    cout << pp << " " << *pp << endl;
    cout << ppp << " " << *ppp << endl;

    // changing the value by pointers
    int num = 5;
    int *pnum = &num;
    (*pnum)++;
    cout << num << endl;

    int ash1 = 10;
    cout << endl
         << "Before = " << ash1 << endl;
    ;
    ash1++;
    cout << "After = " << ash1 << endl;

    int *pash1 = &ash1;
    cout << "Value through pointer = " << *pash1 << endl;
    (*pash1)++;
    cout << "After increment = " << *pash1 << endl;

    // Copying a pointer
    system("CLS");
    int ash2 = 10;
    int *pash2 = &ash2;
    int *pash3 = pash2;
    cout << endl
         << pash3 << " " << pash2 << endl;
    cout << *pash3 << " " << *pash2 << endl;

    int arr1[2] = {45, 699};
    int *parr1 = &arr1[0];
    // parr1 = arr1; //both are same , lec26 for more detail
    cout << "Before = " << *parr1 << endl;
    parr1 = parr1 + 1;
    // what this do is, parr1 moves to the next address, for example
    // ptr is pointing to 100, by adding 1, it moves to next contigous addresss which is 104 (if integer's size is 4 bytes)
    cout << "After = " << *parr1 << endl;
}