#include <iostream>
using namespace std;
void sequencia(int a, int b=0){   
    cout<<b<<" ";
    if(a>b){
        sequencia(a,b+1);
    }       
}
int main(){    
    int num_base;
    cin >> num_base;
    sequencia(num_base);
    return 0;
}