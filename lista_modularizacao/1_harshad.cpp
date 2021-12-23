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
int confere(int a){
    if((a % soma_digitos(a)) == 0){
        return 1;
    } else {
        return 0;
    }    
}
int main(){  
    int numero;
    cin >> numero;
    if(confere(numero) == 1){
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
    return 0;
}