#include<iostream>
using namespace std;

template <class T1,class T2>
class Myclass{
    
    public:
    T1 a;
    T2 b;

    Myclass(T1 c,T2 d){
        a=c;
        b=d;
    }

    void display(){
        cout<<this->a<<endl;
        cout<<this->b<<endl;
    }
};


int main(){
    
Myclass<int ,char> obj(78,'D');
Myclass<float ,char> obj1(9845.86,'O');
obj.display();
obj1.display();

return 0;

}



