#include <bits/stdc++.h>
using namespace std;

// Today's Date - 3 August 2023
// Topic - Codeforces problem on floyd warshall

// Que link - https://codeforces.com/problemset/problem/295/B
// Video link - https://youtu.be/aZ9-frzila0

int main()
{
    int n;
    cin >> n;
    long long dist[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> dist[i][j];

    vector<int> del_order(n); //creating a vector of size 'n' and all values 0 initially
    for(int i=0; i<n; i++)
        cin>>del_order[i];
    
    reverse(del_order.begin(), del_order.end());
    vector<long long> ans;

    for(int k=0; k<n; k++) //traversal on indexs of vector 'del_order'
    {
        int del_vertex = del_order[k];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                long long new_dist = dist[i][del_vertex]+dist[del_vertex][j];
                dist[i][j] = min(dist[i][j], new_dist);
            }
        }

        long long sum=0;
        for(int i=0; i<=k; i++)
            for(int j=0; j<=k; j++)
                sum+=dist[del_order[i]][del_order[j]];
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    for(auto ele:ans)
        cout<<ele<<" ";
    
}



/* Graph input of Test case 3 in Dijaktras Formate of weights 
4 16
1 1 0
1 2 3
1 3 1
1 4 1
2 1 6
2 2 0
2 3 400
2 4 1
3 1 2
3 2 4
3 3 0
3 4 1
4 1 1
4 2 1
4 3 1
4 4 0
*/