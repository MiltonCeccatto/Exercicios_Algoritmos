#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cont;
    float b, soma;

    cont = 0;
    while (cont <= 12){
        cout << "Informe o valor de b: ";
        cin >> b;
            if (b < 50 )
                soma += b;
        cont++;
    }

    cout << "Soma dos valores menores do que 50 : " << soma;


    return EXIT_SUCCESS ;
}



