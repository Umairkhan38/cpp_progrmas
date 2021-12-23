#include <iostream>
using namespace std;

int glob = 45; //its define in Global Scope

int func()
{   //This function 'func()' doesnt have a glob in its local scope then it will look for
    // Globally assigned variable whichn is [ glob='45' ]

    bool a = true;
    cout <<"global var by sum is "<<glob;           //cout is consider as insertion operator
    cout <<"\nThe bool value of a is "<<a<<"\n";              //return 1 if true  & 0 when false
}

int main()           //main function has glob in its local scope then it will print glob='48'
{
    int glob;
    cout<<"Enter the glob for mains local scope\n";
    cin>>glob;          // cin known as extraction operator and use to take input
    func();
    cout <<"main glob value is "<<glob<<endl;
    cout<<"but accessing global var by scope resolution operatr "<<::glob;
    return 0;
}



