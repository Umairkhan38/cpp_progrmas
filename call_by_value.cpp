#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
int x=8,y=10;
cout<<"the value of a is "<<x<<endl;
cout<<"the value of b is "<<y<<endl;

cout<<"The values  after swapping are "<<endl;
// swap(x,y); it wont work cuz wont be affectiong x,y values

swap(&x,&y);  //it will work cuz we are calling it by reference

cout<<"the value of a is "<<x<<endl;
cout<<"the value of b is "<<y<<endl;

return 0;
}
