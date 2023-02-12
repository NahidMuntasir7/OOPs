#include <iostream>
using namespace std;
template<typename T,typename R> class A{
T x;
R y;
public:
void setData(T x,R y){
this->x=x;
this->y=y;
}
T getSum(){
return x+y;
}
};
int main(){
A <int,int>a;
a.setData(15,20);
cout<<"Sum="<<a.getSum()<<endl;
A <int,double>b;
b.setData(10,20.99);
cout<<"Sum="<<b.getSum()<<endl;
A <double,int>c;
c.setData(15.7,20);
cout<<"Sum="<<c.getSum()<<endl;
A <double,double>d;
d.setData(10.5,20.7);
cout<<"Sum="<<d.getSum()<<endl;
}
