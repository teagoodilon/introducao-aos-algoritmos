#include <iostream>
using namespace std;

int* funcao(int** matriz){
    int* vetor = new int[5];
    int soma = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            soma += matriz[j][i];
        }
        vetor[i] = soma;
        soma = 0;
    }
    return vetor;
}

int main (){
    int **matriz;
    matriz =  new int*[5];
    for (int i = 0; i < 5; i++){
        matriz[i] = new int[5]; //cria espaco para colunas
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matriz[i][j];
        }
    }
    int* vetor = funcao(matriz);
    for(int h = 0; h < 5; h++){
        cout << vetor[h] << " ";
    }
    for (int i = 0; i < 5; i++){
        delete[] matriz[i]; 
    }
    delete[] matriz;
    delete[] vetor;
    return 0;
}