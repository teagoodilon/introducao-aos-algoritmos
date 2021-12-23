#include <iostream>
using namespace std;

struct cesta_preparada {
    string cesta;
    int preco_cesta;
};

void leitura_cesta_prepada(cesta_preparada cadastro_cesta[], int a) {
    for (int i = 0; i < a; i++) {
        cin >> cadastro_cesta[i].cesta >> cadastro_cesta[i].preco_cesta;
    }
}

struct familia_cesta {
    string familia;
    string cesta1;
};

void leitura_familia_cesta(familia_cesta cadastro_familia[], int b) {
    for (int i = 0; i < b; i++) {
        cin >> cadastro_familia[i].familia >> cadastro_familia[i].cesta1;
    }
}

void lucro_catatau(cesta_preparada cadastro_cesta[], int quantidade_cesta,
familia_cesta cadastro_familia[], int quantidade_cesta_vendida){
    int soma = 0;
    for(int i = 0; i < quantidade_cesta_vendida; i++){
        for(int j = 0; j < quantidade_cesta; j++){
            if(cadastro_familia[i].cesta1 == cadastro_cesta[j].cesta){
                soma += cadastro_cesta[j].preco_cesta;
            }
        }
    }
    cout << soma << endl; 
}
int main(){
    
    int quantidade_cesta;
    cin >> quantidade_cesta;
    cesta_preparada cadastro_cesta[quantidade_cesta];
    leitura_cesta_prepada(cadastro_cesta, quantidade_cesta);
    
    int quantidade_cesta_vendida;
    cin >> quantidade_cesta_vendida;
    familia_cesta cadastro_familia[quantidade_cesta_vendida];
    leitura_familia_cesta(cadastro_familia, quantidade_cesta_vendida);
    
    lucro_catatau(cadastro_cesta, quantidade_cesta, cadastro_familia, quantidade_cesta_vendida);
    return 0;
}