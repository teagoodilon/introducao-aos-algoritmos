#include <iostream>
using namespace std;

int main(){
    string palavra;
    cin>>palavra;
    int achou = 0;
    int tamanho = int(palavra.size());
    for(int i=0; i < tamanho; i++){
        if(palavra[i]=='a' or palavra[i]=='e' or palavra[i]=='i' or palavra[i]=='o' or palavra[i]=='u'){
            achou++;
        }
    }
    cout<<achou<<endl;
    return 0;
}