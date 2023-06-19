#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Hash array
    int count[1000] = {0}; // all elemets initialized with 0

    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }

    // print the count of all unique elements in array
    for (int i = 0; i < 1000; i++)
    {
        if (count[i] > 0)
        {
            cout << i << " " << count[i] << endl;
        }
    }

    // // get count of all unique elements in array using map
    // map<int, int> m;
    // for (int i = 0; i < n; i++)
    // {
    //     m[arr[i]]++;
    // }
    // //print the count of all unique elements in array
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // precomputing done

    cout << "Enter number of queries ";
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cout << "Enter element to be searched ";
        cin >> x;
        cout << count[x] << endl;
    }
}