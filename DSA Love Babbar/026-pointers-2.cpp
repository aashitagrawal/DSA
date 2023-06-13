#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {100, 200, 300, 400, 500};
    system("CLS");
    cout << "Name of the array stores addres of first element : " << arr << endl;
    cout << "Therefore : " << arr << " = " << &arr[0] << endl;
    cout << "This - " << arr << " and this - " << &arr << " are different" << endl;
    cout << arr << " this points to the first element" << endl;
    cout << &arr << " while this points to the whole array" << endl;
    cout << arr + 1 << " " << &arr + 1 << endl;
    cout << arr + 2 << " " << &arr + 2 << endl;
    cout << "Notice arr jumps one integer, while &arr jumps 5 integers because as said arr points to first element while &arr to whole array" << endl;

    // Playing with pointers
    system("CLS");
    cout << &arr[0] << " " << &arr[0] + 2 << " " << &arr[2];
    cout<<endl<<*arr<<endl; //100
    cout<<endl<<*&arr<<endl; //address
    cout<<endl<<*arr+1<<endl; //101
    cout<<endl<<(*arr)+1<<endl; //101
    cout<<endl<<*(arr)+1<<endl; //101
    cout<<endl<<*(arr+1)<<endl; //200
    cout<<endl<<arr[2]<<endl; //300
    cout<<endl<<*(arr+2)<<endl; //300
    //formula : arr[i] = *(arr+i)
    cout<<endl<<3[arr]<<endl; //400
    cout<<endl<<*(3+arr)<<endl; //400
    // or formula : i[arr] = *(i+arr)

    system("CLS");
    //CHARACTER ARRAY
    int arr1[5]={1,2,3,4,5};
    // char ch[5]="abcde" //error because last element has to be \0
    char ch[11]="abcdefghij";
    cout<<arr1<<endl; //points to address of 1st element
    cout<<ch<<endl; //cout - the print statement - works diffrently for this
    
    char *c = &ch[0];
    //now you think it will print address of c[0] but nah
    //because cout works differently for this
    cout<<c<<endl; //prints entire string
    char c1 = 'a';
    char *p1 = &c1;
    cout<<"yo "<<endl<<p1<<endl;



    
}