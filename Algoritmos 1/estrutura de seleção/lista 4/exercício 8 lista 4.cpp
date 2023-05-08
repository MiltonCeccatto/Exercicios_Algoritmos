#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Informe um número de 1 a 12 : ";
    cin >> num;

    switch(num)
    {
        case 0:
            cout << "Número inválido";
            break;
        case 1 :
            cout << "Mês de janeiro";
            break;
        case 2 :
            cout << "Mês de fevereiro";
            break;
        case 3 :
            cout << "Mês de março ";
            break;
        case 4 :
            cout << "Mês de Abril ";
            break;
        case 5 :
            cout << "Mês de Maio ";
            break;
        case 6 :
            cout << "Mês de Junho";
            break;
        case 7 :
             cout << "Mês de julho";
            break;
        case 8 :
            cout << "Mês de agosto";
            break;
        case 9 :
            cout << "Mês de setembro";
            break;
        case 10 :
            cout << "Mês de outubro";
            break;
        case 11 :
            cout << "Mês de novembro";
            break;
        case 12 :
            cout << "Mês de dezembro";
            break;
        default:
            cout << "Esse mês não existe" << endl;
            break;



    }


    return EXIT_SUCCESS ;
}

