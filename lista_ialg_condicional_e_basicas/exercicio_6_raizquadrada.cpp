#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int inteiro, numero1,numero2;
    float numeroraiz;
    cin>>inteiro;
    if(inteiro%2 == 0){
        cin>>numero1>>numero2;
        cout<<numero1+numero2<<endl;   
    } else {
        cin>>numeroraiz;
        cout<<sqrt(numeroraiz)<<endl;
    }
    
}