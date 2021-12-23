#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number, triangle=0, cont=1;
    cin>>number;
    while(cont <= number){
        triangle = (cont*(cont+1))/2;
        cont++;
    }    
    cout<<triangle<<endl;
    return 0;
}