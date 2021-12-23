#include<iostream>
using namespace std;

class Um{

    protected:
    float sal;
    int id;
    public:
    Um(float s,int i){
        sal=s;
        id=i;
    }
   virtual void display()=0;
};

class b1:public Um{
    public:
    string gname;
    b1(float s,int i,string name):Um(s,i){
           gname=name;
    }
        virtual void display(){
              cout<<"The Gem's Name is "<<gname<<endl;
              cout<<"The Gem's id is "<<id<<endl;
              cout<<"The Gem's Salary is "<<sal<<endl;
        }
};
class p1:public Um{
    public:
    
    string Designation;
    p1(float s,int i,string d):Um(s,i){
        Designation=d;
    }
    
    virtual  void display(){
           cout<<"The Gem's Designation is "<<Designation<<endl;
              cout<<"The Gem's id is "<<id<<endl;
              cout<<"The Gem's Salary is "<<sal<<endl;
    }
};

int main(){

Um*base_pointer;
p1 p(25.6,87,"Senior Developer");
base_pointer=&p;
base_pointer->display();

b1 b(85.25,65,"Khan Umair");
b.display();

return 0;

}








