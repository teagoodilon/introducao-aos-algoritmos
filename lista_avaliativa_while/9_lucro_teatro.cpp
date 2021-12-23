#include <iostream>
using namespace std;
int main(){
    double despesas, incremento, venda=120.0, lucro = 0.0, ingresso1 = 5.0, ingresso_limite = 0.0;
    cin>>despesas>>incremento;
    while(ingresso1 >= ingresso_limite and ingresso1 >= 1){
        lucro = (ingresso1*venda) - despesas;
        cout<<ingresso1<<" "<<lucro<<endl;
        ingresso1 = ingresso1 - 0.5;
        venda += incremento;
    }
    
    
    return 0;
}