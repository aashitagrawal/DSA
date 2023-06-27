#include <bits/stdc++.h>
using namespace std;

// Today's Date - 27 June 2023
// Topic - subset generation using bit masking

// 💡, if we have array - 2,4,5
// then it will have 8 subsets
// so, n length of array will give 2^n subsets
// so masks of subsets for 2,4,5 will be
// 000 , 001, 010, 011, 100, 101, 110, 111
// for example 011 represents the subset [2,4]
// so we already have the masks which is decimals number from 0 to (2^n) -1
// now from those masks we just need to fetch the subsets

// 💡 Question - Given an integer array nums of unique elements, return all possible subsets
// link - https://leetcode.com/problems/subsets/description/
// video link - https://youtu.be/wpWGDHmpbgA

int main()
{
    vector<int> nums;
    int input;
    while(cin>>input) // non-numeric to end input
        nums.push_back(input);
    cin.clear();
    cin.ignore();

    vector<vector<int>> ans;
    int subset_count = 1<<(nums.size());
    for(int i=0; i<subset_count; i++)
    {
        vector<int> temp;
        int num = i;
        int index = 0;
        while(num!=0)
        {
            if((num & 1) == 1)
                temp.push_back(nums[index]);
            index++;
            num = (num>>1);
        }
        ans.push_back(temp);
    }

    cout<<"Our final subsets = "<<endl;
    for(auto &a : ans)
    {
        for(auto &b : a)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }

            

}