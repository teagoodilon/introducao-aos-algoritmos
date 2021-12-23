#include <iostream>
using namespace std;

int main(){
    
    int numeros=10;
    float vetor[numeros];
    for(int cont=0; cont < numeros; cont++){
        cin>>vetor[cont];
    }
    float negativos=0, positivos=0;
    for(int cont=0; cont < numeros; cont++){
        if(vetor[cont] < 0){
            negativos++;
        } else {
            positivos+=vetor[cont];
        }
    }
    cout<<negativos<<endl<<positivos<<endl;
    return 0;
}