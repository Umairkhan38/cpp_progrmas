#include<iostream>
using namespace std;

//recursive function using factorial example

int factorial(int n){

if(n<=1){
    return 1;
}
return n*factorial(n-1); //here (n-1) will make attemp to call fthe functions till n=1
}


int main(){

int a;

cout<<"Enter a Number to get factorial \n";
cin>>a;
cout<<"The Factorial of "<<a<<" is "<<factorial(a);

return 0;

}


