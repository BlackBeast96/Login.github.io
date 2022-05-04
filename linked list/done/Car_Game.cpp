#include <iostream>
using namespace std;

int main(){
     string f;
     string l="stoped";
     while(true){
        cin>>f;
        if(f=="start"){
            if(l=="started"){
                cout<<"car is already started"<<endl;
            }
            else{
                cout<<"car is starting"<<endl;
            }
            l="started";
        }
        else if(f=="stop"){
            if(l=="stoped"){
                cout<<"car is already stoped"<<endl;
            }
            else{
                cout<<"car is stoped"<<endl;
            }
            l="stoped";
        }
        else if(f=="exit"){
            break;
        }
        else{
            cout<<"invalid cmd"<<endl;
        }
         
     }
}