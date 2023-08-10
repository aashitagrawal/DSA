#include <bits/stdc++.h>
using namespace std;

// Today's Date - 8 August 2023
// Topic - Google Interview Hard Question | Minimum Spanning Tree
// que link - https://codeforces.com/contest/1245/problem/D
// video link - https://youtu.be/pZXatDdVELI

// DSU
const int N = 2e3 + 10;
int parent[N], Size[N];
void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int main()
{
    // INPUT STARTS
    int n; // number of cities
    cin >> n;
    vector<pair<int, int>> dist(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> dist[i].first >> dist[i].second;
    vector<int> power_cost(n + 1), wire_cost(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> power_cost[i];
    for (int i = 1; i <= n; i++)
        cin >> wire_cost[i];
    // INPUT ENDS

    // Making a graph STARTS
    vector<pair<long long, pair<int, int>>> edges;
    for (int i = 1; i <= n; i++) // making  a 0th node which denotes the power station
        edges.push_back({power_cost[i], {0, i}});
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int distance = abs(dist[i].first - dist[j].first) + abs(dist[i].second - dist[j].second);
            long long weight = distance * 1LL * (wire_cost[i] + wire_cost[j]);
            edges.push_back({weight, {i, j}});
        }
    }
    for (int i = 0; i <= n; i++) // DSU
        make(i);
    // Making a graph ENDS

    // Making Minimum Spannig Tree STARTS
    sort(edges.begin(), edges.end());
    long long minimum_yen = 0;
    vector<int> power_stations_to_build;
    vector<pair<int, int>> wire_connection_to_build;
    for (auto &edge : edges)
    {
        int wt = edge.first;
        int a = edge.second.first;
        int b = edge.second.second;
        if (find(a) == find(b)) // detecting cycles/loops
            continue;
        Union(a, b);
        minimum_yen += wt;
        if (a == 0 || b == 0)
            power_stations_to_build.push_back(max(a, b));
        else
            wire_connection_to_build.push_back({a, b});
    }
    // Making Minimum Spannig Tree ENDS

    // Printing output STARTS
    cout << minimum_yen << endl;

    cout << power_stations_to_build.size() << endl;
    for (auto ele : power_stations_to_build)
        cout << ele << " ";
    cout << endl;

    cout << wire_connection_to_build.size() << endl;
    ;
    for (auto ele : wire_connection_to_build)
        cout << ele.first << " " << ele.second << endl;
}