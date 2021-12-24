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

display(v1);

return 0;

}