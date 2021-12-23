#include <iostream>
using namespace std;

int main(){
    int v1[10];
    for(int cont=0; cont < 10; cont++){
        cin>>v1[cont];
    }
    int v2[5];
    for(int cont=0; cont < 5; cont++){
        cin>>v2[cont];
    }
    int dividiu=0;
    for(int i=0; i < 10; i++){
        
        for(int j=0; j < 5; j++){
            if (v1[i]%v2[j]==0){
                dividiu++;         
            }    
        }
        cout<<v1[i]<<" "<<dividiu<<endl;
        dividiu=0;
    }
    return 0;
}