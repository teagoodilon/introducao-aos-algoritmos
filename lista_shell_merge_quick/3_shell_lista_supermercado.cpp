#include <iostream>
using namespace std;

struct dados_produto{
    string nome;
    string marca;
    double preco;
};

void leitura_dados(dados_produto vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i].nome >> vetor[i].marca >> vetor[i].preco;
    }
}

void shellsort(dados_produto vetor[], int tamanho){
    int gaps[5] = {1, 3, 5, 10, 15};
    int pos_gaps = 4;
    while(gaps[pos_gaps] > tamanho){ // encontra valor de gap que cabe
        pos_gaps--;
    }
    dados_produto valor;
    int j;
    while (pos_gaps >= 0){  
        int gap = gaps[pos_gaps]; 
        for (int i = gap; i < tamanho; i++){ 
            valor = vetor[i]; 
            j = i;         
            while ((j >= gap) and (valor.preco < vetor[j - gap].preco)){
                vetor[j] = vetor[j - gap];
                j = j - gap;
            }
            vetor[j] = valor;
        }
        pos_gaps--;    
    }    
}

void desempate(dados_produto vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(vetor[j].preco == vetor[i].preco){
                if(vetor[i].nome[0] < vetor[j].nome[0]){
                    swap(vetor[j], vetor[i]);
                }
            }
        }
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    dados_produto vetor[tamanho];
    leitura_dados(vetor, tamanho);
    shellsort(vetor, tamanho);
    desempate(vetor, tamanho);   
    for(int i = 0; i < tamanho; i++){ 
        cout << vetor[i].nome << " " << vetor[i].marca << " " << vetor[i].preco << endl;
    }
    return 0;
}