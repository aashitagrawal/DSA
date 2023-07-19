#include <bits/stdc++.h>
using namespace std;

// Today's Date - 19 July 2023
// Topic - Breadth First Search

const int N = 1e5 + 3;
vector<int> graph[N];
int visited[N];
int level[N]; //initialized to 0

void bfs(int vertex)
{
    queue<int> q;
    q.push(vertex);
    visited[vertex]=1;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout<<curr<<", ";
        for(auto child : graph[curr])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child]=1;
                level[child] = level[curr] + 1;
            }
        }
    }
}

int main()
{
    cout << "Enter number of nodes : ";
    int nodes;
    cin >> nodes;

    cout << "Enter edges : ";
    for (int i = 0; i < nodes - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    cout<<"Order = ";
    bfs(1);
    cout<<endl;

    for(int i =1; i<=nodes; i++)
    {
        cout<<"Node : "<<i<<", Level : "<<level[i]<<endl;
    }

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