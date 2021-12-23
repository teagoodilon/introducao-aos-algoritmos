#include <iostream>
using namespace std;

void leitura(int vetor[], int a){
    for(int i = 0; i < a; i++){
        cin >> vetor[i];
    }
}

void selection_sort(int vetor[], int b){
    int maior, aux;
    for(int i = 0; i < b-1; i++){
        maior = i;
        for(int j = i + 1; j < b; j++){
            if(vetor[j] > vetor[maior]){
                maior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = aux;
        for(int k = 0; k < b; k++){
            cout << vetor[k]<< " ";
        }
        cout<<endl;
    }
}
int main(){
    int quantidade;
    cin >> quantidade;
    int vetor[quantidade];
    leitura(vetor, quantidade);
    selection_sort(vetor, quantidade);
    return 0;
}