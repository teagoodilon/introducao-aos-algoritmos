#include <iostream>
using namespace std;
int funcao_f(int a);

int funcao_h(int a){
    if(a==0){
        return 0;
    } else {
        return funcao_h(a-1) + funcao_f(a-1);
    }
}
int funcao_f(int a){
    if(a==0){
        return 1;
    } else if(a % 2 == 0 and a > 0){
        return 2*funcao_h(a) + funcao_f(a-1);
    } else {
        return 2*funcao_h(a) - funcao_f(a-1); 
    }
}

int main(){    
    int numero;
    cin>>numero;     
    cout<<funcao_f(numero)<<endl;
    return 0;
}