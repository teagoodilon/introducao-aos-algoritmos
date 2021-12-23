#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream arquivo_matriz("matriz.txt");
    int m;
    int verifica = 0;
    if(arquivo_matriz){
        arquivo_matriz >> m;
        int matriz[m][m];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                arquivo_matriz >> matriz[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                if(matriz[i][j] == matriz[j][i]){
                    verifica++;
                }
            }
        }
        if(verifica == (m*m)){
            cout << "simetrica" << endl;
        } else {
            cout << "nao simetrica" << endl;
        }
    }
    arquivo_matriz.close();
    return 0;
}