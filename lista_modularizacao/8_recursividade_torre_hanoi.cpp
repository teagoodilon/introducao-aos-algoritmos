#include <iostream>
using namespace std;
void movimentos(int& a, int cont=0, int valor=1){
    if(cont<a){       
        valor=2*valor;
        movimentos(a, cont+1, valor);
    } else {   
        a=valor-1;
    }
}
int main(){    
    int num_discos;
    cin >> num_discos;
    movimentos(num_discos);
    cout<<num_discos<<endl;
    return 0;
}