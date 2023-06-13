#include <bits/stdc++.h>
using namespace std;

int &refVariableFunction(int a) // function returning a ref variable
{
    int num = a;
    int &ans = num;
    return ans;
}
void update1(int n)
{
    n++;
}
void update2(int &n) // ref variable is made here
{
    n++;
}

int arraySum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int i = 5;
    // create a refernce variable - one variable, two names
    int &j = i; // ref variable are made using '&'
    cout << i << " " << j << endl;
    i++;
    cout << i << " " << j << endl;
    j++;
    cout << i << " " << j << endl;

    int a = 10;
    cout << "Before update1 = " << a << endl;
    update1(a);
    cout << "After update1  = " << a << endl;
    cout << "Before update2  = " << a << endl;
    update2(a);
    cout << "After update2  = " << a << endl;

    cout << refVariableFunction(5) << endl;
    // system("CLS");

    // Static vs Dynamic Memory allocation
    // Static memroy is allocated in stack
    // Dynamic memory is allocated in heaps
    cout << "Enter size of array : ";
    int n;
    cin >> n;
    // variable size array
    int *arr = new int[n];
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of elements are : " << arraySum(arr, n);

    //difference in static and dynamic memoery allocation
    //1 .size
    int p; //4bytes
    int *ptr = new int; //8 + 4 bytes
    int arr1[100]; //400 bytes
    int *arr2 = new int[100]; //8 + 400 bytes
    //2. in static memory gets released automatically, in dynamic we have to do it manually
    delete []arr;
    delete ptr;
    delete []arr2;

}