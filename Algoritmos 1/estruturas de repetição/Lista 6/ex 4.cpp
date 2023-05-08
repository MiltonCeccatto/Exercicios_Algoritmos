#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0  ;

    while (soma <= 250 ){

    cout << "Digite um número inteiro : ";
    cin >> num;

        soma = soma + num;
        cout << soma << endl ;
    }



    return EXIT_SUCCESS ;
}



