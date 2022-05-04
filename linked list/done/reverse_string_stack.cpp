#include<bits/stdc++.h>
using namespace std;

void reverses(string &s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        cout<<st.top();
        st.pop();
    }   
}

int main(){
    string h="hem";
    reverses(h);

}
