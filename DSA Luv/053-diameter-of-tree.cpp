#include <bits/stdc++.h>
using namespace std;

// Today's Date - 11 July 2023
// Topic - Diameter of Tree

const int N = 1e5 + 10;
vector<int> tree[N];
int depth[N];

void dfs(int vertex, int parent=-1)
{
    for(auto child : tree[vertex])
    {
        if(child==parent) continue;
        depth[child] = depth[vertex]+1;
        dfs(child,vertex);
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

    dfs(1);
    
    int max_depth = -1;
    int max_depth_node = -1;
    for(int i =1; i<=n; i++)
    {
        if(max_depth<depth[i])
        {
            max_depth = depth[i];
            max_depth_node = i;
        }
        depth[i]=0;
    }
    dfs(max_depth_node);
    int diameter = -1, node = -1;
    for(int i =1; i<=n; i++)
    {
        if(diameter<depth[i])
        {
            diameter = depth[i];
            node = i;
        }
    }
    cout<<"Diameter = "<<diameter<<endl;
    cout<<"Between nodes "<<max_depth_node<<" and "<<node<<endl;
    
    // cout<<"Path : ";
    
}