#include<iostream>
using namespace std;

template<class T1,class T2>

float average(T1 a,T2 b){

    float avg=(a+b)/2.0;
    return avg;
}

int main(){
float a=average(8,7);
cout<<a;
return 0;

}
