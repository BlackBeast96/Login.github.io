#include <iostream>
using namespace std;

int grenext(int arr[],int s,int e){
    for(int i=s;i<e;i++){
        bool ans=false;
        int max=arr[i];
        for(int j=i;j<e;j++){
            if(arr[i]<arr[j]){
                max=arr[j];
                ans=true;
                break;
            }
        }
        if(ans){
            cout<<max;
            ans=false;
        }
        else{
            cout<<-1;
        }
    }
}


int main(){
    int arr[]={6 ,8, 0 ,1 ,3};
     grenext(arr,0,5);
}