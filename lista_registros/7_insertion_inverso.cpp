#include <iostream>
using namespace std;

void leitura(int vetor[], int a){
    for(int i = 0; i < a; i++){
        cin >> vetor[i];
    }
}

void insertion_sort(int vetor[], int b){
    int pivo, j;
    for(int i = 0; i < b; i++){
        pivo = vetor[i];
        j = i - 1;
        while((j >= 0) and (pivo > vetor[j])){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = pivo;
        if(i > 0){
            for(int k = 0; k < b; k++){
                cout<<vetor[k]<<" ";
            }
        cout<<endl;
        }
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