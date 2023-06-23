#include <bits/stdc++.h>
using namespace std;

// Today's date - 23 June 2023
// Topic - Advanced Binary Search Question with Predicate function

// que link - https://www.spoj.com/problems/EKO/
// quetion - Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees. Mirko's machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total). Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
// youtube link - https://www.youtube.com/watch?v=JAfJssvFgDI&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=53

// Predicate function - which returns either true or false
// monotonic function - either incresing or decreasing
// so we need predicate monotonic function
// example - T T T T F F, or, F F F F T T T
// not allwoed - T T T F T

// 💡 So we need predicate monotonic function here to solve the question
// 💡 We will make a function in which we will pass the height we will cut the trees and it will return true or false, if that wood is sufficient or not, so nature of this function is predicate monotonic

int n;                  // number of tress, not required lol
long long int m;        // required amount of wood
const int N = 1e6 + 10; // Max number of trees
long long int trees[N];

bool isSufficient(long long int height)
{
    long long int woods = 0;
    for (int i = 0; i < n; i++)
        if (trees[i] >= height)
            woods += (trees[i] - height);
    return woods >= m;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> trees[i];
    long long int mid, low = 0, high = 1e9; // max height of tree
    while (high - low > 1)
    {
        mid = low + (high - low) / 2;
        if (isSufficient(mid))
            low = mid;
        else
            high = mid - 1;
    }
    if (isSufficient(high))
        cout << high << endl;
    else
        cout << low << endl;
}