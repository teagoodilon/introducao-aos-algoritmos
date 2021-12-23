#include <iostream>

using namespace std;

int main(){
    
    int tipo;
    double investimento;
    cin>>tipo>>investimento;
    
    if (tipo==1){
    investimento = investimento*1.005;
    cout.precision(5);
    cout<<investimento<<endl;
    
    } else if(tipo == 2){
        investimento = ((investimento*1.03) - 30);
        cout.precision(5);
        cout<<investimento<<endl;    
    }
    return 0;
}