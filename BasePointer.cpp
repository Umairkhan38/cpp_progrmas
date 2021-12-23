#include<iostream>
using namespace std;

class Base{
public:
int a=125;
virtual void Display()     //the compiler avoids the virtual display 
{
cout<<"This is a Base Class function "<<a<<endl;
}

};
class Derive:public Base{
public:
int  b=45;
void Display(){
cout<<"This is a Derive Class "<<a<<" "<<b<<endl;
}
};

int main(){

Base* Base_class_pointer;       //POINTER TO THE BASE CLASS 
Base b;
Derive * Derive_pointer;        //POINTER TO THE DERIVE CLASS    
Derive d_obj;                   //OBJECT OF DERIVE CLASS   
Base_class_pointer=&d_obj;  //STORING DERIVE CLASS OBJECT'S ADDRESS INTO  POINTER
Base_class_pointer->a=78;       //SETTING VALUE OF A
Base_class_pointer->Display();  //CALLING A FUNCTION USING POINTER
// Derive_pointer->b=98;           //SETTING VALUE OF B
// Derive_pointer->Display();
return 0;

}