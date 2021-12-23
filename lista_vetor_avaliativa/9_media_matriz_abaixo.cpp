#include <iostream>
using namespace std;

int main(){
    
    int linha, coluna;
    cin >> linha;
    coluna = linha;
    float matriz[linha][coluna], numeros1 = 0, quatidade1 = 0, numeros2 = 0, quantidade2 = 0;
    for(int i=0; i < linha; i++){
       for (int j=0; j < coluna; j++){
            cin >> matriz[i][j];
            if(i >= j or j == 0 or i == linha - 1){
                numeros1 += matriz[i][j];
                quatidade1++;
            }
            if(i + j >= coluna-1 or j == coluna - 1 or i == linha - 1){
                numeros2 += matriz[i][j];
                quantidade2++;
            }
       }
    }
    cout<<numeros1/quatidade1<<endl<<numeros2/quantidade2<<endl;
    return 0;
}