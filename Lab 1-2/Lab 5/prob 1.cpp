#include <iostream>
using namespace std;
int main(){
int i;
int ax[5]={10,20,60,40,30};
cout<<"enter index:";
cin>>i;
try{
if(i>4){
throw "Out of range";
throw i;
}
cout<<"ax["<<i<<"]="<<ax[i]<<endl;
}
catch(char const *ex){
cout<<ex<<endl;
}
catch(int t){
cout<<"Out of range"<<endl;
}
catch(...){
cout<<"Error"<<endl;
}
}
