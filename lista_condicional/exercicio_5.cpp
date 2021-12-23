#include <iostream>
using namespace std;

int main(){
   
    int day, month, year, day2, month2, year2;
    cin>>day>>month>>year>>day2>>month2>>year2;  
    
    
    if(year > year2){
        cout<<day<<" "<<month<<" "<<year;        
    }    
    if(year2 > year){
        cout<<day2<<" "<<month2<<" "<<year2;
    }
    if(year == year2 and month > month2){
        cout<<day<<" "<<month<<" "<<year;
    }
    if(year == year2 and month2 > month){
        cout<<day2<<" "<<month2<<" "<<year2;
    }
    if(year == year2 and month == month2 and day > day2){
        cout<<day<<" "<<month<<" "<<year;
    }
    if(year == year2 and month == month2 and day2 > day){
        cout<<day2<<" "<<month2<<" "<<year2;
    }
    return 0;
}

    