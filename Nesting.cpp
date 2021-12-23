#include<iostream>
#include<string>
using namespace std;

class Binary{

string s;

public:
    void read(void);
    void chk_bin(void);
    void bin_compl(void);
    void display(void);

};


void Binary::read(void){
    cout<<"Enter a Binary Number"<<endl;
    cin>>s;
}


void Binary::chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid Binary Number"<<endl;
            exit(0);
        }
    }
}



void Binary::bin_compl(void){
    cout<<"\nAfter Interchanging one's and zeros"<<endl;

    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        
        }
        else{
            s.at(i)='0';
        }
    }
}


void Binary::display(){

for(int i=0;i<s.length();i++){
  cout<<s.at(i);  
}

}




int main(){

Binary b;
b.read();
b.chk_bin();
b.display();
b.bin_compl();
b.display();
return 0;

}




