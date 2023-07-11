#include <bits/stdc++.h>
using namespace std;

// Today's Date - 11 July 2023
// Topic - Subtree Sum

const int N = 1e5 + 10;
vector<int> tree[N];
int subTreeSum[N];
int evencount[N]; //counts number of even values in a subtree 

void dfs(int vertex, int parent)
{
    if(vertex%2==0) evencount[vertex]++;
    subTreeSum[vertex]+=vertex;
    for (auto child : tree[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
        subTreeSum[vertex] += subTreeSum[child];
        evencount[vertex]+= evencount[child];
    }
}

int main()
{
    // no of vertex  = no of edges + 1
    cout << "Enter number of vertex in tree : ";
    int n; // number of vertex
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    /* INPUT
    13
    1 2
    1 3
    1 13
    2 5
    5 6
    5 7
    5 8
    8 12
    3 4
    4 9
    4 10
    10 11
    */

    int nodeVertex = 1;
    dfs(nodeVertex,0);
    for(int i=1; i<=n; i++)
        cout<<i<<" = \t"<<subTreeSum[i]<<", \t"<<evencount[i]<<endl;
}