#include <iostream>
using namespace std;
int main(){
    
    int horse, cow, chicken, limit;
    int out_horse, out_cow, out_chicken;
    int wei_horse, wei_cow, wei_chicken;
    int ok_horse, ok_cow, ok_chicken;
    cin>>limit>>horse>>cow>>chicken;
    
    wei_chicken = chicken*2;
    wei_cow = cow*150;
    wei_horse = horse*250;
    
    
    out_chicken = limit - wei_chicken;
    if (out_chicken >= 0){
        ok_chicken = chicken;
    }
    out_cow = out_chicken - wei_cow;
    if (out_cow >= 0){
        ok_cow = cow;
    }    
    out_horse = out_chicken - wei_horse; 
    if (out_horse >= 0){
        ok_horse = horse;
    }    
    cout<<horse<<endl<<cow<<endl<<chicken<<endl;
    
    
    return 0;
}