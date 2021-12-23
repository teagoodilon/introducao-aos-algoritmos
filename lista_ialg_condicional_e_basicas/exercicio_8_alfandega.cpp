#include <iostream>
using namespace std;
int main(){
    
    float number_product, country, weight;
    float pricegram, weightgram, impost;
    cin>>number_product>>weight>>country;
    weightgram = weight*1000;
    cout<<weightgram<<endl;
    
    if(number_product >= 1 and number_product <=4){
        pricegram = 10;
        float one_four;
        one_four = weightgram*pricegram;
        cout<<one_four<<endl;  
        if(country == 1){
            cout<<"0.0"<<endl<<one_four<<endl;
        }
        if(country == 2){
            impost = one_four*0.15;
            cout<<impost<<endl<<one_four + impost<<endl;
        }
        if(country == 3){
            impost = one_four*0.25;
            cout<<impost<<endl<<one_four + impost<<endl;
        }
    } 
    if(number_product >= 5 and number_product <=7){
        pricegram = 25;
        float five_seven;
        five_seven = weightgram*pricegram;
        cout<<five_seven<<endl;
        if(country == 1){
            cout<<"0.0"<<endl<<five_seven<<endl;
        }
        if(country == 2){
            impost = five_seven*0.15;
            cout<<impost<<endl<<five_seven + impost<<endl;
        }
        if(country == 3){
            impost = five_seven*0.25;
            cout<<impost<<endl<<five_seven + impost<<endl;
        }
    }
    if(number_product >= 8 and number_product <=10){
        pricegram = 35;
        float eight_ten;
        eight_ten = weightgram*pricegram;
        cout<<eight_ten<<endl;
        if(country == 1){
            cout<<"0.0"<<endl<<eight_ten<<endl;
        }
        if(country == 2){
            impost = eight_ten*0.15;
            cout<<impost<<endl<<eight_ten + impost<<endl;
        }
        if(country == 3){
            impost = eight_ten*0.25;
            cout<<impost<<endl<<eight_ten + impost<<endl;
        }
    }   
    return 0;
}