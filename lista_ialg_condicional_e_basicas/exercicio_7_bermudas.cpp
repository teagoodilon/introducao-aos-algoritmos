#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float side1,side2,side3,semiperimeter,area;
    cin>>side1>>side2>>side3;
    if(((side1 + side2) > side3) and ((side1 + side3) > side2) and ((side2 + side3) > side1)){
        semiperimeter = (side1 + side2 + side3)/2;
        area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
        cout<<area<<endl;
    } else {
        cout<<"0"<<endl;
    }





}