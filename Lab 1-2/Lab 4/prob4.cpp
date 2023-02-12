#include<bits/stdc++.h>
using namespace std;
class A{
public:
virtual void Print()=0;
};
class B : public A{
public:
void Print(){
cout<<"Inside Print() of class B"<<endl;
}
};
int main(){
B b;
A *p;
p=&b;
p->Print();
}
