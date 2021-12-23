#include<iostream>
using namespace std;

class Daw{
int age;
public:

Daw(int d){
    age=d;
    cout<<"Constructor Has Invoked\n";
}

void print(){
    cout<<"the age is"<<age<<endl;
}

};

class Mus{
int age;

public:
Mus(int m){
age=m;
}
void printMus(){
    cout<<"the age is "<<age<<endl;
}

};

class Umair:public Daw,public Mus{

int age;
public:
Umair(int a,int b,int Um):Daw(a),Mus(b){

age=Um;
cout<<"constructor is invoked"<<endl;


}

void printUmair(){
 
    cout<<"the age is "<<age;

}};


int main(){

Umair u(75,45,20);
u.print();
u.printMus();
u.printUmair();
return 0;
}



