#include <iostream>
using namespace std;
int calculo(int a, int b){
    if (a > b){
        return a;
    } 
    else {
        return b;
    }
}
int main(){    
    int a, b;
    cin >> a;
    cout << a << " ";
    int cont = 0;
    while (cont < 4){
        cin >> b;
        cout << b << " ";
        a = calculo(a,b);
        cont++;
    }
    cout << endl << a <<endl;
    return 0;
}