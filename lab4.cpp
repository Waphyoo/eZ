#include<iostream>
using namespace std;

int main(){
    int key=1;
    int e=0;
    int o=0;
    while(key!=0){
    
    cout << "Enter an integer: ";
    cin>>key;
    if(key%2==0&&key!=0){
        
        o++;}
    if(key%2==1&&key!=0){
        
        e++;
    }
    }
  
    cout << "#Even numbers = "<<o<<endl;
    cout << "#Odd numbers = "<<e;
    return 0;
}