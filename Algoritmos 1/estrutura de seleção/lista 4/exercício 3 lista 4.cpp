#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cod;

    cout << "insira o c�digo do produto: ";
    cin >> cod;

    if (cod == 10 )
    {
        cout << "hamb�rguer" << endl << "Valor: R$ 5,00 ";
    }
    else if (cod == 11)
    {
        cout << "Cachorro Quente " << endl << "valor: R$ 3,20";
    }
    else if (cod == 12)
    {
        cout << "Torrada simples " << endl << "Valor: R$ 4,50";
    }
    else
    {
        cout << "C�digo inv�lido";
    }



    return EXIT_SUCCESS ;
}

