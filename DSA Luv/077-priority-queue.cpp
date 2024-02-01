#include <bits/stdc++.h>
using namespace std;

// Today's Date - 6 Jan 2024
// Topic - Priortiy Queue

// Priority Queue uses max heap property by default.
// Time complextiy of insertion and deletion of a element is O(log n)
// For 'n' elements O(n log n)

int main()
{

    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    // Top element will be the max element we have inserted, as this is a max heap
    cout << "Top element: " << pq.top() << endl;

    // Remove the top element from the priority queue
    pq.pop();

    cout << "Top element after pop: " << pq.top() << endl;

    if (pq.empty())
        cout << "Priority queue is empty" << endl;
    else
        cout << "Priority queue is not empty" << endl;

    cout << "Size of priority queue: " << pq.size() << endl
         << endl
         << endl;

    // Use greater<int> to create a min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_min.push(10);
    pq_min.push(30);
    pq_min.push(20);
    cout << "Top element: " << pq_min.top() << endl;
    pq_min.pop();

    cout << "Top element after pop: " << pq_min.top() << endl;

    if (pq_min.empty())
        cout << "Priority queue is empty" << endl;
    else
        cout << "Priority queue is not empty" << endl;

    cout << "Size of priority queue: " << pq_min.size() << endl<<endl<<endl;


    // Make a priority queue from an existing array and vector
    int arr[] = {5, 2, 7, 1, 8};
    vector<int> vec = {10, 4, 6, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    priority_queue<int> pq_arr(arr, arr + n);
    priority_queue<int> pq_vec(vec.begin(), vec.end());

    cout << "Top element of pq_arr: " << pq_arr.top() << endl;
    cout << "Top element of pq_vec: " << pq_vec.top() << endl;

    // Print all elements of pq_arr
    cout << "Elements of pq_arr: ";
    while (!pq_arr.empty())
    {
        cout << pq_arr.top() << " ";
        pq_arr.pop();
    }
    cout << endl;

    // Print all elements of pq_vec
    cout << "Elements of pq_vec: ";
    while (!pq_vec.empty())
    {
        cout << pq_vec.top() << " ";
        pq_vec.pop();
    }
    cout << endl;

    return 0;
}
