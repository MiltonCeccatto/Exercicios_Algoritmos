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
        cout << "Informe qual opera��o : " << endl;
        cout << " 1 -> Soma: " << endl;
        cout << " 2 -> Subtra��o: " << endl;
        cout << " 3 -> Divis�o: " << endl;
        cout << " 4 -> Multiplica��o " << endl;
        cout << " 5 -> Porcentagem " << endl;
        cin >> operacao;


        switch (operacao)
        {
        case 1 :
            cout << "Insira um n�mero: " << endl;
            cin >> n1;
            cout << " Insira um n�mero: " << endl;
            cin >> n2;
            calculo = n1 + n2;
            break;
        case 2 :
            cout << "Insira um n�mero: " << endl;
            cin >> n1;
            cout << " Insira um n�mero: " << endl;
            cin >> n2;
            calculo = n1 - n2;
            break;
        case 3 :
            cout << "Insira um n�mero: " << endl;
            cin >> n1;
            cout << " Insira um n�mero: " << endl;
            cin >> n2;
            calculo = n1 / n2;
            break;
        case 4 :
            cout << "Insira um n�mero: " << endl;
            cin >> n1;
            cout << " Insira um n�mero: " << endl;
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
        cout << " C�digo inv�lido ";
        }

    cout << "Resultado: " << calculo << endl << endl;

    }
    while (operacao != 0 );

    return EXIT_SUCCESS ;
}

