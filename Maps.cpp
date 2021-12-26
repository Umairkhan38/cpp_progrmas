#include<iostream>
#include<map>
#include<string>
using namespace std;

void Print_Map(map<string,int>&m){
// map<string,int>::iterator iter;  //Creating an Operator using scope Resolution operator

for(auto iter:m){       //Accessing  a map using iterator

    cout<<(iter).first<<" "<<(iter).second<<endl; 

}}

int main(){

map<string,int>SalMap;
map<string,int>SalMap1;
map<string,int>SalMap2;
SalMap["Khan"]=99;
SalMap["Umair"]=100;
SalMap["Jhon"]=84;
SalMap["Shaun"]=45;


// cout<<"The Size Of SalMap Is "<<SalMap.size()<<endl;
// cout<<"The MaxSize Of SalMap Is "<<SalMap.max_size()<<endl;
// cout<<"The Empty's Return Value Of SalMap Is : "<<SalMap.empty()<<endl;
// Print_Map(SalMap);
SalMap1.insert({{"Shane Watson",78},{"Brian Lara",98}});
// cout<<"The Empty's Return Value Of SalMap Is"<<SalMap.empty.swap("khan",500);<<endl;
SalMap.swap(SalMap1); // It will Swap SalMap by SalMap1
// SalMap2.merge(SalMap);
// SalMap2.merge(SalMap1);
Print_Map(SalMap);  
return 0;
}