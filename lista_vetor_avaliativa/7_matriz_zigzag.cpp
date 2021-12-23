#include <iostream>
using namespace std;

int main(){
    int linha,coluna;
    cin >> linha >> coluna;
    int matriz[linha][coluna];
    for(int i=0; i < linha; i++){
        for (int j=0; j < coluna; j++){
            cin >> matriz[i][j];
        }
    }
    int inicio_linha = linha - 1, final_coluna = coluna-1, troca = 1, aux = 1;
    for(int i=0; i < linha; i++){
        for (int j=0; j < coluna; j++){
            if(troca < 0 and aux%2==0 and inicio_linha >= 0){
                for(int h=final_coluna; h > -1; h--){
                    cout<<matriz[inicio_linha][h]<<" ";                   
                }          
                inicio_linha--;
                aux++; 
                troca = troca * -1;
            }                
            if(inicio_linha >= 0){
                cout<<matriz[inicio_linha][j]<<" ";
            }
        }
        inicio_linha--;     
        if (troca > 0){
            aux++;
        }
        troca = troca * -1; 
    }
    return 0;
}