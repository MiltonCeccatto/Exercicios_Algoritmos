#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Digite um n�mero entre 1 e 9999: ";
    cin >> num;

    if(num < 0 || num > 9999)
    {
        cout << "O n�mero deve estar entre 1 e 9999";
    }
    else if (num <= 9)
    {
        cout << " O n�mero � uma unidade ";
    }
    else if (num > 9 && num < 99)
    {
        cout << " O n�mero � uma dezena";
    }
    else if (num > 99 && num <= 999 )
    {
        cout << " O n�mero � uma centena ";
    }
    else
    {
        cout << " O n�mero � um milhar";
    }


    return EXIT_SUCCESS ;
}

