#include <iostream>
using namespace std;

int main(){
    double celsius,fahrenheit,kelvin;    
    cin>>celsius;
    
    fahrenheit = 1.8*celsius + 32;
    kelvin = celsius + 273;
    
    cout<<fahrenheit<<endl<<kelvin<<endl;
    return 0;
}