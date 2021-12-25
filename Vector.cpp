#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
    
    cout<<"Elements In the vector are "<<v[i]<<" "<<endl;    
    }
}

int main(){

vector<int>v1;
int element;
cout<<"Enter a Elements to the Vector"<<endl;

for(int i=0;i<=4;i++){
    cin>>element;
    v1.push_back(element);
}


//Insertion in vector

display(v1);
cout<<endl;
vector<int>::iterator iter=v1.begin();     //Creatting Iterator
vector<int>::iterator itr=v1.end()+1;     //Creatting Iterator
v1.insert(iter,749);
v1.insert(itr,4,99);    //first param itr second no of copies  for '99'

display(v1);

return 0;

}

