// https://cplusplus.com/reference/stl/
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main()
{

//STL ARRAY
{
    // int normalArray[3]= {6,7,8};
    // array<int,4> stlArray = {12,13,14,15};

    // int size = stlArray.size();
    // for(int i=0; i<size; i++)
    // {
    //     cout<<stlArray[i];
    //     //or
    //     cout<<" "<<stlArray.at(i)<<endl;
    // }
    // cout<<"Empty or not : "<<stlArray.empty()<<endl; //bool datatype
    // cout<<"First element : "<<stlArray.front()<<endl;
    // cout<<"Last element : "<<stlArray.back()<<endl;
}

//Vector
{
    
    // vector<int> v;

    // cout<<"Capacity = "<<v.capacity()<<endl;
    // cout<<"Size = "<<v.size()<<endl;
    // v.push_back(19); //adds element at the last
    // cout<<endl;

    // cout<<"Capacity = "<<v.capacity()<<endl;
    // cout<<"Size = "<<v.size()<<endl;
    // v.push_back(20);
    // cout<<endl;
    
    // cout<<"Capacity = "<<v.capacity()<<endl;
    // cout<<"Size = "<<v.size()<<endl;
    // v.push_back(21);
    // cout<<endl;
    
    // cout<<"Capacity = "<<v.capacity()<<endl;
    // cout<<"Size = "<<v.size()<<endl;
    // v.push_back(22);
    // cout<<endl;
    
    // //Capacity is total number of elements can be added                                      // **IMP
    // //Size is number of elements in the vector

    // //Whenever vector is full, and we try to add an element

    // cout<<"You can use all the above function of array like front,back,etc"<<endl;

    // cout<<endl<<"Before Pop"<<endl;
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl<<"Capacity = "<<v.capacity()<<endl;
    // cout<<"Size = "<<v.size()<<endl;


    // v.pop_back(); //pops element from back; //capacity remains same obvio duh!             // **IMP
    // cout<<endl<<"After Pop"<<endl;
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl<<"Capacity = "<<v.capacity()<<endl;
    // cout<<"Size = "<<v.size()<<endl;

    // //Initializing vector size and element
    // vector<int> a(5,1); //size=5, all elements =1
    // cout<<endl<<"Print a"<<endl;
    // for(int i:a)
    // {
    //     cout<<i<<" ";
    // }
    // //copying a vector
    // vector<int> b(a);
    // cout<<endl<<"Print b"<<endl;
    // for(int i:b)
    // {
    //     cout<<i<<" ";
    // }
}

//Deque
{
    // deque<int> d;
    // //difference in vector and deque is, here we can use front function too
    // d.push_back(50);
    // d.push_front(40);

    // cout<<"Front ele "<<d.front()<<endl;
    // cout<<"Last ele "<<d.back()<<endl;

    // //Erase
    // d.erase(d.begin(),d.begin()+1); //we need to give from which index we need to erase
    // //d.begin()+1 wala index erase nahi hoga
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }

    // //we can use all the functions used above, including -- .at()

}

//List
{
    // //here in list we cannot use function -- .at()
    // list<int>l; //list of 0 length
    // list<int> testt(5); //empty list of 5 length
    // list<int> n(5,10816); //size=5
    // cout<<"Print n"<<endl;
    // for(int i:n)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl; 

    // l.push_back(34);
    // l.push_front(12);

    // l.erase(l.begin());
    // for(int i:l)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
}

//Stack
{
    // //Last In, First Out
    // stack<string> s;
    // s.push("Krishna");
    // s.push("Aashit");
    // s.push("Agrawal");
    // cout<<"Top element = "<<s.top()<<endl;
    // cout<<"Size = "<<s.size()<<endl;
    // s.pop();
    // cout<<"New top ele ="<<s.top()<<endl;

    // cout<<"Size = "<<s.size()<<endl;
    // cout<<"Empty or not "<<s.empty()<<endl;

}
    
//Queue
{
    // //First In First Out
    // queue<string> q;
    // q.push("A");
    // q.push("B");
    // q.push("C");

    // cout<<"Size before pop = "<<q.size()<<endl;
    // cout<<"First element in the queue (before pop)= "<<q.front()<<endl;

    // q.pop(); //pops the first element in the queue

    // cout<<"Size after pop = "<<q.size()<<endl;
    // cout<<"First element in the queue (after pop)= "<<q.front()<<endl;
}

//Priority Queue
{
    // //Deafuly PQ is max heap
    // //min heap is for fetching minimum element
    // //max heap is for fetching maximum element
    // //Deafuly PQ is max heap
    // //soooo, PQ is for fetching maximum element

    // //max heap
    // priority_queue<int> maxi;
    // //min heap
    // priority_queue<int, vector<int>, greater<int>> mini;

    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);
    // maxi.push(0);
    // cout<<"size of maxi= "<<maxi.size()<<endl;
    // int n = maxi.size();
    // for(int i=0; i<n; i++)
    // {
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }
    // cout<<endl;

    // mini.push(1);
    // mini.push(2);
    // mini.push(3);
    // mini.push(0);
    // mini.push(0);
    // mini.push(5);
    // cout<<"size of mini = "<<mini.size()<<endl;
    // n = mini.size();
    // for(int i=0; i<n; i++)
    // {
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }
    // cout<<endl;
    // cout<<"khali hai kya bhai ?? = "<<mini.empty()<<endl;




}

//Set
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(int i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    s.insert(5); s.insert(1); s.insert(6); s.insert(0); s.insert(5); s.insert(1); s.insert(6); s.insert(0);
    for(auto i: s){cout<<i<<" ";} cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<"After erasing "<<endl;
    for(auto i: s){cout<<i<<" ";} cout<<endl;

    cout<<endl<<"5 element present or not = "<<s.count(5)<<endl<<endl;

    //find
    set<int>:: iterator itr = s.find(5);
    for(auto i = itr; i!=s.end(); i++)
    {
        cout<<*i<<" ";
    }cout<<endl;

}

//Map
{
    // map<int, string> m;
    // //map has key value pairs
    // m[1]="krishna"; //1 is key, krishna is value
    // m[13]="aashit";
    // m[2]="agrawal";

    // m.insert({5,"bheem"});

    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<"    ";
    // }

    // cout<<endl<<"13 present or not  = "<<m.count(13)<<endl;
    
    // m.erase(13);
    // cout<<endl;
    // for(auto i:m){cout<<i.first<<" "<<i.second<<"    "; }cout<<endl;

    // //find function

}

//Algorithm
{
    // vector<int> v;
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // cout<<"Finding 4 (present or not)(dhoka hua na, index nahi deta yeh) = "<<binary_search(v.begin(),v.end(),4)<<endl;
    // //lower bound
    // //upper bound function

    // //max , min , swap

    // string s = "abcd";
    // cout<<"String = "<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<"String = "<<s<<endl;

    // //rotate
    // vector<int> x;
    // x.push_back(1);
    // x.push_back(2);
    // x.push_back(3);
    // x.push_back(4);
    // x.push_back(5);
    // x.push_back(6);
    // x.push_back(7);
    // cout<<endl;
    // for(auto i:x)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
    // rotate(x.begin(),x.begin()+2,x.end());
    // cout<<endl;
    // for(auto i:x)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;


}

}