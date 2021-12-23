#include <iostream>
using namespace std;

int main(){
    int numero_a_comparar;
    cin >> numero_a_comparar;
    
    if((numero_a_comparar%2)==0){
        cout<<"par"<<endl;
    } else {
        cout<<"impar"<<endl;
    }
    return 0;
}