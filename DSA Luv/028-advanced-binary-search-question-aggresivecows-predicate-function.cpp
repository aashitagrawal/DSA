#include <bits/stdc++.h>
using namespace std;

// Today's date - 23 June 2023
// Topic - Advanced Binary Search Question with Predicate function

// que link - https://www.spoj.com/problems/AGGRCOW/
// quetion - Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000). His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
// youtube link - https://www.youtube.com/watch?v=H9LoqW-gGk0&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=54

// Predicate function - which returns either true or false
// monotonic function - either incresing or decreasing
// so we need predicate monotonic function
// example - T T T T F F, or, F F F F T T T
// not allwoed - T T T F T

// 💡 So we need predicate monotonic function here to solve the question
// 💡 We will make a function in which we will pass the height we will cut the trees and it will return true or false, if that wood is sufficient or not, so nature of this function is predicate monotonic

int n; // number of stalls
int c; // number of cows
const int N = 1e5+10;
int stalls[N] = {0};

bool canPlaceCows(int dist)
{
    int count = c; //count is to place number of cows
    count--;
    int pin = stalls[0];
    for(int i=1; i<n; i++)
    {
        if(stalls[i] - pin >= dist){
            count--;
            pin = stalls[i];
        }
        if (count==0)
            break;
    }
    return (count==0); //return true of cows are 0, else it will return false
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(int i=0; i<n; i++)
            cin>>stalls[i];
        sort(stalls, stalls+n);
        int mid, low=0, high = 1e9; //maximum dist between cows;
        while(high - low > 1)
        {
            mid = low + (high-low)/2;
            if(canPlaceCows(mid))
                low = mid;
            else
                high = mid - 1;
        }
        if(canPlaceCows(high))
            cout<<high<<endl;
        else
            cout<<low<<endl;
    }
}