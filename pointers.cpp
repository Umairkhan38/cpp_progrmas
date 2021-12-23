#include<iostream>
using namespace std;

int main()
{

    int a=8;
    int* b=&a;  // 'b' stores memorey address of a into it
    cout<<b<<endl;   // it will return a memorey address of 'a'
    cout<<*b; // it return the value of 'a'
    return 0;



}



