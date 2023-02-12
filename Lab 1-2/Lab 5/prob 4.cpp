#include <bits/stdc++.h>
using namespace std;
int main(){
pair<int,string>px={10,"Rajshahi"};
cout<<px.first<<endl;
cout<<px.second<<endl;
get<0>(px)=20;
cout<<px.first<<endl;
pair<int,string>bx,ax;
bx=px;
swap(ax,bx);
}
