#include <iostream>
using namespace std;

long fatorial(int a){
    long fator=1, parcial=1;
    while (fator <= a){
        parcial = parcial*fator;
        fator++;
    }    
    return parcial;
}

long combinacao(int b, int c){
    return fatorial(b)/(fatorial(c)*(fatorial(b-c)));  
}

long somatorio(int b){
    int c = 1;
    long soma = 0;
    while (c <= b){
        soma+=combinacao(b,c);
        c++;
    }    
    return soma;
}
int main(){
    int valor;
    cin>>valor;
    cout<<somatorio(valor)<<endl;
}