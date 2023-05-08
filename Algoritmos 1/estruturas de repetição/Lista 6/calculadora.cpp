#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float calculo, n1, n2;
    int operacao;

    do
    {
        cout << "Informe qual operação : " << endl;
        cout << " 1 -> Soma: " << endl;
        cout << " 2 -> Subtração: " << endl;
        cout << " 3 -> Divisão: " << endl;
        cout << " 4 -> Multiplicação " << endl;
        cout << " 5 -> Porcentagem " << endl;
        cin >> operacao;


        switch (operacao)
        {
        case 1 :
            cout << "Insira um número: " << endl;
            cin >> n1;
            cout << " Insira um número: " << endl;
            cin >> n2;
            calculo = n1 + n2;
            break;
        case 2 :
            cout << "Insira um número: " << endl;
            cin >> n1;
            cout << " Insira um número: " << endl;
            cin >> n2;
            calculo = n1 - n2;
            break;
        case 3 :
            cout << "Insira um número: " << endl;
            cin >> n1;
            cout << " Insira um número: " << endl;
            cin >> n2;
            calculo = n1 / n2;
            break;
        case 4 :
            cout << "Insira um número: " << endl;
            cin >> n1;
            cout << " Insira um número: " << endl;
            cin >> n2;
            calculo = n1 * n2;
            break;
        case 5 :
            cout << "Insira a porcentagem ( % ): " << endl;
            cin >> n1;
            cout << "Insira o valor: " << endl;
            cin >> n2;
            calculo = (n1/100)* n2;
            break;
             default :
        cout << " Código inválido ";
        }

    cout << "Resultado: " << calculo << endl << endl;

    }
    while (operacao != 0 );

    return EXIT_SUCCESS ;
}

