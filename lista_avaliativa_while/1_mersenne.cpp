#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double number = 0.0, mersenne = 0.0, key;
    cin>>key;
    while(mersenne <= key){
        cout<<mersenne<<endl;
        number +=1;
        mersenne = (pow(2.0, number) - 1.0);
    } 
    return 0;
}