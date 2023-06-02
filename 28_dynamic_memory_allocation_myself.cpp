#include <bits/stdc++.h>
using namespace std;
int main()
{
    // creating a dynamic array , and extending its size

    int size;
    cout << "Enter size of dynamic array : ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter values of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i]=i+4;
    }

    cout << "Entered values are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // now extending size of array
    cout << "Enter how much size you want to increase : ";
    int size2;
    cin >> size2;
    int *brr = new int[size + size2];

    for(int i=0; i<size; i++)
    {
        brr[i]=arr[i];
    }

    delete[] arr;
    arr = brr;
    brr = NULL;

    cout << "Enter " << size2 << " more values :";
    cout<<endl;
    for (int i = size; i < size2; i++)
    {
        arr[i]=i+4;
    }

    cout << "New array is : ";
    for (int i = 0; i < size2; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}