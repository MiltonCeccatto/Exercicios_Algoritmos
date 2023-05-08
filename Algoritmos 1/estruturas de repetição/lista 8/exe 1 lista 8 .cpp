#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num, x,cont = 0 ;

    cout << "Digite um número inteiro: " << endl;
    cin >> num;

    for (x = 1 ; x<= num ; x++)
    {

        if (num % x == 0)
            cont++;

        if (cont > 2 )
            break;

    }
    if (cont == 2)
        cout << "O número é primo " << endl;
    else
        cout << "O número não é primo " << endl;

    cout << "Número de divisões: " << cont << endl;

    return EXIT_SUCCESS ;
}

