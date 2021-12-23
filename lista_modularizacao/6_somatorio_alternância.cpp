#include <iostream>
#include <cmath>
using namespace std;
int somatorio(int a){
    int numero=1, troca_sinal=1, conta=0, expoente=1;
    double resultado=0;
    while(numero <= a){
        conta = numero * troca_sinal;
        if(conta < 0 and expoente == 2){
            resultado = (-1*pow(conta, expoente)) + resultado;
        } else {
            resultado = pow(conta, expoente) + resultado;            
        }
        expoente++;
        if(expoente == 4){
            expoente = 1;
        }
        troca_sinal = -1*troca_sinal;
        numero++;
    }    
    return int(resultado);
}
int main(){    
    int termos, resultado;
    cin>>termos;
    while(termos <= 0){
        cin>>termos;
    }
    resultado = somatorio(termos);
    cout<<resultado<<endl;
    return 0;
}