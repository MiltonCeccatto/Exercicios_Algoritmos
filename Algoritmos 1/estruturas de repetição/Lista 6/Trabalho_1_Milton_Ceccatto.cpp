#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float remuneracao, calc, comparacao;
    int nivel, hrTrabalhadas;
    cout << fixed << setprecision(2);

    cout << "Insira o nível em que o professor se encontra: " << endl;
    cout << " Nível 1 - R$ 12,00 por hora/aula: " << endl;
    cout << " Nível 2 - R$ 17,00 por hora/aula: " << endl;
    cout << " Nível 3 - R$ 24,35 por hora/aula: " << endl;
    cout << " Nível 4 - R$ 29,50 por hora/aula: " << endl;
    cin >> nivel;

    if (nivel == 1 || nivel == 2 || nivel == 3 || nivel == 4)
    {
        cout << "Insira o número de horas trabalhadas por mês: ";
        cin >> hrTrabalhadas;

        cout << "Informe sua remuneração: ";
        cin >> remuneracao;

        if (nivel == 1)
        {
            calc = hrTrabalhadas * 12.00;
            comparacao = ((remuneracao - calc)/remuneracao)* 100;

            if ( comparacao == 0)
            {
                cout << "Valor correto" << endl;
            }
            else
            {

                cout << "Remuneração atual: R$" << remuneracao << endl;
                cout << "Remuneração pela tabela do sindicato: R$" << calc << endl;
                cout << "Situaçao: "<< comparacao << " %"  << endl;
            }
        }
        else if ( nivel == 2)
        {
            calc = hrTrabalhadas * 17.00;
            comparacao = ((remuneracao - calc)/remuneracao)* 100;

            if ( comparacao == 0)
            {
                cout << "Valor correto" << endl;
            }
            else
            {

                cout << "Remuneração atual: R$" << remuneracao << endl;
                cout << "Remuneração pela tabela do sindicato: R$" << calc << endl;
                cout << "Situaçao: "<< comparacao << " %"  << endl;
            }
        }
        else if (nivel == 3)
        {
            calc = hrTrabalhadas * 24.35;
            comparacao = ((remuneracao - calc)/remuneracao)* 100;
            if ( comparacao == 0)
            {
                cout << "Valor correto" << endl;
            }
            else
            {

                cout << "Remuneração atual: R$" << remuneracao << endl;
                cout << "Remuneração pela tabela do sindicato: R$" << calc << endl;
                cout << "Situaçao: "<< comparacao << " %"  << endl;
            }
        }
        else if ( nivel == 4)
        {
            calc = hrTrabalhadas * 29.50;
            comparacao = ((remuneracao - calc)/remuneracao)* 100;

            if ( comparacao == 0)
            {
                cout << "Valor correto" << endl;
            }
            else
            {

                cout << "Remuneração atual: R$" << remuneracao << endl;
                cout << "Remuneração pela tabela do sindicato: R$" << calc << endl;
                cout << "Situaçao: "<< comparacao << " %"  << endl;
            }
        }

    }
    else
        cout << "informe um nível válido";
    return EXIT_SUCCESS ;
}

