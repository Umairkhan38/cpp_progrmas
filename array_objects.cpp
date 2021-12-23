#include<iostream>
using namespace std;


class complex{

int a;
int b;

public:

void setvalue(int v1,int v2){

    a=v1;
    b=v2;
}

void valsum(complex o1,complex o2){

    a=o1.a+o2.a;
    b=o2.a+o2.b;

}

void display(){
    cout<<"the complex value is "<<a<<" + "<<b<<"i"<<endl;
}
};



int main(){

complex c1,c2,c3;
c1.setvalue(1,6);
c1.display();

c2.setvalue(1,1);
c2.display();

c3.valsum(c1,c2);
c3.display();


return 0;
}