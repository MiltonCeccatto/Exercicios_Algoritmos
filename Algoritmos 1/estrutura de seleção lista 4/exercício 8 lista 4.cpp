#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Informe um n�mero de 1 a 12 : ";
    cin >> num;

    switch(num)
    {
        case 0:
            cout << "N�mero inv�lido";
            break;
        case 1 :
            cout << "M�s de janeiro";
            break;
        case 2 :
            cout << "M�s de fevereiro";
            break;
        case 3 :
            cout << "M�s de mar�o ";
            break;
        case 4 :
            cout << "M�s de Abril ";
            break;
        case 5 :
            cout << "M�s de Maio ";
            break;
        case 6 :
            cout << "M�s de Junho";
            break;
        case 7 :
             cout << "M�s de julho";
            break;
        case 8 :
            cout << "M�s de agosto";
            break;
        case 9 :
            cout << "M�s de setembro";
            break;
        case 10 :
            cout << "M�s de outubro";
            break;
        case 11 :
            cout << "M�s de novembro";
            break;
        case 12 :
            cout << "M�s de dezembro";
            break;
        default:
            cout << "Esse m�s n�o existe" << endl;
            break;



    }


    return EXIT_SUCCESS ;
}

