#include <iostream>
using namespace std;

int fatorial(int a){
    int fator = 1, parcial = 1;
    while (fator <= a){
        parcial = parcial * fator;
        fator++;
    }    
    return parcial;
}

float* obterVetor(int i){
    float* vetor = new float[i];
    for(int j = 0; j < i; j++){
        vetor[j] = (j*j + 1.75) / (2 * fatorial(j) + j);
    }
    return vetor;
}

int main(){
    int n, m;
    cin >> n;
    float* vetor = obterVetor(n);
    cin >> m;
    while(m < n){
        cout << vetor[m] << endl;
        m++;
    }
    delete[] vetor;
    return 0;
}