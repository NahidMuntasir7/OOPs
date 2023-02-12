#include <bits/stdc++.h>
using namespace std;

void display(list<int>&li){
list<int>::iterator it;
for(it=li.begin();it !=li.end();it++){
cout<<*it<<" ";
}
cout<<endl;
}

void displayRev(list<int>&li){
list<int>::reverse_iterator it;
for(it=li.rbegin();it!=li.rend();it++){
cout<<*it<<" ";
}
cout<<endl;
}

bool even(const int& value) { return (value % 2) == 0; } //predicate function
int main(){
list<int>li,li2,li3;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
for(int i=1;i<=8;i++){
li.push_back(i);
}
li.push_front(1);
li.push_front(2);
display(li);
displayRev(li);
cout<<li.front()<<endl;
cout<<li.back()<<endl;
li.pop_back();
li.pop_front();
auto it=find(li.begin(),li.end(),5);
if(it!=li.end()){
cout<<"Element found"<<endl;
}
else cout<<"Not found"<<endl;
int x=11;
li.insert(it, x); //inserting before 5
it++;
li.insert(it, x); //inserting after 5
cout<<count(li.begin(),li.end(),2)<<endl;
cout<<count_if(li.begin(),li.end(),even)<<endl;
auto itt=find(li.begin(),li.end(),6);
if(itt!=li.end()){
li.erase(it);
}
auto it1=li.begin();
auto it2=li.begin();
advance(it2,4); //deleting first 4 elements
li.erase(it1,it2);
li.remove(3);
li.remove_if(even);
li2.assign(li.begin(),li.end());
li3.assign(arr,arr+10);
li.sort();
li.unique();
display(li);
display(li2);
display(li3);
}
