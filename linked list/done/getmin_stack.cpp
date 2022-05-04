#include <iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"no data persent";
            return;
        }
        top--;
    }
    void getmin(){
        if(top==-1){
            cout<<"no data";
            return;
        }
        int min=arr[top];
        for(int i=top;i>=0;i--){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        cout<<min;
    }
    void Top(){
        if(top==-1){
            cout<<"no data";
            return;
        }
        cout<<arr[top];
    }
};
int main(){
     stack s;
     s.push(5);
     s.push(6);
     s.push(8);
     s.push(7);
     s.push(4);
     s.getmin();
}