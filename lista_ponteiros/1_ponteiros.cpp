#include <iostream>
#include <fstream>
using namespace std;

struct hidrocarboneto{
    int c, h;
};

int main(){
    hidrocarboneto* molecula = new hidrocarboneto;
    cin >> molecula->c >> molecula->h;
    cout << ((molecula->c)*12) + ((molecula->h)*1) << endl;
    delete[] molecula;
    return 0;
}