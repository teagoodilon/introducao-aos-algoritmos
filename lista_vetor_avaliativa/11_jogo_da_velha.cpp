#include <iostream>
using namespace std;

int main(){
    int linhas = 3, colunas = 3;
    int matriz[linhas][colunas];
    for(int i=0; i < linhas; i++){
        for(int j=0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }
    int ganhador=0,cont1=0,cont2=0,cont3=0,cont4=0;
    for(int i=0; i < linhas; i++){
        for(int j=0; j < colunas; j++){
            if (i==j and matriz[i][j] == 1){ //principal 1
                cont1++;
                if(cont1==3){
                    ganhador++;
                }
            }
            if (i==j and matriz[i][j] == 2){ //principal 2
                cont2++;
                if(cont2==3){
                    ganhador+=2;
                }
            }
            if(i+j==2 and matriz[i][j] == 1){ //secundaria 1
                cont3++;
                if(cont3==3){
                    ganhador++;
                }
            }
            if(i+j==2 and matriz[i][j] == 2){ //secundaria 2
                cont4++;
                if(cont4==3){
                    ganhador+=2;
                }
            }
        }
    }
    if(matriz[0][0]==1 and matriz[0][1]==1 and matriz[0][2]==1){    //linhas1
        ganhador++;
    }
    if(matriz[1][0]==1 and matriz[1][1]==1 and matriz[1][2]==1){    //linhas1
        ganhador++;
    }
    if(matriz[2][0]==1 and matriz[2][1]==1 and matriz[2][2]==1){    //linhas1
        ganhador++;
    }
    if(matriz[0][0]==2 and matriz[0][1]==2 and matriz[0][2]==2){    //linhas2
        ganhador+=2;
    }
    if(matriz[1][0]==2 and matriz[1][1]==2 and matriz[1][2]==2){    //linhas2
        ganhador+=2;
    }
    if(matriz[2][0]==2 and matriz[2][1]==2 and matriz[2][2]==2){    //linhas2
        ganhador+=2;
    }
    /////////////////////////////////////////////////////////////
    if(matriz[0][0]==1 and matriz[1][0]==1 and matriz[2][0]==1){    //colunas1
        ganhador++;
    }
    if(matriz[0][1]==1 and matriz[1][1]==1 and matriz[2][1]==1){    //colunas1
        ganhador++;
    }
    if(matriz[0][2]==1 and matriz[1][2]==1 and matriz[2][2]==1){    //colunas1
        ganhador++;
    }
    if(matriz[0][0]==2 and matriz[1][0]==2 and matriz[2][0]==2){    //colunas2
        ganhador+=2;
    }
    if(matriz[0][1]==2 and matriz[1][1]==2 and matriz[2][1]==2){    //colunas2
        ganhador+=2;
    }
    if(matriz[0][2]==2 and matriz[1][2]==2 and matriz[2][1]==2){    //colunas2
        ganhador+=2;
    }
    if(ganhador>2){
        ganhador=0;
    }
    cout<<ganhador<<endl;
    return 0;
}