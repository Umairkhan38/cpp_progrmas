#include<iostream>
using namespace std;


class Student{

int rollno;
int marks;
static int counter;

public:
void std_info(void){
    cout<<"Enter the  Roll No of student "<<counter<<endl;
    cin>>rollno;
    cout<<"Enter the marks of student "<<counter<<endl;
    cin>>marks;

}

void display(){
    Student::func();
    
    cout<<"The Roll No of Student "<<counter<<" is "<<rollno<<endl;
    cout<<"The Roll Marks of Student "<<counter<<" is "<<marks<<endl;
    counter++;
}


//Static member Function 

int static func(){      
    cout<<"The Value of Counter is "<<counter<<endl;
}


};

int Student::counter=1; //counter bvar is set as 0 By Default-herer we take as '1'



int main(){

Student s;

s.std_info();
s.display();
Student::func();    //calling static member function 


s.std_info();
s.display();
Student::func();    //calling static member function 

s.std_info();
s.display();
Student::func();    //calling static member function 

return 0;

}
