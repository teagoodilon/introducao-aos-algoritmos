#include <iostream>
using namespace std;

int main(){
    
	int linhas, colunas;
	cin >> linhas >> colunas;
	int** matriz = new int*[linhas];
	for (int i = 0; i < linhas; i++){
		matriz[i] = new int[colunas];
	}
	for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			cin >> matriz[i][j];
		}
	}
    int numero_procurado;
    cin >> numero_procurado;
    bool encontrou = false;
    for (int i = 0; i < linhas; i++){
		for (int j = 0; j < colunas; j++){
			if(numero_procurado == matriz[i][j]){
                encontrou = true;
            }
		}
	}
    cout << encontrou << endl;
    for (int i = 0; i < linhas; i++){
        delete[] matriz[i];
    }
    delete[] matriz;
    return 0;
}