#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num, x,cont = 0 ;

    cout << "Digite um n�mero inteiro: " << endl;
    cin >> num;

    for (x = 1 ; x<= num ; x++)
    {

        if (num % x == 0)
            cont++;

        if (cont > 2 )
            break;

    }
    if (cont == 2)
        cout << "O n�mero � primo " << endl;
    else
        cout << "O n�mero n�o � primo " << endl;

    cout << "N�mero de divis�es: " << cont << endl;

    return EXIT_SUCCESS ;
}

