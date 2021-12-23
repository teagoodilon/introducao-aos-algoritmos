#include <iostream>
#include <cmath>
using namespace std;

struct clientes_local_valor{
    string nome;
    double cordenada_x;
    double cordenada_y;
    double valor;
};
struct pizzaria{
    double cordenada_x;
    double cordenada_y;
};

void cadastro_clientes(clientes_local_valor vetor[], int total_clientes){
    for(int i = 0; i < total_clientes; i++){
        cin >> vetor[i].nome >> vetor[i].cordenada_x >> vetor[i].cordenada_y >> vetor[i].valor;
    }
}

void calculo_distancias(clientes_local_valor vetor[], pizzaria pizzaria_local, int total_clientes, double vetor_calculo[]){
    double potencia1 = 0, potencia2 = 0, raiz = 0;
    for(int i = 0; i < total_clientes; i++){
        potencia1 = pow(pizzaria_local.cordenada_x - vetor[i].cordenada_x, 2);      
        potencia2 = pow(pizzaria_local.cordenada_y - vetor[i].cordenada_y, 2);
        raiz = sqrt(potencia1 + potencia2);
        vetor_calculo[i] = raiz;

    }
}

void shellsort(double vetor_calculo[], int total_clientes, clientes_local_valor vetor[]){
    int gaps[5] = {1, 3, 5, 10, 15};
    int pos_gaps = 4;
    while(gaps[pos_gaps] > total_clientes){ // encontra valor de gap que cabe
        pos_gaps--;
    }
    double valor;
    clientes_local_valor valor2;
    int j;
    while (pos_gaps >= 0){  
        int gap = gaps[pos_gaps]; 
        for (int i = gap; i < total_clientes; i++){ 
            valor = vetor_calculo[i]; 
            valor2 = vetor[i];
            j = i;         
            while ((j >= gap) and (valor < vetor_calculo[j - gap])){
                vetor_calculo[j] = vetor_calculo[j - gap];
                vetor[j] = vetor[j - gap];
                j = j - gap;
            }
            vetor_calculo[j] = valor;
            vetor[j] = valor2;
        }
        pos_gaps--;    
    }    
}
int main(){
    
    int serao_antendidos;
    cin >> serao_antendidos;
    pizzaria cadastro_pizzaria;    
    cin >> cadastro_pizzaria.cordenada_x >> cadastro_pizzaria.cordenada_y;
    int total_clientes;
    cin >> total_clientes;
    clientes_local_valor vetor[total_clientes];
    cadastro_clientes(vetor, total_clientes);
    double vetor_calculo[total_clientes];
    calculo_distancias(vetor, cadastro_pizzaria, total_clientes, vetor_calculo);
    shellsort(vetor_calculo, total_clientes, vetor);
    double soma;
    for(int i = 0; i < serao_antendidos; i++){
        soma += vetor[i].valor;
    }
    cout<<soma<<endl;
    return 0;
}