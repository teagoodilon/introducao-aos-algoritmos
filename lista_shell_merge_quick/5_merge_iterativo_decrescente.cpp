#include <iostream>
using namespace std;

void intercalador(int vetor[], int p, int q, int r, int quantidade){
    int i = p, j = q;
    int tamanho = r - p + 1;
    int aux[tamanho];
    int k = 0;
    while ((i < q) and (j <= r)){
        if(vetor[i] >= vetor[j]){
            aux[k++] = vetor[i++];
        } else {
            aux[k++] = vetor[j++];
        }
    }
    while(i < q){
        aux[k++] = vetor[i++];
    }
    while(j <= r){
        aux[k++] = vetor[j++];
    }
    for(int n = 0; n < tamanho; n++){
        vetor[p + n] = aux[n];
    }
    for (int i = 0; i < quantidade; i++){
        cout << vetor[i] << " ";
    }
    cout<<endl;
}



void mergesort(int vetor[], int tamanho, int quantidade){
    int p, r, b = 1;
    while (b < tamanho){
        p = 0;
        while (p + b < tamanho){
            r = p + 2*b - 1;
            if (r >= tamanho){
                r = tamanho - 1;
            }
            intercalador(vetor, p, p+b, r, quantidade);
            p = p + 2*b;
        }
        b = 2*b;
    }
}

int main(){
    int quantidade;
    cin >> quantidade;
    int vetor[quantidade];
    for (int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }
    mergesort(vetor, quantidade, quantidade);   
    return 0;
}