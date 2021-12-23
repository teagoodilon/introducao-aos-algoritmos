#include <iostream>
using namespace std;

struct partido_politico {
    string partido;
    string politico;
};

void leitura_partido_politico(partido_politico cadastro_partido[], int a) {
    for (int i = 0; i < a; i++) {
        cin >> cadastro_partido[i].partido >> cadastro_partido[i].politico;
    }
}

struct operacao_politico_desvio {
    string operacao;
    string politico1;
    int desvio; 
};

void leitura_operacao_politico_desvio(operacao_politico_desvio cadastro_operacao[], int b) {
    for (int i = 0; i < b; i++) {
        cin >> cadastro_operacao[i].operacao >> cadastro_operacao[i].politico1 >> cadastro_operacao[i].desvio;
    }
}
struct partido_operacao_busca{
    string partido2;
    string operacao2;
};

void valor_desviado(partido_politico cadastro_partido[], int quantidade_politico,
operacao_politico_desvio cadastro_operacao[], int quantidade_operacao,
partido_operacao_busca cadastro_busca){
    int soma_desvio = 0;
    for(int i = 0; i < quantidade_politico; i++){
        if(cadastro_busca.partido2 == cadastro_partido[i].partido){
            for(int j = 0; j < quantidade_operacao; j++){
                if(cadastro_busca.operacao2 == cadastro_operacao[j].operacao and cadastro_partido[i].politico == cadastro_operacao[j].politico1){
                    soma_desvio += cadastro_operacao[j].desvio;
                }
            }
        }
    }
    cout << soma_desvio << endl;
}

int main(){
    
    int quantidade_politico;
    cin >> quantidade_politico;
    partido_politico cadastro_partido[quantidade_politico];
    leitura_partido_politico(cadastro_partido, quantidade_politico);

    int quantidade_operacao;
    cin >> quantidade_operacao;
    operacao_politico_desvio cadastro_operacao[quantidade_operacao];
    leitura_operacao_politico_desvio(cadastro_operacao, quantidade_operacao);

    partido_operacao_busca cadastro_busca;
    cin >> cadastro_busca.partido2 >> cadastro_busca.operacao2;
    
    valor_desviado(cadastro_partido, quantidade_politico, cadastro_operacao, quantidade_operacao, cadastro_busca);
    return 0;
}