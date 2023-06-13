#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Dynamic 2D array" << endl
         << "Enter row and col : ";
    int row, col;
    cin >> row >> col;

    cout << "Enter elements : ";
    // creating a 2d array
    int **arr = new int *[row]; // creating 'row' pointers
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // releasing memory
    // we gotta delete the heap memory when we are done using it
    cout << "we gotta delete the heap memory when we are done using it" << endl;
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;




    system("CLS");
    // Homework
    // Creating a jaggered array dynamically
    cout<<"Enter row of jaggered array : ";
    int n;
    cin >> n;
    int m[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter size of row #"<<i+1<<" : ";
        cin>>m[i];
    }

    //creating aray
    int **brr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = new int[m[i]];
    }

    cout<<"Enter elements : ";
    //input
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m[i]; j++)
        {
            cin>>brr[i][j];
        }
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m[i]; j++)
        {
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }

    //releaseing the memory
    for (int i = 0; i < n; i++)
    {
        delete [] brr[i];
    }
    delete []brr;




}