#include <iostream>
using namespace std;
int main(){
    int time_lived_hours, time_lived_minutes, travels;
    
    int cont=0, check_hours, ok_backs, sum=1;
    
    cin>>time_lived_hours>>time_lived_minutes>>travels;
    while(travels>cont){
        int time_lived_hours1, time_lived_minutes1, travel1;     
        cin>>time_lived_hours1>>time_lived_minutes1>>travel1;
        if(time_lived_hours1 >= time_lived_hours and time_lived_minutes1 >= time_lived_minutes){
            check_hours = time_lived_hours1 - travel1;
            if(check_hours < time_lived_hours and time_lived_minutes1 >= time_lived_minutes){
                ok_backs = 1;
                sum +=ok_backs;
            }
            if(check_hours == time_lived_hours and time_lived_minutes1 <= time_lived_minutes){
                ok_backs = 1;
                sum +=ok_backs;
            }
        }
        if(time_lived_hours1 >= time_lived_hours and time_lived_minutes1 < time_lived_minutes){
            check_hours = time_lived_hours1 - travel1;
            if(check_hours <= time_lived_hours){
                ok_backs = 1;
                sum +=ok_backs;
            }
        }        
        cont++;
        if(travels==cont and sum==1 and time_lived_hours1 < time_lived_hours and time_lived_minutes1 <= time_lived_minutes){
        sum=0;    
        }
        if(travels==cont and sum==1 and time_lived_hours1 < time_lived_hours and time_lived_minutes1 >= time_lived_minutes){
        sum=0;    
        }
    }
    cout<<sum<<endl;
    return 0;
}