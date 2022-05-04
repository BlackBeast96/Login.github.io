#include <bits/stdc++.h>
using namespace std;

void smaller(int arr[],int s,int e){
    stack<int> st;
    if(e==5){
        cout<<-1;
        return;
    }
    if(arr[s]>arr[e]){
        st.push(arr[e]);
        cout<<st.top();
        st.pop();
    }
    else{
        cout<<-1;
    }
    smaller(arr,s+1,e+1);
}

int main(){
     int arr[]={5,3,2,4,2,5};
     smaller(arr,0,1);
}