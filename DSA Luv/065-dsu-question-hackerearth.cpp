#include <bits/stdc++.h>
using namespace std;

// Today's Date - 7 August 2023
// Topic - HackerEarth Question

// ques link - https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/
// video link - https://youtu.be/L8SuKrpNc2Q

const int N = 1e5 + 10;

int Parent[N];
int Size[N];
multiset<int> Group_sizes;

void Make(int v)
{
    Parent[v] = v;
    Size[v] = 1;
    Group_sizes.insert(1);
}

int Find(int v)
{
    if (Parent[v] == v)
        return v;
    // Path compression
    return Parent[v] = Find(Parent[v]); // updates and return the value of Parent[v]
}

void Merge_sizes(int a, int b)
{
    Group_sizes.erase(Group_sizes.find(Size[a]));
    Group_sizes.erase(Group_sizes.find(Size[b]));
    Group_sizes.insert(Size[a] + Size[b]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        Parent[b] = a;
        Merge_sizes(a, b);
        Size[a] += Size[b];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        Make(i);

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        Union(x, y);
        if(Group_sizes.size()==1)
            cout<<0<<endl;
        else
            cout<<*(Group_sizes.rbegin()) - *(Group_sizes.begin())<<endl;
    }
}