#include <bits/stdc++.h>
using namespace std;

// Today's Date - 24 July 2023
// Topic - SPOJ question (NAKANJ) of BFS shortest path
// Question Link - https://www.spoj.com/problems/NAKANJ/
// Video link - https://youtu.be/WOV3LYhPews

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

int visited[8][8]; // global arrays are initialised by 0, but this doesnt matter here as we are making a reset function
int level[8][8];

int getX(string s) // returns the X coordinate from the string
{
    return s[0] - 'a';
}

int getY(string s) // returns the Y coordinate from the string
{
    return s[1] - '1';
}

bool isValid (int x, int y)
{
    return x>=0 && y>=0 && x<8 && y<8;
}

vector<pair<int,int>> movements = {
    {-1,2}, {1,2},
    {-1,-2}, {1,-2},
    {2,-1}, {2,1},
    {-2,-1}, {-2,1}
};

void reset(){
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            level[i][j] = INF;
            visited[i][j] = 0;
        }
    }
}

int bfs(string source, string dest)
{
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);
    queue<pair<int,int>> q;
    q.push({sourceX,sourceY});
    visited[sourceX][sourceY] = 1;
    level[sourceX][sourceY] = 0;

    while(!q.empty())
    {
        pair<int,int> v = q.front();
        int x = v.first;
        int y = v.second;
        q.pop();

        for(auto movement:movements)
        {
            int childX = movement.first + x;
            int childY = movement.second + y;
            if(!isValid(childX, childY)) continue;
            if(!visited[childX][childY])
            {
                q.push({childX,childY});
                level[childX][childY] = level[x][y] + 1;
                visited[childX][childY] = 1;
            }
        }
        if(level[destX][destY] != INF)
        {
            break;
        }
    }

    return level[destX][destY];
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        reset();
        string s1,s2;
        cin>>s1>>s2;
        cout<<bfs(s1,s2)<<endl;;
    }
}