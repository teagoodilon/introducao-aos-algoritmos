#include <iostream>
using namespace std;

int main(){
    
    int linha, coluna;
    cin >> linha;
    coluna = linha;
    int matriz[linha][coluna], compara = 0, menor_valor = 0, achou = 0;
    for(int i=0; i < linha; i++){
       for (int j=0; j < coluna; j++){
            cin >> matriz[i][j];
            compara = matriz[i][j]; 
            if(i==0 and j==0){
               menor_valor = matriz[i][j];
            }
            if(compara <= menor_valor){
                menor_valor = compara;
                achou = i;
            }
       }
    }
    cout<<achou<<endl;
    return 0;
}