#include <iostream>
#include <fstream>
using namespace std;

double aureo (int a){
    if(a==1){
        return 1;
    } else {
        return 1 + (1/aureo(a-1));
    }
}

int main(){
    int numero;
    cin >> numero;
    cout << aureo(numero) << endl;
    ofstream arquivo("phi.txt");
    for(int i = 1; i <= numero; i++){
        arquivo << aureo(i) << endl;
    }
    arquivo.close();
    return 0; 
}