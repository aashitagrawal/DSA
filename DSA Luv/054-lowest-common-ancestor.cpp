#include<bits/stdc++.h>
using namespace std;

// Today's Date - 19 July 2023
// Topic - Lowest Common Ancestor in Trees

// Time Complexity - O(N)
// Steps to find LCA of 'x' and 'y'
// 1. Store path of 'x' and 'y' from root node
// 2. Then from obtained path you will get the LCA
// (You can find path of any node by storing the parents of every node)

const int N = 1e5+3;
vector<int> graph[N];
int parent[N];

void dfs_store_parents(int vertex, int par=-1)
{
    parent[vertex]=par;
    for(auto child: graph[vertex])
    {
        if(child==par) continue;
        dfs_store_parents(child,vertex);
    }
}

vector<int> get_path(int node)
{
    vector<int> path;
    path.push_back(node);
    int par = parent[node];
    while(par!=-1)
    {
        path.push_back(par);
        par = parent[par];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main()
{
    int nodes;
    cin>>nodes;
    for(int i=0; i<nodes-1; i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs_store_parents(1);

    cout<<"Find Lowest Common Ancestor"<<endl;
    int x,y,lca;
    cout<<"Enter node 1 : ";
    cin>>x;
    cout<<"Enter node 2 : ";
    cin>>y;
    
    vector<int> path1 = get_path(x);
    vector<int> path2 = get_path(y);
    for(int i=0; i<min(path1.size(),path2.size()); i++)
    {
        if(path1[i+1]!=path2[i+1])
        {
            lca = path1[i];
            break;
        }
    }

    cout<<"LCA = "<<lca<<endl;
}

/* Input
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