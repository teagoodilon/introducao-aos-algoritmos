#include <iostream>
using namespace std;
int main(){
    int number, validation, dividers=1, sum=0;    
    cin>>number;
    while(number > 0){
        sum=0;
        dividers=1;
        while(dividers < number){
            validation = number%dividers;
            if(validation==0){
                sum+=dividers;
                cout<<sum<<"+";
            }
            dividers++;
        }
        cout<<sum<<endl;
        cin>>number;
    }
    if(number==0){
        cout<<number<<endl;
    }
    return 0;
}