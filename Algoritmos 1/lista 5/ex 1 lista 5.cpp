#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float valor, precoF, lucro;
    int cod;

    cout << "Insira o pre�o de custo de um produto: ";
    cin >> valor;

    cout << "Insira o c�digo da categoria de um produto: ";
    cin >> cod;


switch (cod)
{
    case 1 :
        lucro = 0.35*valor;
        precoF = valor + lucro;
        cout << "o pre�o da pe�a � de: " << precoF;
        break;
    case 2 :
        lucro = 0.28*valor;
        precoF = valor + lucro;
        cout << "O pre�o da pe�a � de: " << precoF;
        break;
    case 3 :
        lucro = 0.22*valor;
        precoF = valor + lucro;
        cout << " O pre�o da pe�a � de: " << precoF;
        break;
    case 4 :
        lucro = 0.15*valor;
        precoF = valor + lucro;
        cout << " O pre�o da pe�a � de: " << precoF;
        break;
    default:
        cout << " O c�digo � inv�lido";
        break;
    }


    return EXIT_SUCCESS ;
}

