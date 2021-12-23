#include <iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cin>> side1 >> side2 >> side3;
    if(side1 < (side2+side3) and side2 < (side1+side3) and side3 < (side1+side2)){
        if((side1 == side2) and (side1 == side3)){
            cout<<"equilatero"<<endl;    
            return 0;        
        } 
        if((side1 == side2 and side1 != side3) or (side2 == side3 and side2 != side1) or (side1 == side3 and side1 != side2)){
            cout<<"isosceles"<<endl;
        } else {
            cout<<"escaleno"<<endl;
        } 
    } else {
     cout<<"-1"<<endl;
    }
    return 0;
}