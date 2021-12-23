#include <iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    
    if((year%400 == 0) or ((year%4 == 0) and (year%100 != 0))){
        cout<<"bissexto"<<endl; 
    } else {
        cout<<"nao_bissexto"<<endl;    
    }
    return 0;
}