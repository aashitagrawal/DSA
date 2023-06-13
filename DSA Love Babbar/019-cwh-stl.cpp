// https://cplusplus.com/reference/stl/
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    // sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printList(list<int> &list0)
{
    list<int>::iterator mee;
    for (mee = list0.begin(); mee != list0.end(); mee++)
    {
        cout << *mee << " ";
    }
    cout << endl;
}

int main()
{
    // vector
    {
        // creating a vector and making a function to dispaly it
        vector<int> aashit;
        int n;
        cout << "Enter size : ";
        cin >> n;
        cout << "Enter elements" << endl;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            aashit.push_back(a);
        }
        cout << "  " << aashit[0] << "  " << endl; // we can access elements like this of a vector
        printVector(aashit);

        cout << "How many more elements you wanna add in array : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            aashit.push_back(a);
        }
        printVector(aashit);

        // Making iterator
        vector<int>::iterator ash = aashit.begin(); // making iterator of name 'ash' and pointing it to the begining element
        aashit.insert(ash, 5555);                   // this will insert 5555 at postion of iterator
        aashit.insert(ash + 1, 2, 9999);            // this will insert 9999, 2 times, at postion of iterator plus one
        printVector(aashit);

        //
        vector<int> khyati(22); // vector of length 22
        vector<char> v1;
        vector<double> v2;
        vector<int> copiedVecotr(aashit); // copying aashit to new vector (copiedVector)
        vector<int> test(5, 3);           // size =5, all five element are '3'
        cout << endl
             << "I m here" << endl;
        printVector(test);
    }

    // list
    {
        // Iterator
        list<int> list0;
        list0.push_back(4);
        list0.push_back(6);
        list0.push_back(9);
        list0.push_back(13);
        list0.push_back(15);
        cout << "list0 : ";
        printList(list0);

        cout << "Printing elements of list0 thorugh iterator : " << endl;
        list<int>::iterator testIte0;
        testIte0 = list0.begin();
        cout << *testIte0 << endl;
        testIte0++;
        cout << *testIte0 << endl; // because list use pointers, we use *

        cout << endl
             << "Assigning values to list1 through iterator and printing it : " << endl;
        list<int> list1(6); // empty list of size 6
        // dont push back elements in here, because 6 size is already there, so rather assign values to those 6 spaces(size)
        list<int>::iterator testIte1;
        testIte1 = list1.begin();
        *testIte1 = 56;
        testIte1++;
        *testIte1 = 78;
        testIte1++;
        *testIte1 = 23;
        testIte1++;
        for (; testIte1 != list1.end(); testIte1++)
        {
            *testIte1 = 100;
        }
        printList(list1);

        // deleting elemnts from list
        cout << endl
             << "list2 before deleting : ";
        list<int> list2;
        list2.push_back(1);
        list2.push_back(2);
        list2.push_back(3);
        list2.push_back(4);
        list2.push_back(5);
        list2.push_back(6);
        list2.push_back(7);
        printList(list2);

        list2.pop_back();
        list2.pop_front();
        list2.remove(4); // all the 4's will get removed

        cout << "list2 after deleting : ";
        printList(list2);
        cout << endl;

        // Sorting the list
        list<int> list3;
        list3.push_back(3);
        list3.push_back(4);
        list3.push_back(7);
        list3.push_back(1);
        list3.push_back(2);
        cout << endl
             << "Before sorting list3 :";
        printList(list3);

        list3.sort();
        cout << "After sorting list3 :";
        printList(list3);
        cout << endl;

        // merging two list
        list<int> list4(3, 16);
        list<int> list5(3, 108);
        cout << endl
             << "List 4 and 5 before merge :" << endl;
        printList(list4);
        printList(list5);

        list5.merge(list4); // list 4's all elements will be removed and size will become 0
        cout << "List 4 and 5 after merge :" << endl;
        printList(list4);
        printList(list5);

        // testing size
        list<int> list6(2, 68);
        cout << endl
             << "Size before : " << list6.size() << endl;
        list6.pop_back();
        list6.pop_back();
        cout << "Size after : " << list6.size();

        // merge and sort
        list<int> list7;
        list7.push_back(1);
        list7.push_back(5);
        list7.push_back(3);
        list7.sort();

        list<int> list8;
        list8.push_back(2);
        list8.push_back(6);
        list8.push_back(4);
        list8.sort();

        list7.merge(list8);
        cout << endl
             << endl
             << "Merge and sort : ";
        printList(list7);
        cout << endl;

        // reversing the list
        list<int> list9;
        list9.push_back(5);
        list9.push_back(9);
        list9.push_back(1);
        list9.push_back(5);
        list9.push_back(17);
        cout << endl
             << "list9 before reverse : ";
        printList(list9);
        list9.reverse();
        cout << "list9 after reverse : ";
        printList(list9);
    }
}