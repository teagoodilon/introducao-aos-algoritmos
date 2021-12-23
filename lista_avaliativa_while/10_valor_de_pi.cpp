#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double number, cont=1, result=sqrt(2), result1 =1, final_value=0;
    cin>>number;
    while (number >= cont){
        result = result*result1;        
        cont++;
        result1 = sqrt(2+result); 
        
    }
    if(number==0){
        result=0;
    }
    final_value = 2/(result/pow(2,number));
    cout<<final_value<<endl;
    return 0;
}
