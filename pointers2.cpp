#include<iostream>
using namespace std;

int main()
{
    int a=8;

    int *p=&a;
    
    cout<<"The value of pointer is "<<*p<<endl;

    //pointers using an array
     
     
    //initializing pointer using new keyword
    
    int *arr=new int [3]; 

    arr[0]=45;
    arr[1]=8;
    arr[2]=52;


    //delete arr;   Delete the elements from an array
    
    cout<<"value of arr[0] = "<<arr[0]<<endl;
    cout<<"value of arr[1] = "<<arr[1]<<endl;
    cout<<"value of arr[0] = "<<arr[2]<<endl;


    return 0;






}









