#include<bits/stdc++.h>
using namespace std;

// Today's Date - 8 July 2023
// Topic - Number of connected components in a graph

// Question Link - hackerearth.com/problem/algorithm/connected-components-in-a-graph
// Video Link - youtu.be/zBbRgLpeZus

const int N = 1e5+10;
vector<int> graph[N];
bool visited[N]; //global array initialized to zero/false

void dfs(int vertex)
{
    visited[vertex] = true;
    for(int child : graph[vertex])
    {
        if(visited[child]) continue;
        dfs(child);
    }
}

int main()
{
    int n,m;
    cin>>n>>m; //no. of vertex, edges
    for(int i=0; i<m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int connected = 0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i] == false)
        {
            dfs(i);
            connected++;
        }
    }
    cout<<connected<<endl;
}