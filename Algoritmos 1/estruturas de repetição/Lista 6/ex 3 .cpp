#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cont, aux, a, b, soma = 0, contImpar = 0, contPar = 0, totalN;
    float percentPar;
    cout << "Digite a: ";
    cin >> a;

    cout << "Digite b: ";
    cin >> b;

    if (b>a){
        aux = a;
        a = b;
        b = aux;
    }

        totalN = b - a + 1;
        cont = a;
        while (cont <= b){
            soma = soma + cont;

              if (cont % 2 != 0){
                contImpar++;
              } else
              contPar++;


            cont++;
        }

        percentPar = (contPar*100.0) / totalN;
         cout << "A soma dos n�meros inteiros � : " << soma << endl;
         cout << "A quantidade de n�meros �mpares � de : " << contImpar << endl;
         cout << "O percentual de n�meros pares � de : " << percentPar << " %";


    return EXIT_SUCCESS ;
}



