#include <iostream>
using namespace std;

struct viloes_alvo {
    string vilao;
    string alvo;
};

void leitura_viloes_alvo(viloes_alvo cadastro_viloes[], int a) {
    for (int i = 0; i < a; i++) {
        cin >> cadastro_viloes[i].vilao>> cadastro_viloes[i].alvo;
    }
}

struct plano_vilao_prejuizo {
    string plano;
    string vilao1;
    int prejuizo; 
};

void leitura_plano_vilao_prejuizo(plano_vilao_prejuizo cadastro_plano[], int b) {
    for (int i = 0; i < b; i++) {
        cin >> cadastro_plano[i].plano >> cadastro_plano[i].vilao1 >> cadastro_plano[i].prejuizo;
    }
}

void busca_alvo(string busca, viloes_alvo cadastro_viloes[], int quantidade_viloes,
plano_vilao_prejuizo cadastro_planos[], int quantidade_planos){
    int cont=-1;
    for(int i=0; i < quantidade_viloes; i++){        
        if(cadastro_viloes[i].alvo == busca){ //localizou o nome
            for(int j=0; j < quantidade_planos; j++){
                if(cadastro_viloes[i].vilao == cadastro_planos[j].vilao1){
                    cout<<cadastro_planos[j].plano << " " << cadastro_planos[j].prejuizo << endl;
                    cont++;
                }
            }
        }
    }
    if(cont == -1){
        cout<<cont<<endl;
    }
}

int main() {
    
    int quantidade_viloes, quantidade_planos;
    
    cin >> quantidade_viloes;
    viloes_alvo cadastro_viloes[quantidade_viloes];
    leitura_viloes_alvo(cadastro_viloes, quantidade_viloes);
    
    cin >> quantidade_planos;
    plano_vilao_prejuizo cadastro_plano[quantidade_planos];
    leitura_plano_vilao_prejuizo(cadastro_plano, quantidade_planos);
    
    string procura_alvo;
    cin >> procura_alvo;
    busca_alvo(procura_alvo, cadastro_viloes, quantidade_viloes, cadastro_plano, quantidade_planos);
    return 0;
}