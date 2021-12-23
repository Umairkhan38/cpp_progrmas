#include<iostream>
using namespace std;



 Reverse(int num){
int reversed=0;
    while(num!=0){
    int rem=num%10;
    reversed=reversed*10+rem;
    num/=10;
}
return reversed;
}


int main(){
int a;
cout<<"Enter a Number "<<endl;
cin>>a;

if(a-Reverse(a)==0){
    cout<<a<<" is pallindrome";
}
else{
    cout<<a<<" is not a Pallindrome";
}


return 0;
}










