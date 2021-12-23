#include <iostream>
#include <iomanip>
using namespace std;

int** AlocarMatriz(int l, int c) {
    int **matriz;
    matriz =  new int*[5];
    for (int i = 0; i < 5; i++){
        matriz[i] = new int[5]; 
    }
    return matriz;
}

void DesalocarMatriz(int** matriz, int l){
    for (int i = 0; i < 5; i++){
        delete[] matriz[i]; 
    }
    delete[] matriz;
}

int** Somar(int** matriz1, int**matriz2, int l, int c, int** nova_matriz) {
    for (int lin = 0; lin < l; ++lin) {
        for (int col = 0; col < c; ++col) {
            nova_matriz[lin][col] = matriz1[lin][col] + matriz2[lin][col];
        }
    }
    return nova_matriz;
}

int** LerMatriz(int** matriz, int l, int c) {
    for (int lin = 0; lin < l; ++lin) {
        for (int col = 0; col < c; ++col) {
            cin >> matriz[lin][col];
        }
    }
    return matriz;
}

int main() {
    int nLins, nCols;
    cin >> nLins >> nCols;

    int** m1 = AlocarMatriz(nLins, nCols);
    LerMatriz(m1, nLins, nCols);

    int** m2 = AlocarMatriz(nLins, nCols);
    LerMatriz(m2, nLins, nCols);

    int** m3 = AlocarMatriz(nLins, nCols);
    Somar(m1, m2, nLins, nCols, m3);

    for (int lin = 0; lin < nLins; ++lin) {
        for (int col = 0; col < nCols; ++col) {
            cout << setw(5) << m3[lin][col];
        }
        cout << "\n";
    }

    DesalocarMatriz(m1, nLins);
    DesalocarMatriz(m2, nLins);
    DesalocarMatriz(m3, nLins);
    return 0;
}