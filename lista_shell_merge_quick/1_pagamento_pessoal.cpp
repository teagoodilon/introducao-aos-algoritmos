#include <iostream>
using namespace std;

struct dados_funcionarios {
    int identificador;
    float horas_trabalhadas;
    float valor_hora;
    float salario;
};

int particionamento(dados_funcionarios vetor[], int inicio, int fim){
    int i = inicio + 1, j = fim;
    dados_funcionarios pivo = vetor[inicio];
    while (i <= j) {
        if (vetor[i].salario <= pivo.salario) {
            i++;
        } else if (pivo.salario <= vetor[j].salario) {
            j--;
        } else {   
            swap(vetor[i], vetor[j]);
            i++;
            j--;
        }
    }
    vetor[inicio] = vetor[j];
    vetor[j] = pivo;
    return j;
}

void quicksort(dados_funcionarios vetor[], int pos_pivo, int fim) {
    int pos_novo_pivo;         
    if (pos_pivo < fim) {  
        pos_novo_pivo = particionamento(vetor, pos_pivo, fim);
        quicksort(vetor, pos_pivo, pos_novo_pivo - 1); 
        quicksort(vetor, pos_novo_pivo + 1, fim); 
    }
}

void leitura_dados_funcionarios(dados_funcionarios cadastro_dados[], int a){
    for (int i = 0; i < a; i++){
        cin >> cadastro_dados[i].identificador; 
        if(cadastro_dados[i].identificador >= 0){
            cin >> cadastro_dados[i].horas_trabalhadas >> cadastro_dados[i].valor_hora;
            cadastro_dados[i].salario = cadastro_dados[i].horas_trabalhadas * cadastro_dados[i].valor_hora;
        } else {
            quicksort(cadastro_dados, 0, i-1);
            for(int j = 0; j < i; j++){
                cout << cadastro_dados[j].identificador << " " << cadastro_dados[j].salario << endl;
            }
            i = 100;
        }
    }
}
int main(){
    int maximo = 100;
    dados_funcionarios vetor[maximo];
    leitura_dados_funcionarios(vetor, maximo);
    
    return 0;
}