#include <bits/stdc++.h>
using namespace std;

// Today's Date - 1 August 2023
// Topic - Dijkstra's Algorithm

// N represent the maxm nodes the graph can have
// INF represent the infinity
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

// pair-->  node, weight
vector<pair<int, int>> g[N];

void dijkstra(int source, vector<int> &dist)
{
    vector<int> vis(N, 0);

    // pair--> weight, node
    // weight is kept at first position because sorting is automatic on first
    set<pair<int, int>> st;

    st.insert({0, source});
    dist[source] = 0;

    while (!st.empty())
    {
        // getting the smallest value from the set
        auto node = *st.begin();
        int distance = node.first;
        int v = node.second;

        // jo item list se nikaal rahe hain usko erase v krna hai set se
        st.erase(st.begin());

        // agr node already visited hai to skip
        if (vis[v] == 1)
            continue;
        vis[v] = 1;

        // go to the children node
        // child represents an element of the g[v] container, which likely
        // represents the adjacency list or set of child nodes for the vertex v in a graph.
        for (auto child : g[v])
        {
            // in the graph ( first -> node ) & ( second-> weight )
            int child_v = child.first;
            int wt = child.second;

            if (distance + wt < dist[child_v])
            {
                st.erase({dist[child_v], child_v}); // Remove the old entry if present
                dist[child_v] = distance + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
}

int main()
{
    int n, m; // Number of vertex / nodes, edges
    cin >> n >> m;
    int source = 1;
    vector<int> dist(n + 1, INF); // Initialize dist vector with INF

    for (int i = 0; i < m; i++)
    {
        int x, y, weight;
        cin >> x >> y >> weight;
        g[x].push_back({y, weight});
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

    dijkstra(source, dist);

    // Print the shortest distances from the source to all other nodes
    for (int i = 1; i <= n; i++)
    {
        cout << "Shortest distance from " << source << " to " << i << " is ";
        if (dist[i] == INF)
            cout << "INF";
        else
            cout << dist[i];
        cout << endl;
    }
}