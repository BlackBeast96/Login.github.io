#include <bits/stdc++.h>
using namespace std;

void balance(string &s){
    stack<char> st;
    bool flag=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if(st.top()=='('){
            if(s[i]==')'){
                st.pop();
            }
            else{
                flag=false;
            }

        }
        else if(st.top()=='{'){
            if(s[i]=='}'){
                st.pop();
            }
            else{
                flag=false;
            }

        }
        else if(st.top()=='['){
            if(s[i]==']'){
                st.pop();
            }
            else{
                flag=false;
            }

        }
    }

    if(flag){
        cout<<"balanced";
    }
    else{
        cout<<"unbalanced";
    }
};
int main(){
    string f="{[(]}";
    balance(f);
}