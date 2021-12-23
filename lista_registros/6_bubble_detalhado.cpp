#include <iostream>
using namespace std;
bool troca_ou_nao(int vetor[], int a, int posicao_1, int posicao_2){
    if(vetor[posicao_1] > vetor[posicao_2]){
        return true;
    } else {
        return false;
    }

}

void escrita_vetor(int vetor[], int b, bool troca, bool mantem, int posicao_1, int posicao_2){
    int i=0;
    while(i < b){
		if (i==posicao_1 or i==posicao_2){
			if(mantem == false){
				if (troca){
					cout << vetor[i] << " " << "t" << "\t";
				} else {
					cout << vetor[i] << " " << "*" << "\t";
				}
			} else {
				cout << vetor[i] << "\t";
			}
		} else {
			cout << vetor[i] << "\t";
		}
    i++;
    }
    cout<<endl;
}

void bubble_sort(int vetor[], int c){
    int aux = 0, posicao_1, posicao_2;
    bool troca=false, mantem=false;
    for(int i = 0; i < c - 1; i++){
        for(int j = 0; j < c - 1 - i; j++){
            posicao_1 = j;
            posicao_2 = j + 1;
            troca=troca_ou_nao(vetor, c, posicao_1, posicao_2);
            if(troca){
                escrita_vetor(vetor, c, troca, mantem, posicao_1, posicao_2);
                aux = vetor[j];
                vetor[j] = vetor [j+1];
                vetor[j+1] = aux;

            } else {
                escrita_vetor(vetor, c, troca, mantem, posicao_1, posicao_2);
            }
        }
    }
}
int main(){
    int quantidade;
    cin >> quantidade;
    int vetor[quantidade];
    for(int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }
    bubble_sort(vetor, quantidade);
    return 0;
}