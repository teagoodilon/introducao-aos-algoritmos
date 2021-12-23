#include <iostream>
using namespace std;

int soma_digitos(int a){
    int numero = a, soma = 0;
    while(numero > 0)
    {  
        int primeiro = numero%10;  
        soma = soma + primeiro;  
        numero = numero/10;  
    }
    return soma;
} 
bool confere(int a){
    int soma_numeros = soma_digitos(a);
    if(a % soma_numeros == 0){
        return true;
    } else {
        return false;
    }    
}
int main(){  
    int numero, resultado;
    cin >> numero;
    resultado = confere(numero);
    if(resultado){
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
    return 0;
}