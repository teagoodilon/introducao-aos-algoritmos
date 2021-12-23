#include <iostream>
using namespace std;
int main(){    
    int peso,tanque,carro,soldado,rifle;
    tanque = 60000;
    carro = 900;
    soldado = 85;
    rifle = 4;
    cin>>peso;
    cout<<peso/tanque<<endl;
    cout<<(peso%tanque)/carro<<endl;
    cout<<((peso%tanque)%carro)/soldado<<endl;
    cout<<(((peso%tanque)%carro)%soldado)/rifle<<endl;
    
    return 0;
}