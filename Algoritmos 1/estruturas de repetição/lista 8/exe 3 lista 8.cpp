#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int  x, mesesAplicados;
    float valorI, valorF, rendimento, percentCorrecao, percent;
    cout << fixed;
    cout.precision(2);

    cout << "Insira o valor inicial da aplicação: ";
    cin >> valorI;

    cout << "Meses aplicados: ";
    cin >> mesesAplicados;

    cout << "Insira o percentual de correção: ";
    cin >> percent;




    for ( x = 1 ; x <= mesesAplicados ; x++)
    {
        percentCorrecao = valorI*(percent/100);
        valorF = valorI + percentCorrecao;
        rendimento = valorF - valorI;

        cout << "\tMês\t" << x << " \tValor inicial\t" << valorI << "\t Rendimento\t " << rendimento << "\t Valor Final\t" << valorF << endl;

        valorI = valorF;
    }



    return EXIT_SUCCESS ;
}

