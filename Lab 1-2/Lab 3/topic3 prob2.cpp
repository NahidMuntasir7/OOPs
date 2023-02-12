#include<iostream>
using namespace std;
class A{
private:
int ax;
public:
A(int a){
ax=a;
}~A(){
cout<<"Destructor of A"<<endl;
}
int getx(){
return ax;
}
};
class B:public A{
private:
int bx;
public:
B(int a,int b):A(a){
bx=b;
}~B(){
cout<<"Destructor of B"<<endl;
}
int gety(){
return bx;
}
};
class C:public B{
int cx;
public:
C(int a,int b,int c):B(a,b){
cx=c;
}
void sum(){
cout<<"sum= "<<getx()+gety()+cx<<endl;
}~C(){
cout<<"Destructor of C"<<endl;
}
};
int main(){
C obj(5,10,20);
obj.sum();
}
