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
    if (antecessor(y) <= 0)
    {
        return x+1;
    }
    else
    {
        return soma(sucessor(x), antecessor(y));
    }
}
int subtrai (int x, int y)
{
    if (sucessor(y) > 0)
    {
        return x+1;
    }
    else
    {
        return subtrai(antecessor(x), sucessor(y));
    }
}
int main ()
{
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    if ( num2 >= 0){
        cout << soma(num1,num2);
    }
    else{
        cout << subtrai(num1,num2);
    }

    return 0;
}