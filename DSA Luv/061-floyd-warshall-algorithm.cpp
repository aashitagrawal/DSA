#include <bits/stdc++.h>
using namespace std;

// Today's Date - 2 August 2023
// Topic - Floyd Warshall Algorithm
// Time Complexity - O(n^3) where n is number of vertices

const int N = 510;
const int INF = 1e9 + 10;

int dist[N][N];

int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                dist[i][j] == 0;
            else
                dist[i][j] = INF;
        }
    }

    int n, m; // vertex or nodes, edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        dist[x][y] = wt;
    }

    for (int k = 1; k <= n; k++) // levels
        for (int i = 1; i <= n; i++) //nodes
            for (int j = 1; j <= n; j++) //nodes
                if (dist[i][k] != INF && dist[k][j] != INF) //to handle negative weights
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
                cout << "I ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}

/* INPUT
    6 9
    1 2 1
    1 3 5
    2 3 2
    2 5 1
    2 4 2
    3 5 2
    4 5 3
    4 6 1
    5 6 2
*/