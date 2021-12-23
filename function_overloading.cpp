#include<iostream>
using namespace std;

//Function Overloading:
//function overloading is function with same name but with diffrent parameters


int volume(int a){  //volume()

return (a*a*a);
}

int volume(int a,int b,int c){      //volume()        

    return (a*b*c);
}



int main(){
    
int a,b,c;
cout<<"Enter the length to get volume of square"<<endl;
cin>>a;
cout<<"the volume of square is "<<volume(a)<<endl;

cout<<"Enter the length,breath,height respectively to get volume of triangle"<<endl;
cin>>a>>b>>c;
cout<<"the volume of square is "<<volume(a,b,c)<<endl;

return 0;
}


