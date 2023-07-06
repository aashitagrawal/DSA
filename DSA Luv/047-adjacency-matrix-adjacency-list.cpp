#include<bits/stdc++.h>
using namespace std;

// Today's Date - 6 July 2023
// Topic - Adjacency Matrix and Adjacency List

const int N = 1e3+10;

int graph1[N][N]; //default value is 0 of global array
vector<pair<int,int>> graph2[N];
// vector<int> graph[N]; //For non weighted graph

int main()
{
    int n,m; //vertex, edge
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt;

        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
    //Graph 1 is Adjacency Matrix
    //O(N^2) --> Space Complexity
    // This is too large, if we have 10^4 vertex in a graph, we cannot make it with this 2D array

    //Graph 2 is Adjacency List
    //O(N+M) --> Space Complexity
    // Here vertex can be large


    //Time Complexity comparsion between Graph 1 and Graph 2
    //is Vertex 'i' connected to Vertex 'j', if yes what is the weight?
    int i=2,j=3;
    if(graph1[i][j]!=0)
    {
        //connected
        // weight = graph[i][j]
    }
    for(auto vertex : graph2[i])
    {
        if(vertex.first==j)
        {
            //connected
            //wegiht = vertex.second
        }
    }
}