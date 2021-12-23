#include <iostream>
using namespace std;

void leitura(int vetor[], int a){
    for(int i = 0; i < a; i++){
        cin >> vetor[i];
    }
}

void insertion_sort(int vetor[], int b){
    int pivo, j;
    int i = b - 2;
    while(i >= 0){            // 4 7 2 3 5 6
        pivo = vetor[i];         
        j = i + 1;
        while((j < b) and (vetor[j] > pivo)){ //verifica
            vetor[j-1] = vetor[j];
            j++;
        }
        vetor[j-1] = pivo;
        for(int k = 0; k < b; k++){
            cout<<vetor[k]<<" ";
        }
    cout<<endl;
    i--;
    }    
}

int main(){
    int quantidade;
    cin >> quantidade;
    int vetor[quantidade];
    leitura(vetor, quantidade);
    insertion_sort(vetor, quantidade);
    return 0;
}