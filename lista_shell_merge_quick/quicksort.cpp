#include <iostream>
using namespace std;

void escrita_vetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i];
    }
}

int particionamento(int vetor[], int inicio, int fim){
    int pivo = vetor[inicio], i = inicio + 1, j = fim;
    while (i <= j) {
        if (vetor[i] <= pivo) {
            i++;
        } else if (pivo <= vetor[j]) {
            j--;
        } else {
            swap (vetor[i],vetor[j]);
            i++;
            j--;
        }
    }
    vetor[inicio] = vetor[j];
    vetor[j] = pivo;
    return j;
}

void quicksort(int vetor[], int pos_pivo, int fim) {
    int pos_novo_pivo;         
    if (pos_pivo < fim) {  
        pos_novo_pivo = particionamento(vetor, pos_pivo, fim);
        quicksort(vetor, pos_pivo, pos_novo_pivo - 1); 
        quicksort(vetor, pos_novo_pivo + 1, fim); 
    }
}

int main(){
    int tamanho, inicio = 0;
    cin >> tamanho;
    int vetor[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i];
    }
    quicksort(vetor, inicio, tamanho - 1);
    escrita_vetor(vetor, tamanho);
    return 0;
}