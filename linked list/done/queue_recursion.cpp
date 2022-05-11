#include <bits/stdc++.h>
using namespace std;

void repeat(string &s,int lop,int size){
    queue<char> q;
    if(lop>=size){
        return;
    }
    q.push(s[lop]);
    if(q.front()==s[lop+1]){
        s[lop+1]='#';
    }
    q.pop();
    cout<<s[lop];
    repeat(s,lop+1,size);
    
}


int main(){
    string f="zz";
    int size=f.length();
    repeat(f,0,size);
}