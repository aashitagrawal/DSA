#include <iostream>
using namespace std;

void advanceSearch(int arr[3][3], int x)
{
    int row=3;
    int col=3;

    //start from top right element
    int rowIndex=0;
    int colIndex=2;
    int element = arr[rowIndex][colIndex];

    while(rowIndex<row && colIndex>=0)
    {
        if(x==element)
        {
            cout<<"Element found at :"<<rowIndex +1<<","<<colIndex+1<<endl;
            return;
        }
        else if(element>x)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
        element = arr[rowIndex][colIndex];
    }
    cout<<"Element not found because of sorting problem "<<endl;


}

void binarySearch2Darray(int arr[3][3], int x)
{
    int row=3;
    int col=3;
    int size=9;

    int start=0;
    int end = size-1;
    int mid = end + ((start - end)/2);
    while(start<=end)
    {
        int element = arr[mid/col][mid%col];
        if(element==x)
        {
            cout<<"Element found at :"<<mid/col + 1<<","<<mid%col + 1<<endl;
            return;
        }
        else if(element> x)
        {
            end = mid-1;
        }
        else
        {
            start = mid +1;
        }
        mid = end + ((start-end)/2);
    }
    cout<<"Element not found because of sorting problem "<<endl;
    
}

void linearSearch2Darray(int arr[3][3], int x)
{
    int flag=1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(x==arr[i][j])
            {
                flag=0;
                cout<<"Element found at : "<<i+1<<","<<j+1<<endl;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Element not found"<<endl;
    }
}

int main()
{
    system("CLS");
    cout<<"Linear Search in 2D array"<<endl<<"Enter 3x3 Matrix"<<endl;
    int arr[3][3];
    cout << "Enter elements row wise " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Entered matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j]<<"  ";
        }cout<<endl;
    }
    int x;
    cout<<"Enter element you want to search : ";
    cin>>x;
    cout<<"Linear Search - NO Sorting Required"<<endl;
    linearSearch2Darray(arr,x);
    cout<<endl;
    cout<<"Binary Search - Sorted Array Reqiured"<<endl;
    binarySearch2Darray(arr,x);

    //more advanced search, if matrix is sorted by row and col
    cout<<endl;
    cout<<"Advanced Search if Sorted Row and Col wise"<<endl;
    advanceSearch(arr,x);
}