#include <bits/stdc++.h>
using namespace std;

// Today's date - 20 June 2023
// Topic - Recursion Basic Question

int sumOfArray(int arr[], int currEleIndex)
{
    if (currEleIndex < 0)
        return 0;
    return (sumOfArray(arr, currEleIndex - 1) + arr[currEleIndex]);
}

int digitSum(int a)
{
    if (a == 0)
        return 0;
    return digitSum(a / 10) + a % 10;
}
// I ❤️recusrion

int main()
{
    // Q.1 Sum of array
    cout << "Enter size of array : ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Sum of the elements of array is : "<<sumOfArray(arr,n-1)<<endl;

    // Q.2 Digit Sum
    cout << "Enter number to find digit sum : ";
    int a;
    cin >> a;
    cout << "Digit sum = " << digitSum(a) << endl;
    //Time complexity  = O(log(n))
}
