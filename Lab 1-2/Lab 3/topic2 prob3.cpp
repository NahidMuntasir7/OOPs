#include<iostream>
using namespace std;
class A
{
private:
int x;
protected:
int y;
public:
int z;
void setx()
{
cout<<"Enter x : "<<endl;
cin>>x;
}
int getx()
{
return x;
}
};
class B
{
private:
int p;
protected:
int q;
public:
int r;
void setp()
{
cout<<"Enter p : "<<endl;
cin>>p;
}
int getp()
{
return p;
}
};
class C:public A,public B
{
public:
void sety()
{
cout<<"Enter y : "<<endl;
cin>>y;
}
void setq()
{
cout<<"Enter q : "<<endl;
cin>>q;
}
void printx()
{
cout<<"x="<<getx()<<endl;
}
void printy()
{
cout<<"y="<<y<<endl;
}
void printp()
{
cout<<"x="<<getx()<<endl;
}
void printq()
{
cout<<"y="<<q<<endl;
}
};
int main()
{
C obj;
obj.setx();
obj.sety();
cout<<"Enter z : "<<endl;
cin>>obj.z;
obj.setp();
obj.setq();
cout<<"Enter r : "<<endl;
cin>>obj.r;
obj.printx();
obj.printy();
cout<<"z="<<obj.z<<endl;
obj.printp();
obj.printq();
cout<<"r="<<obj.r<<endl;
}
