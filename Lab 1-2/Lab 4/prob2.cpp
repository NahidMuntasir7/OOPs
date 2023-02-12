#include<bits/stdc++.h>
using namespace std;
class Circuit{
private:
int real;
int img;
public:
Circuit(int r=0 , int i=0){
real=r;
img=i;
}
Circuit operator + (Circuit obj) {
Circuit res;
res.real = real + obj.real;
res.img = img + obj.img;
return res;
}
void print() {
cout<<real<<"+i"<<img<<endl;
}
};
int main(){
Circuit z1(3,4);
Circuit z2(4,-3);
Circuit z3(0,6);
Circuit z4=z1 + z2 + z3;
z4.print();
}
