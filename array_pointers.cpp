#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6},i=0;
    int* p=arr;
   
    
    //using do while loop
    //  do{
    //     cout<<"The value of array "<<" is "<<*p<<endl;
    //     *p++;
    // }while(*p<=6);



    while (*p<sizeof(arr)-1)
    {
    
    cout<<"the  elements  of an array is "<<*p<<endl;
    *p++;

    }

    // cout<<"the second pos of an array is "<<*p+1<<endl;
    // cout<<"the third pos of an array is "<<*p+2<<endl;




}














