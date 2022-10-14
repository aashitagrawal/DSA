#include <bits/stdc++.h>
using namespace std;
void pp(int *p)
{
    p+=1;
}
int main()
{
    // pointer pointing to a pointer is double pointer
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    cout<<ptr2<< " "<<&ptr<<endl;
    cout<<*ptr2<<" "<<ptr<<" "<<&i<<endl;
    cout<<**ptr2<<" "<<*ptr<<" "<<i<<endl;
    cout<<ptr<<endl;
    pp(ptr);
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}