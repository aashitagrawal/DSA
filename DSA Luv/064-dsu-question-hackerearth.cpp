#include <bits/stdc++.h>
using namespace std;

// Today's Date - 7 August 2023
// Topic - HackerEarth Question

// ques link - https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/
// video link - https://youtu.be/L8SuKrpNc2Q

const int N = 1e5 + 10;

int parent[N];
int Size[N];

void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    // Path compression
    return parent[v] = find(parent[v]); // updates and change the value of parent[v]
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        make(i);

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        Union(a, b);
    }
    set<int> distinct;
    for (int i = 1; i <= n; i++)
    {
        int par = find(i);
        distinct.insert(par);
    }
    cout << distinct.size() << endl;
}