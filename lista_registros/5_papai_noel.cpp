#include <iostream>
using namespace std;

struct nome_presente{
    string nome;
    string presente;
};

void leitura_nome_presente(nome_presente cadastro_nome[], int a) {
    for (int i = 0; i < a; i++) {
        cin >> cadastro_nome[i].nome >> cadastro_nome[i].presente;
    }
}

struct presente_disponivel {
    string presente1;
    int disponivel;
    int pedida;
};

void leitura_presente_disponivel(presente_disponivel cadastro_presente[], int b) {
    for (int i = 0; i < b; i++) {
        cin >> cadastro_presente[i].presente1 >> cadastro_presente[i].disponivel;
    }
}

void contador_nao_suficiente(nome_presente cadastro_nome[], int quantidade_nome,
presente_disponivel cadastro_presente[], int quantidade_presente){
    for(int h = 0; h < quantidade_presente; h++){
        cadastro_presente[h].pedida = cadastro_presente[h].disponivel;
    }
    for(int i = 0; i < quantidade_nome; i++){
        for(int j = 0; j < quantidade_presente; j++){
            if(cadastro_presente[j].presente1 == cadastro_nome[i].presente){
                cadastro_presente[j].pedida--;
            }
        }
    }
    for (int z = 0; z < quantidade_presente; z++){
        if(cadastro_presente[z].pedida < 0){
            cout << cadastro_presente[z].presente1 << " ";
        }
    }
    cout<<endl;
}

int main(){
    
    int quantidade_nome;
    cin >> quantidade_nome;
    nome_presente cadastro_nome[quantidade_nome];
    leitura_nome_presente(cadastro_nome, quantidade_nome);

    int quantidade_presente;
    cin >> quantidade_presente;
    presente_disponivel cadastro_presente[quantidade_presente];
    leitura_presente_disponivel(cadastro_presente, quantidade_presente);

    contador_nao_suficiente(cadastro_nome, quantidade_nome, cadastro_presente, quantidade_presente);
    return 0;
}