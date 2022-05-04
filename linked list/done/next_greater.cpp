#include <iostream>
using namespace std;
#include<queue>

void greaternext(int arr[],int size){
    queue<int> q;
    queue<int> q2;

    int first=0;
    int sec=1;
    bool ans=false;
    for(int i=0;i<size;i++){
        q.push(arr[first]);
        q2.push(arr[sec]);
        first=sec;
        sec++;
    }
    for(int i=0;i<size;i++){
        if(q.front()<q2.front()){
            cout<<q2.front();
        }
        else{
            cout<<-1;
        }
        q.pop();
        q2.pop();
    }
    cout<<-1;
}


int main(){
    int arr[]={6 ,8, 0 ,1 };
    greaternext(arr,4);
}