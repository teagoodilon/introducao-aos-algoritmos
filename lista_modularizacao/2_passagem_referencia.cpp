#include <iostream>
using namespace std;

void soma(int a, int b, int& resultado){
    resultado = a+b;
}
int main(){    
    int n1,n2,resultado;
    cin>>n1>>n2;
    soma(n1,n2,resultado);
    cout<<resultado<<endl;
}