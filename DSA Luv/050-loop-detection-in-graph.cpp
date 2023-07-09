#include<bits/stdc++.h>
using namespace std;

// Today's Date - 8 July 2023
// Topic - Detecting Loops in a graph

const int N = 1e5+10;
vector<int> graph[N];
bool visited[N];
bool isLoopPresent = false;

bool dfs(int vertex, int parent)
{
    cout<<"Entering vertex : "<<vertex<<endl;
    visited[vertex]=true;
    for(int child : graph[vertex])
    {
        cout<<"\tParent : "<<vertex<<" child : "<<child<<endl;
        if(visited[child] && child==parent)   continue;
        if(visited[child]){
            return true;
            continue;
        }
        isLoopPresent |= dfs(child, vertex);
    }
    cout<<"Exiting vertex : "<<vertex<<endl;
    return isLoopPresent;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    /*
    7 11
    0 1
    1 2
    2 3
    3 5
    3 4
    3 7
    7 8
    4 1
    4 9
    9 10
    5 6
    */
    bool ans = dfs(0,0);
    if (ans) cout<<"LOOP IS PRESENT\n";
    else cout<<"LOOP IS ABSENT\n";
}