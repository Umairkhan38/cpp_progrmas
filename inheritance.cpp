#include<iostream>
using namespace std;

class Employee{
private:
int salary;

public:
int id;
Employee(int no){

id=no;

}
Employee(){}  //Default constructor

};


class Derive:Employee{
    public:
    Derive(int ep){
        id=ep;
        cout<<id<<endl;
    }

};


int main(){

Derive d(45);
Derive d1(46);

//d1.id;    IT CANT BE ACCESSED CUZ ITS DECLARE IN A PRIVATE SCOPE

return 0;

}


