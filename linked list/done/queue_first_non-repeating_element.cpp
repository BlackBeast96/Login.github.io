#include <bits/stdc++.h>
using namespace std;

void repeat(string &s,int size){
    queue<char> q;
    for(int i=0;i<size;i++){
        q.push(s[i]);
    }
    for(int i=0;i<size-1;i++){
        if(q.front()==s[i+1]){
            s[i+1]='#';
        }
        q.pop();
    }
    for(int i=0;i<size;i++){
        cout<<s[i];
    }
    
}


int main(){
    string f="zz";
    int size=f.length();
    repeat(f,size);
}