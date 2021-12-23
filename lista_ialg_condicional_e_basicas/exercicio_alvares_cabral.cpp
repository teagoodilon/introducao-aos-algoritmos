#include <iostream>
using namespace std;

int main(){
    int horse,cow, chicken,limit;
    int wei_horse, wei_cow, wei_chicken;
    int ok_horse, ok_cow, ok_chicken;
    int limit1, limit2, limit3;
    cin >> limit >> horse >> cow >> chicken;

    wei_chicken = chicken*2;
    wei_cow = cow*150;
    wei_horse = horse*250;
    
    ok_chicken = limit/2;
    if(ok_chicken >= chicken){
        limit1 = limit - wei_chicken;
        ok_cow = limit1/150;
        if(ok_cow >= cow){
            limit2 = limit1 - wei_cow;
            ok_horse = limit2/250;
            if(ok_horse >= horse){
                limit3 = limit2 - wei_horse;
                cout<<horse<<endl<<cow<<endl<<chicken<<endl<<limit3<<endl;
            }
            if(ok_horse < horse){
                horse = ok_horse; 
                limit3 = limit2 - horse*250;
                cout<<horse<<endl<<cow<<endl<<chicken<<endl<<limit3<<endl;
            }
        }
        if(ok_cow < cow){
            cow = ok_cow;
            limit2 = limit1 - cow*150;
            cout<<"0"<<endl<<ok_cow<<endl<<chicken<<endl<<limit2<<endl;
        }
    }
        if(ok_chicken < chicken){
            chicken = ok_chicken;
            limit1 = limit - chicken*2; 
            cout<<"0"<<endl<<"0"<<endl<<ok_chicken<<endl<<limit1<<endl;
        }      
   return 0;
}