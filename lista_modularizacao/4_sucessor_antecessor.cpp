#include <iostream>
using namespace std;
int retorna_valor(int& sucessor){
     int antecessor = sucessor;
     sucessor++;
     antecessor--;
     return antecessor;
}
int main(){
    int numero_atual;
    cin >> numero_atual;
    int sucessor = numero_atual, antecessor;
    antecessor = retorna_valor(sucessor);
    cout <<antecessor<<" "<<numero_atual<<" "<<sucessor;
    return 0;
}