#include <bits/stdc++.h>
using namespace std;

// Today's Date - 8 August 2023
// Topic - Kruskal's Algorithm: Minimum Spanning Tree

// 💡 Minimum Spanning Tree is finding a tree from a graph (undirected weighted graph) such that sum of weights of the edges are minimum
// 💡 We find MST by using Kruskal's Algorithm

const int N = 1e5 + 10;

int parent[N], size[N];

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    int n, m; // nodes, edges
    cin >> n >> m;
    vector<pair<int,pair<int,int>>> edges; //weight, node-node

    for(int i=1; i<=n; i++)
        make(i);
    while (m--)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        edges.push_back({wt,{a,b}});
    }
    sort(edges.begin(), edges.end());

    int edges_sum = 0;
    for(auto &edge : edges)
    {
        int wt = edge.first;
        int a = edge.second.first;   
        int b = edge.second.second;
        if(find(a)==find(b)) continue;
        Union(a,b); // just to detect cycles
        edges_sum+=wt;
        cout<<a<<"-"<<b<<endl;
    }
    cout<<"Sum of weights = "<<edges_sum<<endl;
}

/* Input
6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2
3 2 3
3 6 8
2 6 7
*/