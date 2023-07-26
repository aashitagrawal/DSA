#include <bits/stdc++.h>
using namespace std;

// Today's Date - 25 July 2023
// Topic - Muiltisource BFS with a codechef question

// question link - https://www.codechef.com/problems/SNSOCIAL
// video link - https://youtu.be/xvi8PqRrAyU

const int N = 1e3 + 10;
const int INF = 1e9 + 10;

int value[N][N];
int visited[N][N];
int level[N][N];

void reset(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
            level[i][j] = INF;
        }
    }
}

bool isValid(int x, int y, int n, int m)
{
    return x >= 0 && y >= 0 && x < n && y < m;
}

int bfs(int n, int m, vector<pair<int,int>> movements)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            mx = max(value[i][j], mx);
    queue<pair<int, int>> q;

    // root node
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mx == value[i][j])
            {
                q.push({i, j});
                level[i][j] = 0;
                visited[i][j] = 1;
            }
        }
    }

    int ans = 0; // our answer will the be the maximum level
    // bfs loop
    while (!q.empty())
    {
        auto vertex = q.front();
        int vertex_x = vertex.first;
        int vertex_y = vertex.second;
        q.pop();
        for (auto movement : movements)
        {
            int child_x = movement.first + vertex_x;
            int child_y = movement.second + vertex_y;
            if (!isValid(child_x, child_y, n, m) || visited[child_x][child_y])
                continue;
            q.push({child_x, child_y});
            level[child_x][child_y] = level[vertex_x][vertex_y] + 1;
            visited[child_x][child_y] = 1;
            ans = max(ans, level[child_x][child_y]);
        }
    }

    return ans;
}

int main()
{
    vector<pair<int, int>> movements = {
        {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        reset(n, m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> value[i][j];

        cout << bfs(n, m, movements) << endl;
    }
}