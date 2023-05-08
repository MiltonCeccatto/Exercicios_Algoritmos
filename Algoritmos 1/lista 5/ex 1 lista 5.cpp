#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float valor, precoF, lucro;
    int cod;

    cout << "Insira o preço de custo de um produto: ";
    cin >> valor;

    cout << "Insira o código da categoria de um produto: ";
    cin >> cod;


switch (cod)
{
    case 1 :
        lucro = 0.35*valor;
        precoF = valor + lucro;
        cout << "o preço da peça é de: " << precoF;
        break;
    case 2 :
        lucro = 0.28*valor;
        precoF = valor + lucro;
        cout << "O preço da peça é de: " << precoF;
        break;
    case 3 :
        lucro = 0.22*valor;
        precoF = valor + lucro;
        cout << " O preço da peça é de: " << precoF;
        break;
    case 4 :
        lucro = 0.15*valor;
        precoF = valor + lucro;
        cout << " O preço da peça é de: " << precoF;
        break;
    default:
        cout << " O código é inválido";
        break;
    }


    return EXIT_SUCCESS ;
}

