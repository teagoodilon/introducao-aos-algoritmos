#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int product,state;
    float price, tonnes, weight;

    cin>>product>>state>>weight;
    tonnes=weight*1000;
    cout<<tonnes<<endl;
    
    if(product >= 10 and product <= 20){
        price = 100;
        cout<<tonnes*price<<endl;
        cout.precision(10);
        if(state == 1){
        cout<<(tonnes*price)*0.35<<endl<<tonnes*price + ((tonnes*price)*0.35)<<endl;
    }
    if(state == 2){
        cout<<(tonnes*price)*0.25<<endl<<tonnes*price + ((tonnes*price)*0.25)<<endl;
    }
    if(state == 3){
        cout<<(tonnes*price)*0.15<<endl<<tonnes*price + ((tonnes*price)*0.15)<<endl;
    }
    if(state == 4){
        cout<<(tonnes*price)*0.05<<endl<<tonnes*price + ((tonnes*price)*0.05)<<endl;
    }
    if(state == 5){
        cout<<"0"<<endl<<tonnes*price<<endl;
    }
    }
    if(product >= 21 and product <= 30){
        price = 250;
        cout.precision(10);
        cout<<tonnes*price<<endl;
        if(state == 1){
        cout<<(tonnes*price)*0.35<<endl<<tonnes*price + ((tonnes*price)*0.35)<<endl;
    }
    if(state == 2){
        cout<<(tonnes*price)*0.25<<endl<<tonnes*price + ((tonnes*price)*0.25)<<endl;
    }
    if(state == 3){
        cout<<(tonnes*price)*0.15<<endl<<tonnes*price + ((tonnes*price)*0.15)<<endl;
    }
    if(state == 4){
        cout<<(tonnes*price)*0.05<<endl<<tonnes*price + ((tonnes*price)*0.05)<<endl;
    }
    if(state == 5){
        cout<<"0"<<endl<<tonnes*price<<endl;
    }   
    }
    if(product >= 31 and product <= 40){
        price = 340;
        cout.precision(10);
        cout<<tonnes*price<<endl;
        if(state == 1){
        cout<<(tonnes*price)*0.35<<endl<<tonnes*price + ((tonnes*price)*0.35)<<endl;
    }
    if(state == 2){
        cout<<(tonnes*price)*0.25<<endl<<tonnes*price + ((tonnes*price)*0.25)<<endl;
    }
    if(state == 3){
        cout<<(tonnes*price)*0.15<<endl<<tonnes*price + ((tonnes*price)*0.15)<<endl;
    }
    if(state == 4){
        cout<<(tonnes*price)*0.05<<endl<<tonnes*price + ((tonnes*price)*0.05)<<endl;
    }
    if(state == 5){
        cout<<"0"<<endl<<tonnes*price<<endl;
    }
    }
       
    return 0;
}