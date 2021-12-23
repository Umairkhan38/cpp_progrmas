#include <iostream>
using namespace std;

class Base {

   private:
    int no1=5;

   protected:
    int prot;

   public:
    int pub;

    // function to access private member

    int getPVT() {      
    
        return no1;
        
    }

};


class ProtectedDerived : protected Base {
   public:
    // function to access protected member from Base
    int getProduct() {
        cout<<"ENter a second Number to get the product with 5 "<<endl;
        cin>>prot;
        return prot*getPVT();
    }

    // function to access public member from Base
    int getsum() {
        cout<<"Enterb a Number to get a sum with 5"<<endl;
        cin>>pub;
        return pub+getPVT();
    }
};



int main() { 
    ProtectedDerived obj;
    cout << "private members can not be directly accessed "<< endl;
    cout << "Protected = " << obj.getProduct() << endl;
    cout << "Public = " << obj.getsum() << endl;
    return 0;

}


