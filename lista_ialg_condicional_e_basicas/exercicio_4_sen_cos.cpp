#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int operacao;
    float angulo,angulop;
    
    cin>>operacao;
    cin>>angulo;

    if(operacao == 1){
        cout.precision(2);
        cout<<sin(angulo*M_PI/180)<<endl;
    }
    if(operacao == 2){
        cout.precision(2);
        cout<<cos(angulo*M_PI/180)<<endl;
    }
    if(operacao == 3){
        cin>>angulop;
        cout<<angulo*angulop<<endl;
    }
    return 0;
}