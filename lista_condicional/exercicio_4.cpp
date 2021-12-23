#include <iostream>
using namespace std;

int main(){
    int idade_nadador;
    cin>>idade_nadador;
    if(idade_nadador < 5){
        cout<<"Nao registrado"<<endl;
        
    }
    if((idade_nadador >= 5 and idade_nadador < 7) or (idade_nadador <= 7 and idade_nadador > 5)){
        cout<<"Infantil"<<endl;
    }
    return 0;
}