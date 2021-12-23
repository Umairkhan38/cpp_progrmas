#include<iostream>
#include<math.h>
using namespace std;

class Calculation{

protected:

float a,b;
char s;

public:

void calculator(){
cout<<"Enter a first Number "<<endl;
cin>>a;
cout<<"Enter a symbol(+,-,*,/) to perform an operation on numbers"<<endl;
cin>>s;
cout<<"Enter a Second Number "<<endl;
cin>>b;

}
};

class mult:public Calculation{
  public:
void scicalculator(){

cout<<"welcome to scientific calculator!"<<endl; 
cout<<"Enter a symbol((l->log),(s->sqrt)) to perform an operation on numbers"<<endl;
cin>>s;
cout<<"Enter a Number Now!"<<endl;
cin>>a;

}


void display(){

    switch(s){

    case '+':
    cout<<a+b<<endl;
    break;

    case '-':
    cout<<a-b<<endl;
    break;

    case '*':
    cout<<a*b<<endl;
    break;
        
    case '/':
    cout<<a/b<<endl;
    break;

    case 's':
    cout<<sqrt(a)<<endl;
    break;
     
    case 'l':
    cout<<log(a)<<endl;
    break;

    default:
    cout<<"No Match";

}}
};

class Derive : public mult{
public:
  void info(){
    cout<<"We are Using Single Inheritance"<<endl;
    cout<<"We are Inheriting in public Mode"<<endl;
  }
};

int main(){

Derive d;
d.calculator();
d.display();
d.scicalculator();
d.display();
d.info();

return 0;
}

