#include <iostream>
using namespace std;

void leitura(int vetor[], int a){
    for(int i = 0; i < a; i++){
        cin >> vetor[i];
    }
}

void selection_sort(int vetor[], int b){
    int menor, aux;
    for(int i = 0; i < b-1; i++){
        menor = i;
        for(int j = i + 1; j < b; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }
}
int main(){
    int quantidade;
    cin >> quantidade;
    int vetor[quantidade];
    leitura(vetor, quantidade);
    selection_sort(vetor, quantidade);
    
    for(int k = 0; k < quantidade; k++){
        cout << vetor[k]<< " ";
    }
    return 0;
}