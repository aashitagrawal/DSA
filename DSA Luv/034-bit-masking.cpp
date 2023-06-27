#include <bits/stdc++.h>
using namespace std;

// Today's Date - 27 June 2023
// Topic - Bit Masking

int main()
{
    // 💡 Explaining what is bit masking
    /* Lets say you have four fruits
    apple - 0
    banana - 1
    lichi - 2
    mango - 3
    and three person, having some of those fruits
    person1 - apple,banana
    person2 - apple,lichi,mango
    person3 - apple, mango
    and you need to find max common friuts between all three person
    so bit mask person1 choices - 0011
    so bit mask person2 choices - 1101
    so bit mask person3 choices - 1001
    now find the BITWISE AND of these
    and we get - 0001 - so thats apple
    */

    // 💡 QUESTION
    // Consider this problem: There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days).
    // For each worker, you are given a set of numbers, each from interval [1,30] , representing his/her availability.
    // You need to assign an important project to two workers but they will be able to work on the project only when they are both available.
    // Find two workers that are best for the job — maximize the number of days when both these workers are available
    // Blog ling - https://codeforces.com/blog/entry/73558
    // Video link - https://youtu.be/mqCdA8mcJeo

    cout << "Enter number of workers : ";
    int n;
    cin >> n;
    vector<int> availability;
    for (int i = 0; i < n; i++)
    {
        cout << "Available number of days for worker " << i + 1 << " : ";
        int days;
        cin >> days;
        cout << "Enter all the days : ";
        int mask = 0;
        for (int i = 0; i < days; i++)
        {
            int temp;
            cin >> temp;
            mask = (mask | (1 << temp));
        }
        availability.push_back(mask);
    }
    
    int maxdays = 0;
    int p1=-1,p2=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int intersection = (availability[i] & availability[j]);
            int commondays = __builtin_popcount(intersection);
            if(commondays > maxdays)
            {
                maxdays = commondays;
                p1 = i;
                p2 = j;
            }
        }
    }

    cout<<endl<<"So person "<<p1+1<<" and person "<<p2+1<<" can work togther for "<<maxdays<<" days to finish the task :) "<<endl;
}