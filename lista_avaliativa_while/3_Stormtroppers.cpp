#include <iostream>
using namespace std;
int main(){
    int number, dividers=1, validation, sum=0;
    cin>>number;
    while(dividers < number){
        validation = number%dividers;
        while(validation==0){
            cout<<dividers<<"+";
            sum+=dividers;
            validation=1;
        }
        dividers++;
        validation=0;
    }   
    cout<<number<<"="<<number+sum<<endl;
    return 0;
}
