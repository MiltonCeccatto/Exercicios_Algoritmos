#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int  altura, x,i;
    cout << "Informe a altura do triângulo (maior que 3 e menor que 20): ";
    cin >> altura;

    if ( altura < 3 || altura > 20 )
        cout << " Altura inválida ";
       else
    for ( x = 1 ; x <= altura ; x++)
        {
        cout << "\n";
         for (i = 1 ;  i<=x; i++ )
    cout << "* ";
    }




    return EXIT_SUCCESS ;
}

