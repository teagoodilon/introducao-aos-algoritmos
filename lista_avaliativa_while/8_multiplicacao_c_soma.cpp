#include <iostream>
using namespace std;
int main(){
    int n1, n2, n3, contador = 1;
    cin>>n1>>n2;
    n3 = n1;
    while(contador <= n2){
        cout<<n1<<endl;
        n1 = n1 + n3;
        contador++;
    }
    return 0;
}