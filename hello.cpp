// program to add two numbers without using arithmetic operator
#include<iostream>
// #include<conio.h>
using namespace std;

int main(){
int i,num1,num2;
cout<<"Enter The First Number\n";
cin>>num1;
cout<<"Enter The second Number\n";
cin>>num2;
for(i=0;i<num2;i++){
    num1++;
}
cout<<"the sum of the given number is "<<num1;
return 0;
}


