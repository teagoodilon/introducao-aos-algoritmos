#include <iostream>
using namespace std;

void leitura(int vetor[], int a){
    for(int i = 0; i < a; i++){
        cin >> vetor[i];
    }
}

void selection_sort(int vetor[], int b, int limite){
    int maior, aux;
    for(int i = 0; i <= limite; i++){
        maior = i;
        for(int j = i + 1; j <= limite; j++){
            if(vetor[j] > vetor[maior]){
                maior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = aux;
    }
    for(int h = 0; h < b; h++){
       cout<<vetor[h]<<" ";
    }
}
int main(){
    int quantidade;
    cin >> quantidade;
    int vetor[quantidade];
    leitura(vetor, quantidade);
    int limite;
    cin >> limite;
    selection_sort(vetor, quantidade, limite);
    return 0;
}