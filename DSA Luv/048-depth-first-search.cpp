#include<bits/stdc++.h>
using namespace std;

// Today's Date - 8 July 2023
// Topics - Depth First Search

const int N = 1e5+10; //Number of vertex
vector<int> graph[N];
bool visited[N];

//Time complexity : O(vertex + edges)
void dfs(int vertex)
{
    // Take action on vertex after entering the vertex
    // if(visited[vertex]) return; //alternative for that loop continue statement
    cout<<vertex<<endl;
    visited[vertex] = true;
    for (int child : graph[vertex])
    {
        // Take action on child before entering the child
        cout<<"Parent :"<<vertex<<", child :"<<child<<endl;
        if (visited[child]) continue;
        dfs(child);
        // Take action on child before exiting the child
    }
    // Take action on child before exiting the vertex
}

int main()
{
    int n,m; //number of vertex, edges
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;

        /* Copy paste the input
        6 9
        1 3
        1 5
        3 5
        3 4
        3 6
        3 2
        2 6
        4 6
        5 6
        */

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
}