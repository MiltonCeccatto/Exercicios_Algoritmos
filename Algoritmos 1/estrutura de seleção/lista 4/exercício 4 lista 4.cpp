#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int ano;

    cout << "Informe um ano: ";
    cin >> ano;

    if (((ano%4) == 0 && (ano%100) != 0) || (ano%400) == 0 )
        cout << ano << " � um ano bissexto";
    else
        cout << ano << " N�o � um ano bissexto ";


    return EXIT_SUCCESS ;
}

