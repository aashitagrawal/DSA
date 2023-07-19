#include <bits/stdc++.h>
using namespace std;

// Today's Date - 19 July 2023
// Topic - edge deletion graph

// Question from interview bit - https://www.interviewbit.com/problems/delete-edge
// Video link - https://youtu.be/NzEzJ6Rmv2Q

const int N = 1e5 + 3;
const int M = 1e9 + 7;
vector<int> graph[N];
int value[N];
int subtree_sum[N];

void dfs(int vertex, int parent = -1)
{
    subtree_sum[vertex] += value[vertex];
    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
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
    cout << "Enter values for nodes : ";
    for (int i = 1; i <= nodes; i++)
    {
        int x;
        cin >> x;
        value[i] = x;
    }
    dfs(1);

    long long ans = -1;
    for (int i = 2; i <= nodes; i++)
    {
        int sum1 = subtree_sum[i];
        int sum2 = subtree_sum[1] - sum1;
        long long multiply = (sum1 * sum2) % M;
        ans = max(ans, multiply);
    }
    cout << "Final ans : ";
    cout << ans;
}