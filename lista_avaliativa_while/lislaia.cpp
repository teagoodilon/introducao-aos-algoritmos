#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double raiz=sqrt(2), pi, dentro=1;
    double termos, i=0;
    cin>>termos;
    do
    {
        raiz=sqrt(2+(dentro));
        dentro=raiz;
        pi = raiz*M_PI/2*M_PI;
        if(i == termos){
            cout<<pi<<endl;
        }
        i++;
    }while(i <= termos);
    return 0;
}