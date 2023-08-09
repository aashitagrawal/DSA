#include <bits/stdc++.h>
using namespace std;

// Today's Date - 4 August 2023
// Topic - Disjoint Set Union

// DSU is used for making groups/sets
// main 3 functions - make, find, union
// make - adds a new independent node
// find - gives parent of the group
// union - combine the two groups

const int N = 1e5 + 10;

int parent[N];
int size[N];

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    // Path compression
    return parent[v] = find(parent[v]); //updates and change the value of parent[v]
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        // Union by size/rank
        if (size[a] < size[b])
            swap(a, b); // we want to 'a' to be bigger tree, so that we join smaller tree 'b' to bigger tree 'a'
        parent[b] = a;
        size[a] += size[b];
    }
}

// Time Complexity - O(α(n))
// This is called amortized time complexity
// α(n) is reverse ackermann function

int main()
{
    int n, k; // nodes, edges
    cin >> n >> k;

    for(int i=1; i<=n; i++)
        make(i);
    
    while(k--)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    set<int> connected_components; //using 'set' data structure to find number of connected components because it doesnt allow duplicate values
    for(int i=1; i<=n; i++)
    {
        int par = find(i);
        connected_components.insert(par);
    }

    cout<<"Number of  connected components = "<<connected_components.size()<<endl;;
    for(auto ele: connected_components)
        cout<<ele<<" ";
    cout<<endl;
}