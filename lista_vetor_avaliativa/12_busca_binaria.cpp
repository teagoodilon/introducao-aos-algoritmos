#include <iostream>
using namespace std;

int busca_binaria(int vetor[], int numero_procurado, int inicio, int fim){
    
    int meio = (inicio+fim)/2;
    if(inicio <= fim){
        if (vetor[meio] == numero_procurado ){ //achou
        return meio;
    }
    if (vetor[meio] < numero_procurado){
        return busca_binaria(vetor, numero_procurado, meio + 1, fim);
        } else {
            return busca_binaria(vetor, numero_procurado, inicio, meio - 1);        
        }  
    } else {
        return -1;
    }
}

int busca_binaria_2(int vetor[], int numero_procurado, int inicio, int fim){ // strings

    int meio, posicao = -1;
    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if (vetor[meio] == numero_procurado ){ //achou
            inicio = fim + 1;
            posicao = meio;
        } else if (vetor[meio] < numero_procurado){
            inicio = meio + 1;
        } else if (vetor[meio] > numero_procurado){
            fim = meio - 1;
        }
    }
    return posicao;
}

int main(){
	
	int elementos;
	cin>>elementos;
    int vetor[elementos];
	for (int i=0; i < elementos; i++){
		cin>>vetor[i];
    }
    int numero_procurado, inicio=0, fim = elementos-1;
	cin>>numero_procurado;
    cout << busca_binaria(vetor, numero_procurado, inicio, fim) << endl;
    return 0;
}