#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        multiset<long long> s;
        for (long long i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            s.insert(temp);
        }
        long long count = 0;

        for (long long i = 0; i < k; i++)
        {
            auto it = s.end();
            it--;
            count += (*it);
            long long toinsert = (*it) / 2;
            s.erase(it);
            s.insert(toinsert);
        }
        cout << count << endl;
    }
}