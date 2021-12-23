#include <iostream>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;   
    string todas[tamanho], letra;
    for(int i=0; i < tamanho; i++){
        cin>>letra;
        todas[i] = letra;  
    }    
    string busca;
    int achou = 0, nao_achou = -1;
    cin >> busca;
    for(int i=0; i < tamanho; i++){
        if(todas[i] == busca and achou == 0){
            cout<<i<<endl;
            achou++;   
        }
    }
    if (achou == 0){
        cout<<nao_achou<<endl;
    }
    return 0;
}