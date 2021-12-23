#include <iostream>
using namespace std;

int rev_str(string s){

    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    
    }



int main()
{
    string str[]="Khan Umair";
    rev_str(str);

    return 0;
}








