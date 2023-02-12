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
int getax(){
return ax;
}
};
class B{
private:
int bx;
public:
B(int b){
bx=b;
}
~B(){
cout<<"Destructor of B"<<endl;
}
int getbx(){
return bx;
}
};
class C:public A,public B{
private:
int cx;
public:
C(int a,int b,int c):A(a),B(b){
cx=c;
} ~C(){
cout<<"Destructor of C"<<endl;
}
void sum(){
cout<<"sum= "<<getax()+getbx()+cx<<endl;
}
};
int main(){
C obj(5,10,20);
obj.sum();
}
