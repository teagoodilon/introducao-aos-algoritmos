#include <iostream>
using namespace std;
int main(){
   float salario_atual;
   
   cin>>salario_atual; 
   
    if(salario_atual <= 300){
       cout<<salario_atual*0.15<<endl<<(salario_atual*0.15) + salario_atual<<endl;
   }
    if(salario_atual > 300 and salario_atual <= 600){
       cout<<salario_atual*0.10<<endl<<(salario_atual*0.10) + salario_atual<<endl;
   }
    if(salario_atual > 600 and salario_atual <= 900){
       cout<<salario_atual*0.05<<endl<<(salario_atual*0.05) + salario_atual<<endl;
   }
    if(salario_atual > 900){
       cout<<"0"<<endl<<salario_atual<<endl;
   }
   
   return 0;
}