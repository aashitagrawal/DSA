#include<bits/stdc++.h>
using namespace std;

// Today's Date - 20 June 2023
// Topic - Must know concept of Pre-computation

// question link - https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa21kdGxQMm40NGNWeGF2bjRTMndJZTNSMTB1d3xBQ3Jtc0trZGxpaXAyaFA1cTE2eHVwSmx6OFJlMGJXQ0xDcnFhNjdwSlB1MzdnZllXOFZEd3VOSzJUdkNuMndIU05aTHp0cGhiLUpzVF9hTFV3N2hvUDhnck84bVc5em5WNDRoMFJDenFJNzhQYjg3T1NLdGt2WQ&q=https%3A%2F%2Fwww.hackerrank.com%2Fchallenges%2Fcrush%2Fproblem&v=4wqDE1zNUwc
// video link - https://www.youtube.com/watch?v=4wqDE1zNUwc&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=22&pp=iAQB

// question = Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

// Constraints
// 3 < n < 10^7
// 0 < k < 10^9
// 1 < m < 2*10^5
// 1 < a < b < n

const int N = 1e7 + 10;
long long int arr[N]; //automatically intilizaied to 0

int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        arr[a] += k;
        arr[b+1] -= k;
    }
    //Prefix sum
    for(long long int i=1; i<=n; i++)
    {
        arr[i] += arr[i-1];
    }
    cout<<*max_element(arr+1, arr+n+1)<<endl;
}