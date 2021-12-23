#include <iostream>
using namespace std;
int main(){
    
    float number1, number2, number3;
    cin>>number1>>number2>>number3;
    if(number1 > number2 and number1 > number3){
        cout<<number1<<endl;    
    }
    if(number2 > number1 and number2 > number3){
        cout<<number2<<endl;        
    }
    if(number3 > number1 and number3 > number2){
        cout<<number3<<endl;   
    }
    return 0;
}