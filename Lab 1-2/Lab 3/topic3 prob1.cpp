#include<iostream>
using namespace std;
class A
{
private:
int ax;
public:
A(int a){
ax=a;
}
int getx(){
return ax;
}
~A(){
cout<<"Destructor of A"<<endl;
}
};
class B:public A{
private:
int bx;
public:
B(int a,int b):A(a){
bx=b;
}
void sum()
{
cout<<"sum= "<<bx+getx()<<endl;
}~B()
{
cout<<"Destructor of B"<<endl;
}
};
int main()
{
B obj(5,10);
obj.sum();
}
