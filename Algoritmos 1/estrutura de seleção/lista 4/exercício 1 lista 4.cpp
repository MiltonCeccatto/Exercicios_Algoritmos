#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int hora, operacao;

    cout << "Digite a hora: ";
    cin >> hora;

    if (hora > 24 || hora < 0 )
        cout << "hora é inválida";
    else if (hora == 12 )
    {
        cout << "agora são 12 horas";
    }
    else if ( hora < 12 )
    {
        operacao = 12 - hora;
        cout << "Faltam " << operacao << " horas para as 12 horas";
    }

    else
    {
        operacao =  hora - 12;
        cout << "Ja se passaram " << operacao << " horas das 12 horas";
    }


    return EXIT_SUCCESS ;
}
