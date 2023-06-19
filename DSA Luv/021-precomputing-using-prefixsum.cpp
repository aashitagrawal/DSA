#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Q1. Given an array of N integers, given Q queries of type L R, find the sum of elements from L to R (both included)
    cout<<endl<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //precomputing
    int prefix[n];
    prefix[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    for(auto ele:prefix)    cout<<ele<<" ";

    //q queries
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<endl;
    }

    // Q2. Prefix Sum in 2D arrays, given a 2D array, given Q queries of type (a,b,c,d) find the sum of elements from (a,b) to (c,d)
    cout <<endl<<"Enter dimensions of 2d array : ";
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    //input and printing 2d array
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    cout << endl << "Our 2d array is " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // precomputing
    int prefix[n][m];
    for (int i = 1; i <= n; i++)
    {
        prefix[i][1] = arr[i][1];
        for (int j = 2; j <= m; j++)
        {
            prefix[i][j] = prefix[i][j - 1] + arr[i][j];
        }
    }

    // q queries
    int q;
    cin >> q;
    while (q--)
    {
        cout << "Enter (a,b), (c,d) : ";
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = 0;

        for (int i = a; i <= c; i++)
        {
            if (b - 1 == 0)
            {
                sum += prefix[i][d] - 0;
            }
            else
            {
                sum += prefix[i][d] - prefix[i][b - 1];
            }
        }
        cout << "Sum = " << sum << endl;
    }
}