#include<iostream>
using namespace std;

int subt(int,int);  //we need to decalre a function which we are definig after the main function 

int sum(int a,int b){
    int c=a+b;
    return c;
};

int main(){
int num1,num2;
cout<<"Enter first number"<<endl;
cin>>num1;
cout<<"Enter econd Number"<<endl;
cin>>num2;

cout<<"the sum value is "<<sum(num1,num2)<<endl;

cout<<"the subtract value is "<<subt(num1,num2);

return 0;

}


int subt(int x,int y){     //it has to declare above the main function
    int z=x-y;
    return z;
}

