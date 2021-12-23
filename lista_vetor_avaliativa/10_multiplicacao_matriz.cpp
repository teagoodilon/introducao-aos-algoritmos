#include <iostream>
using namespace std;

int main(){
    int linhas, colunas;
    cin >> linhas >> colunas;
    float matriz[linhas][colunas];
    for(int i=0; i < linhas; i++){
        for(int j=0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }
    float multi1, multi2, soma = 0;
    cin >> multi1 >> multi2;
    for(int i=0; i < linhas; i++){
        for(int j=0; j < colunas; j++){
            if(i==0 or i%2==0){
               matriz[i][j] = multi1*matriz[i][j];
            } 
            if(j % 2 !=0){
                matriz[i][j] = multi2*matriz[i][j];
            }
        }   
    }
    for(int i=0; i < linhas; i++){
        for(int j=0; j < colunas; j++){
            soma += matriz[i][j];
        }
    }
    cout<<soma<<endl;
    return 0;
}