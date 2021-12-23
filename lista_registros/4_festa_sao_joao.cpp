#include <iostream>
using namespace std;

struct alimentos_numero {
    string alimentos;
    int numero_alimentos;
};

void leitura_alimentos_numero(alimentos_numero cadastro_alimentos[], int a) {
    for (int i = 0; i < a; i++) {
        cin >> cadastro_alimentos[i].alimentos >> cadastro_alimentos[i].numero_alimentos;
    }
}

struct professor_alimento {
    string professor;
    string alimento1;
    int alimento1_quantidade;
    string alimento2;
    int alimento2_quantidade;
};

void leitura_professor_alimento(professor_alimento cadastro_professor[], int b) {
    for (int i = 0; i < b; i++) {
        cin >> cadastro_professor[i].professor >> cadastro_professor[i].alimento1 >> cadastro_professor[i].alimento1_quantidade
        >> cadastro_professor[i].alimento2 >> cadastro_professor[i].alimento2_quantidade;
    }
}
void sobra_falta(alimentos_numero cadastro_alimentos[], int quantidade_alimentos,
professor_alimento cadastro_professor[], int quantidade_professores){
    for (int i = 0; i < quantidade_alimentos; i++){
        for(int j = 0; j < quantidade_professores; j++){
            if(cadastro_professor[j].alimento1 == cadastro_alimentos[i].alimentos){
                cadastro_alimentos[i].numero_alimentos -= cadastro_professor[j].alimento1_quantidade; 
            }
            if(cadastro_professor[j].alimento2 == cadastro_alimentos[i].alimentos){
                cadastro_alimentos[i].numero_alimentos -= cadastro_professor[j].alimento2_quantidade;
            }    
        }
    }
    for(int z = 0; z < quantidade_alimentos; z++){
    cout << cadastro_alimentos[z].alimentos << " " << cadastro_alimentos[z].numero_alimentos << endl;
    }
}

int main(){
    
    int quantidade_alimentos;
    cin >> quantidade_alimentos;
    alimentos_numero cadastro_alimentos[quantidade_alimentos];
    leitura_alimentos_numero(cadastro_alimentos, quantidade_alimentos);
    
    int quantidade_professores;
    cin >> quantidade_professores;
    professor_alimento cadastro_professor[quantidade_professores];
    leitura_professor_alimento(cadastro_professor, quantidade_professores);
       
    sobra_falta(cadastro_alimentos, quantidade_alimentos, cadastro_professor, quantidade_professores);
    return 0;
}