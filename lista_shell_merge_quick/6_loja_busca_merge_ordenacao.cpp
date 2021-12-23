#include <iostream>
using namespace std;
struct produto_descricao_preco_avaliacao{
    string produto;
    string descricao;
    float preco;
    int avaliacao;
};

void leitura_produto(produto_descricao_preco_avaliacao cadastro_produto[], int quantidade){
    for(int i = 0; i < quantidade; i++){
        cin >> cadastro_produto[i].produto >> cadastro_produto[i].descricao
        >> cadastro_produto[i].preco >> cadastro_produto[i].avaliacao;
    }
}
void intercalador(produto_descricao_preco_avaliacao vetor[], int inicio, int meio, int fim){
    int i = inicio, j = meio + 1;
    int tamanho = fim - inicio + 1;
    produto_descricao_preco_avaliacao aux[tamanho];
    for(int h = 0; h < tamanho; h++){
        if ((i <= meio) and (j <= fim)){
            if ((vetor[i].produto <= vetor[j].produto)) {
                cout << vetor[i].avaliacao << " " << vetor[j].avaliacao<<endl;
                if((vetor[i].produto == vetor[j].produto) and (vetor[i].avaliacao < vetor[j].avaliacao)){
                    swap(vetor[i], vetor[j]);
                }
                aux[h] = vetor[i];
                i++;
            } else {
                aux[h] = vetor[j];
                j++;
            }
        } else if (i > meio) {
            aux[h] = vetor[j];
            j++;
        } else {
            aux[h] = vetor[i];
            i++;
        }
        cout<<meio<<endl;
    }
    for(int k = 0; k < tamanho; k++){
        vetor[inicio + k] = aux[k];
    } 
}

void mergesort(produto_descricao_preco_avaliacao vetor[], int inicio, int fim){
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim)/2;
        mergesort(vetor, inicio, meio);
        mergesort(vetor, meio + 1, fim);
        intercalador(vetor, inicio, meio, fim);
    }    
}

void busca_binaria(produto_descricao_preco_avaliacao vetor[], string produto_procurado, int inicio, int fim){
    int meio , posicao = -1;
    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if (vetor[meio].produto == produto_procurado){ //achou
            inicio = fim + 1;
            posicao = meio;
           /* cout << vetor[meio].produto << " " << vetor[meio].descricao
            << " " <<vetor[meio].preco << " " << vetor[meio].avaliacao << endl;
            while (vetor[meio+1].produto == vetor[meio].produto){
                meio++;
                cout << vetor[meio].produto << " " << vetor[meio].descricao
                << " " <<vetor[meio].preco << " " << vetor[meio].avaliacao << endl;      
           }*/
            
        } else if (vetor[meio].produto < produto_procurado){
            inicio = meio + 1;
        } else if (vetor[meio].produto > produto_procurado){
            fim = meio - 1;
        }
    }
    if(posicao == -1){
        cout << posicao << endl;
    }
}

int main(){
    int quantidade;
    cin >> quantidade;
    produto_descricao_preco_avaliacao cadastro_produto[quantidade];
    leitura_produto(cadastro_produto, quantidade);
    string busca_produto;
    cin >> busca_produto;
    mergesort(cadastro_produto, 0, quantidade - 1);
    busca_binaria(cadastro_produto, busca_produto, 0, quantidade - 1);
    for(int l = 0; l < quantidade; l++){
        cout << cadastro_produto[l].produto << " " << cadastro_produto[l].descricao
        << " " <<cadastro_produto[l].preco << " " << cadastro_produto[l].avaliacao << endl;      
    }
    return 0;
}