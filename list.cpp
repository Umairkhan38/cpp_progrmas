#include<iostream>
#include<list>
using namespace std;


void display(list<int> &l1)
{
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++){
        cout<<*it<<'\t';
    }
}

int main(){
list<int>l1;
list<int>::iterator iter;
list<int>l2;
l1.push_back(524);
l1.push_back(651);
l1.push_back(44);
l1.push_back(85);
l1.push_back(89);
l1.sort();
//iterating element in the list

// for(iter=l1.begin();iter!=l1.end();iter++){
//     cout<<*iter<<"\t";
// }
// cout<<endl;


//sorting l1
// l1.sort();

l2.push_back(1);
l2.push_back(4);
l2.push_back(15);
l2.push_back(5);
l2.push_back(94);
l2.push_back(56);
l2.push_back(65);
l2.remove(5);        //remove target element
l2.pop_front();      //remove first element
l2.pop_back();      //REMOVE LAST ELEMNT

//Sorting the list
l2.merge(l1);
l2.sort(); 
display(l2);
cout<<"\nDisplaying a reverse list"<<endl;
l2.reverse();
display(l2);
return 0;
}