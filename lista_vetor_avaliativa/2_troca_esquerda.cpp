#include <iostream>
using namespace std;

int main(){
    int numeros;
    cin >> numeros;
    int vetor[numeros];
    
    for(int cont=0; cont < numeros; cont++){
        cin>>vetor[cont];
    }
    int quebra;
    cin >> quebra;
    int vetor2[numeros];
    int ajuda=0;
    for (int cont2 = 0; cont2 < numeros; cont2++){
		if (cont2 > quebra){
			vetor2[ajuda] = vetor[cont2];
			cout<<vetor2[ajuda]<<" ";
            ajuda++;
		}
	}    
    for (int cont2 = 0; cont2 < numeros; cont2++){
		if (cont2 <= quebra){
			vetor2[ajuda] = vetor[cont2];
			cout<<vetor2[ajuda]<<" ";
            ajuda++;
		}
	}
    return 0;
}