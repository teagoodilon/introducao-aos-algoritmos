#include <iostream>
using namespace std;

int sucessor(int n)
{
    return n+1;
}
int antecessor(int n)
{
    return n-1;
}
int soma (int x, int y)
{
    if (antecessor(x) < 0)
    {
        return y;
    }
    else
    {
        return soma(antecessor(x), sucessor(y));
    }
}

int main ()
{
    int num1;
    int num2;
    
    cin >> num1;
    cin >> num2;
    
    cout << soma(num1,num2);
    
    return 0;
}