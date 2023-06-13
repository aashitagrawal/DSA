#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // 1
    p = make_pair(1, "Aashit");
    // 2
    p = {1, "Aashit"};
    cout << p.first << endl;
    cout << p.second << endl;
    pair<int, string> q = p;
    cout << q.first << endl;
    cout << q.second << endl;

    int arr[] = {1, 2, 3};
    int brr[] = {2, 3, 4};

    pair<int, int> a[3];
    a[0] = {1, 2};
    a[1] = {2, 3};
    a[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    swap(a[0], a[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }

    pair<int,int> pp(4,5);
    cout<<endl<<pp.first<<" "<<pp.second;

}