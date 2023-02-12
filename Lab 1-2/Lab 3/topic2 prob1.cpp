#include<iostream>
using namespace std;
class A{
private:
int x;
protected:
int y;
public:
int z;
void setx(){
cout<<"Enter x : "<<endl;
cin>>x;
}
int getx(){
return x;
}
};
class B:public A{
public:
void sety(){
cout<<"Enter y : "<<endl;
cin>>y;
}
void printx(){
cout<<"x="<<getx()<<endl;
}
void printy(){
cout<<"y="<<y<<endl;
}
};
int main(){
B obj;
obj.setx();
obj.sety();
cout<<"Enter Z : "<<endl;
cin>>obj.z;
obj.printx();
obj.printy();
cout<<"z="<<obj.z<<endl;
}
