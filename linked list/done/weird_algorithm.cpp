#include <iostream>
using namespace std;
#include<stack>
void make(int n){
    stack<int> s;
    if(n<=1){
        return;
    }
    if(n%2==0){
        n=n/2;
        s.push(n);
    }
    else if(n%2!=0){
        n=(n*3)+1;
        s.push(n);
    }
    cout<<s.top()<<"->";
    make(n);
}


int main(){
     make(3);
}