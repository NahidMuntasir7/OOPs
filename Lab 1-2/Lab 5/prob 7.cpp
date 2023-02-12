#include<bits/stdc++.h>
using namespace std;
int main(){
queue<int>st;
st.push(5);
st.push(6);
st.push(7);
st.pop();
cout<<st.front()<<endl;
cout<<st.back()<<endl;
cout<<st.empty()<<endl;
}
