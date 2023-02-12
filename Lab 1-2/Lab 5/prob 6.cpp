#include <bits/stdc++.h>
using namespace std;
int main(){
stack<int>st;
st.push(5);
st.push(6);
st.push(7);
st.pop();
cout<<st.top()<<endl;
cout<<st.empty()<<endl;
}
