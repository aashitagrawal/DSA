#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define Area(r) PI *r *r
#define min(a, b) ((a < b) ? a : b)
#define element 1, \
                2, \
                3

#define insta followers
#define followers 361
#define areaOFRect(l, b) (l * b)
#define input "output" // basically this is happening

// default arguments
void printArray(int *arr, int size, int start = 0) //here start is optional, if not entered, its value will be 0
{
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void notValid(int a, int b=0, int c) //defualy argument should always be on right
// {
//     cout<<a<<" "<<b<<" "<<c<<endl;
//     cout<<"yoo"<<endl;
// }
// void valid(int a, int b, int c=0)
// {
//     cout<<a<<" "<<b<<" "<<c<<endl;
//     cout<<"hellu"<<endl;
// }
void test(int a=0, int b=0, int c=0)
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main()
{
    // macros
    cout << "Pie = " << PI << endl;
    cout << "Area of circle of radius 5 = " << Area(5) << endl;
    cout << "Min of 6 and 12 is " << min(6, 12) << endl;
    int arr[] = {element};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "insta followers : " << insta << endl;
    cout << "Area of Rectanlge of length 5 and width 6 = " << areaOFRect(5, 6) << endl;
    cout << input << endl;

    int brrSize=5;
    int brr[brrSize]={34,56,789,352,23};
    printArray(brr,brrSize);
    printArray(brr,brrSize,2);

    // notValid(1,2,3);
    // notValid(1,3);
    // valid(5,6,7);
    // valid(5,6);

    test();
    test(2);
    test(3,4);
    test(5,6,7);

}