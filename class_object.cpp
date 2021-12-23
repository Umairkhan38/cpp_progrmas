#include <iostream>
using namespace std;

class Employee
{

private: //we can access the private members only using class functions
    int salary;
    string address;

public:
    int age;
    string name;

    void personal(int); //declaration

    void accept()
    {

        cout << "enter your address here!" << endl;
        cin >> address;
        cout << "enter your name here!" << endl;
        cin >> name;
        cout << "Enter The age " << endl;
        cin >> age;
    }

    void display()
    {
        cout << "The Employee Name is " << name << endl;
        cout << "The Employee age is " << age << endl;
    }
};


void Employee::personal(int Salary)
{ 
    //Defining a function outside a class using scope resolution operator

    salary = Salary;

    cout << "Salary is " << salary << endl;
}


int main()
{

    Employee e1;
    e1.accept();
    e1.display();

    e1.personal(15000000);
    return 0;
}
