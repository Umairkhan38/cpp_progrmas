#include<iostream>
using namespace std;

class Student{
    
    private:
    int j;  //This is a private member cant be inherited But can be accessed by using a function of same class Eg:'j' in sum class
    
    protected:  //It can be inherited but cant access directly as public 
    int a,b;
   
    public:
    int sum(int x,int y){
        a=x;b=y;
        j=x+y;
        cout<<j<<endl; 
    }   

};


class Derive:public Student{
    
   public:
    
    int product(int m,int n){
     a=m;
     b=n;
     cout<<m*n;   
    
    }
};


int main(){
Derive d;

d.sum(8,6);
d.product(4,6);

return 0;

}



