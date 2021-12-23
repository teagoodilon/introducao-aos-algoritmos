#include <iostream>
using namespace std;

struct cadastro_funcionario { 
    int identificador;
    int salario;
};

int particionamento(cadastro_funcionario vetor[], int inicio, int fim){
    int i = inicio + 1, j = fim;
    cadastro_funcionario pivo = vetor[inicio];
    while (i <= j) {
        if (vetor[i].identificador <= pivo.identificador) {
            i++;
        } else if (pivo.identificador <= vetor[j].identificador) {
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

void quicksort(cadastro_funcionario vetor[], int pos_pivo, int fim) {
    int pos_novo_pivo;         
    if (pos_pivo < fim) {  
        pos_novo_pivo = particionamento(vetor, pos_pivo, fim);
        quicksort(vetor, pos_pivo, pos_novo_pivo - 1); 
        quicksort(vetor, pos_novo_pivo + 1, fim); 
    }
}
void imprime_linha(cadastro_funcionario vetor[], int tamanho, int razao){
    for(int i = 0; i < tamanho; i++){
        int j=i+1;
        cout<<vetor[i].identificador<<" "<< vetor[i].salario <<" ";    
        if(j%razao==0 and i > 0){
            cout<<endl;
        }
    }
}

int main(){
    int tamanho, razao;
    cin >> tamanho;
    for(int i = 1; i < tamanho; i++){
        if((i*i)==tamanho){
            razao = i;
        }
    }
    cadastro_funcionario vetor[razao][razao];    //linha e depois coluna para ordenar
    for(int i = 0; i < razao; i++){
        for(int j = 0; j < razao; j++){
            cin >> vetor[i][j].identificador >> vetor[i][j].salario;
        }
    }
    quicksort(vetor[0], 0, tamanho-1);
    imprime_linha(vetor[0], tamanho, razao);
    /*for(int i = 0; i < razao; i++){
        for(int j = 0; j < razao; j++){
            cout << vetor[i][j].identificador << " " << vetor[i][j].salario << " ";
        }
        cout<<endl;
    }*/
    
    return 0;
}