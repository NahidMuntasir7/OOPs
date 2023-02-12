#include<bits/stdc++.h>
using namespace std;
class A{
private :
int x;
public :
A(){
x=0;
}
void Display_data(){
cout<<"x = "<< x <<endl;
}
friend void Add(A &value);
friend void Incx(A &value);
friend void Decx(A &value);
};
void Add(A &value){
value.x=value.x + 10;
}
void Incx(A &value){
value.x=value.x + 20;
}
void Decx(A &value){
value.x=value.x - 10;
}
int main(){
A val,inc,dec;
val.Display_data();
Add(val);
val.Display_data();
Incx(inc);
inc.Display_data();
Decx(dec);
dec.Display_data();
}
