#include<iostream>
using namespace std;


int main(){

int arr[]={10,20,30,40,50},i,j,ans;
cout<<"Enter Your Target Element "<<endl;
cin>>ans;

for(i=0;i<sizeof(arr);i++){
    if(arr[i]==ans){
        cout<<"index of target element is "<<i;    
    }
}

return 0;

}