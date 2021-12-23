#include <iostream>
using namespace std;

int main(){
    int quantidade_palavras;
    cin>>quantidade_palavras;   
    string palavras, todas[quantidade_palavras];
    int vetor[quantidade_palavras],tamanho = 0, maior = 0, posicao = 0;
    for(int i=0; i < quantidade_palavras; i++){
        cin>>palavras;
        todas[i] = palavras;
        tamanho = int(palavras.size());
        if(tamanho > maior){
            maior = tamanho;
            posicao = i;
        }
        vetor[i] = tamanho;    
    }
    for(int i=0; i < quantidade_palavras; i++){
        if(i == posicao){
            cout<<todas[posicao]<<endl;
        } else {
            while(vetor[i] < maior){
                cout<<"*";
                vetor[i]++;    
            }
            cout<<todas[i]<<endl;
        }
    }
    return 0;
}