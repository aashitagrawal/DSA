#include <bits/stdc++.h>
using namespace std;

// Today's Date - 10 July 2023
// Topic - Calculating Height and Depth of a Tree

const int N = 1e5 + 10;
vector<int> tree[N];
int depth[N], height[N];

void dfs(int vertex, int parent)
{
    for (auto child : tree[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
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
    for (int i = 1; i <= n; i++)
        cout << i << ":\tDepth=" << depth[i] << ", Height=" << height[i] << endl;
}














////// MY FIRST TRY BY MYSELF
// void depthOfTree(int vertex)
// {
//     for (auto child : tree[vertex])
//     {
//         depth[child] = depth[vertex] + 1;
//         depthOfTree(child);
//     }
// }

// void heightOfTree(int vertex)
// {
//     int heightOfCurrentVertex = 0;
//     bool haveLeaf = false;
//     for (auto child : tree[vertex])
//     {
//         heightOfTree(child);
//         heightOfCurrentVertex = max(height[child], heightOfCurrentVertex);
//         haveLeaf = true;
//     }
//     if (haveLeaf)
//         heightOfCurrentVertex++;
//     height[vertex] = heightOfCurrentVertex;
// }

// int main()
// {
//     // no of vertex  = no of edges + 1
//     cout << "Enter number of vertex in tree : ";
//     int n; // number of vertex
//     cin >> n;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         tree[v1].push_back(v2);
//     }
//     /* INPUT
//     13
//     1 2
//     1 3
//     1 13
//     2 5
//     5 6
//     5 7
//     5 8
//     8 12
//     3 4
//     4 9
//     4 10
//     10 11
//     */
//     int nodeVertex = 1;
//     depthOfTree(nodeVertex);
//     heightOfTree(nodeVertex);
//     for (int i = 1; i <= n; i++)
//         cout<<i<<":\tDepth="<<depth[i]<<", Height="<<height[i]<<endl;
// }