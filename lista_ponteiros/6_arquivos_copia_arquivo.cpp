#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string nome1, nome2;
    cin >> nome1 >> nome2;
    ifstream arquivo (nome1.c_str());
    ofstream arquivo2 (nome2.c_str());
    string palavras;
    if(arquivo){
        while(arquivo >> palavras){
            arquivo2 << palavras;
        }
    }
    arquivo.close();
    arquivo2.close();
    return 0;
} 