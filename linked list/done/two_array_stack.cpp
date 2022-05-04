#include <iostream>
using namespace std;

class stack{
    int* arr;
    int top;
    int n=100;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push1(int x){
        if(top==n-1){
            cout<<"overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void push2(int x){
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
    void pop2(){
        if(top==-1){
            cout<<"no data persent";
            return;
        }
        top--;
    }
    void Top(){
        if(top==-1){
            cout<<"data is not persent";
            return;
        }
        cout<<arr[top];
    }
};

int main(){
     stack s;
     s.push1(5);
     s.push2(6);
     s.pop2();
     s.pop();
     s.Top();
}