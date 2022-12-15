#include<iostream>
using namespace std;


int cheetah(int money){
    int bot = money/10;
    int i=bot-1;
    while(bot>2){
        bot=bot-2;
        i++;

    }
    if(i==bot-1){
        return bot;
    }else{
    return i+bot;
    }
} 

int main(){
    cout<<cheetah(100);


}