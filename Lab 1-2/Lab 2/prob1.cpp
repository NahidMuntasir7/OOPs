#include<bits/stdc++.h>
using namespace std;
class all{
 private :
 int a;
 public :
 all(int a,int b,int c){
 cout<<"Substraction is :"<<a-b-c<<endl;
 }
 all (float a,float b,float c){
 int mini=(a<b)?(a<c ? a:c):(b<c ?b:c);
 cout<<"Minimum number is :"<<mini<<endl;
 }
 all(){
 cout<<"Please enter marks :"<<endl;
 cin>>a;
 if(a>=80) cout<<"GPA : 4 \nGrade : A+ "<<endl;
 else if(a>=70) cout<<"GPA : 3 \nGrade : B"<<endl;
 else if(a>=60) cout<<"GPA : 2 \nGrade : C"<<endl;
 else if(a>=50) cout<<"GPA : 1 \nGrade : D"<<endl;
 else cout<<"Your grade is F"<<endl;
 cout<<"Your marks is :"<<a<<endl;
 }
 ~all(){
 cout<<"This is Destructor"<<endl;
 }
};
 int main(){
 while(1){
 cout<<"Enter a number from 1-4 :"<<endl;
 int n;
 cin>>n;
 if(n==1){
 int a,b,c;
 cout<<"Enter three numbers :"<<endl;
 cin>>a>>b>>c;
 all(a,b,c);
 }
 if(n==2){
 all a;
 }
 if(n==3){
 cout<<"Enter three numbers :"<<endl;
 float a,b,c;
 cin>>a>>b>>c;
 all(a,b,c);
 }
 if(n==4){
 exit(0);
 }
 else continue;
 }
 }
