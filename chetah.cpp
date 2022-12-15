#include<iostream>
using namespace std;


int cheetah(int money){
    int bot = money/10;
    int i=bot;
    while(bot>2){
        bot=bot-2;
        i++;

    }
    
    return i;
    
} 


int main(){
    cout<<cheetah(101);


}