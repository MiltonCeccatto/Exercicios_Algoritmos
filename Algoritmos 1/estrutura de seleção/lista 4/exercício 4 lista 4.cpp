#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int ano;

    cout << "Informe um ano: ";
    cin >> ano;

    if (((ano%4) == 0 && (ano%100) != 0) || (ano%400) == 0 )
        cout << ano << " É um ano bissexto";
    else
        cout << ano << " Não é um ano bissexto ";


    return EXIT_SUCCESS ;
}

