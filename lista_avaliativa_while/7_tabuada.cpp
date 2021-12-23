#include <iostream>
using namespace std;
int main(){
    int number = 1, cont;
    while(number <= 10){        
        cont=1;
        while(cont <= 10){
            cout<<number<<" x "<<cont<<" = "<<number*cont<<endl;
            cont+=1;
        }
        cout<<endl;
        number+=1;
    }
    return 0;
}