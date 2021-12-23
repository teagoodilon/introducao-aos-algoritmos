#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double number, cont=1, result=sqrt(2), result1 =1, final_value;
    cin>>number;
    while (number >= cont){
        result1 = result*result1;
        result = sqrt(2+result); 
        cont++;
    }
    final_value = 2/(result1/pow(2,number));
    cout<<final_value<<endl;
    return 0;
}