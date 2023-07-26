#include <bits/stdc++.h>
using namespace std;

// Today's Date - 25 July 2023
// Topic - 0-1 BFS
// in 0-1 bfs we have a 'graph' of weight either 0 or 1, this is applicable for graphs and trees both
// at a time only nodes of 2 adjacent level exist, so 0-1 bfs uses this as a benefit

// question link - https://www.codechef.com/problems/REVERSE
// video link - https://youtu.be/SQOQ99stCas

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int, int>> graph[N];
vector<int> level(N, INF);

int zero_one_bfs(int n) // here n is number of vertices
{
    deque<int> q;
    q.push_back(1);
    level[1]=0;
    while(!q.empty())
    {
        int curr_vertex = q.front();
        q.pop_front();

        for(auto child_pair : graph[curr_vertex])
        {
            int child_vertex = child_pair.first;
            int wegiht = child_pair.second;
            if(level[curr_vertex] + wegiht < level[child_vertex])
            {
                level[child_vertex] = level[curr_vertex] + wegiht;
                if(wegiht==1)
                    q.push_back(child_vertex);
                else
                    q.push_front(child_vertex);
            }
            
        }
    }

    return level[n] == INF ? -1 : level[n];
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x==y) continue; // we dont want self loops
        graph[x].push_back({y, 0});
        graph[y].push_back({x, 1});
    }
    cout << zero_one_bfs(n) << endl;
}