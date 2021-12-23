#include <iostream>
using namespace std;

class ComplexNum
{

    int a, b;

    public:

  ComplexNum(int d,int e);   //Parameterized Constructor Declaratrion

void printnum(){

    cout<<"The Number is "<<a*b<<endl;
}

};


ComplexNum::ComplexNum(int d,int e)
{
    a = d;
    b = e;
    

}


int main()
{
    ComplexNum c(5,6);
     c.printnum();
    
    return 0;
}






