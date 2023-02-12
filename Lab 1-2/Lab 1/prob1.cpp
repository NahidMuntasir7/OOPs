#include<bits/stdc++.h>
using namespace std;
class account{
private:
 string Name;
 long long account_ID;
 long long balance=0;
public:
 void create_account(){
 cout<<"Name:";
 cin>>Name;
 cout<<"Create account ID:";
 long long c;
 cin>>c;
 account_ID=c;
 cout<<"Account Created Successfully"<<endl;
 }
 long long check_balance(){
 return balance;
 }
 void deposit(){
 long long c;
 cout<<"Enter Amount:";
 cin>>c;
 balance+=c;
 cout<<"Successfully Deposited"<<endl;
 }
 void withdraw(){
 long long c;
 cout<<"Enter amount:";
 cin>>c;
 balance-=c;
 cout<<"Money Withdrawn"<<endl;
 }
 int check(string user,long long id){
 if((Name==user)&&(account_ID==id)){
 return 1;
 }
 else return 0;
 }
};
void delete_account(account arr[],int n,int posi)
{
 for(int i=posi; i<n-1; i++)
 {
 arr[i]=arr[i+1];
 }
}
int find_ac(account arr[],int n){
 string fname;
 long long id;
 cout<<"Enter User's Name:";
 cin>>fname;
 cout<<"Enter User's Account ID:";
 cin>>id;
 for(int i=0; i<=n; i++)
 {
 if(arr[i].check(fname,id))
 return i;
 }
 cout<<"Account Not Found"<<endl;
 return -1;
}
int main(){
 account acc[100];
 int i=0,ID,b=1,posi;
 cout<< "**** Main Menu ****"<<endl;
 cout<<endl;
 cout<<"1.Open New Account"<<endl;
 cout<<"2.Close Old Account"<<endl;
 cout<<"3.Check Balance"<<endl;
 cout<<"4.Deposit Money"<<endl;
 cout<<"5.Withdraw Money"<<endl;
 cout<<"6.Exit"<<endl;
 while(1){
 cout<<"Choose an option from 1 to 6 :"<<endl;
 int n;
 cin>>n;
 if(n==1){
 cout<<"Give your admin ID :"<<endl;
 cin>>ID;
 if(ID==12345){
 acc[i].create_account();
 i++;
 }
 else cout<<"You Are Not Admin"<<endl;
 }
 if(n==6){
 exit(0);
 }
 if(n==2){
 cout<<"Give Your Admin ID:"<<endl;
 cin>>ID;
 if(ID==12345){
 posi=find_ac(acc,i);
 if(posi==-1) continue;
 if(acc[posi].check_balance()){
 cout<<"Account Has Money.It Can Not Be Deleted."<<endl;
 }
 else{
 delete_account(acc,i,posi);
 i--;
 cout<<"Account Has Been Deleted Successfully"<<endl;
 }
 }
 else cout<<"You Are Not Admin"<<endl;
 }
 if(n==3){
 posi=find_ac(acc,i);
 if(posi!=-1)
 cout<<"Your Balance Is :"<<acc[posi].check_balance()<<endl;
 }
 if(n==4){
 posi=find_ac(acc,i);
 if(posi!=-1)acc[posi].deposit();
 }
 if(n==5){
 posi=find_ac(acc,i);
 if(posi!=-1) acc[posi].withdraw();
 }
 }
}
