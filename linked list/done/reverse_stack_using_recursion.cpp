#include <iostream>
using namespace std;
#include<stack>

stack<int> s;
void reversestack(int arr[],int start,int e){
    if(start>e){
        return;
    }
    s.push(arr[e]);
    cout<<s.top();
    s.pop();
    reversestack(arr,start,e-1);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    reversestack(arr,0,5);
}