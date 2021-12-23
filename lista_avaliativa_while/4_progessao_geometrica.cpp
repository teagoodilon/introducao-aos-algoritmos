#include <iostream>
using namespace std;
int main(){
    float number, amount, cont=1, pg=1;
    cin>>number>>amount;
    cout<<"1"<<endl;
    while(cont < amount){
        pg=pg*number;
        cont++;
        cout<<pg<<endl;
    }   
    return 0;
}
