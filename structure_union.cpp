#include<iostream>
using namespace std;

typedef struct student{  //type def helps to take a shortname of an structure    
    int Id=123;
    char favchar='k';
    // char desigation[]="Presedent";
}s1;

//union datastructure
//union is a datatype which is helpful for the memorey management
//cuz it allow you to access only one element at a time 
union employee{

int age;
float salary;

};


int main(){

s1 khan;
// cout<<"Id is "<<khan.Id<<endl;
// cout<<"Fav char is "<<khan.favchar;

//we are using custumized union and it return a position of specified elem
enum employee{age,salary};
employee e1=salary;
cout<<age<<endl;
cout<<e1;



return 0;
}
