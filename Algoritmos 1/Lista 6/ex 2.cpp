#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n,cont, resultado;

    do {
        cout << "Informe n (1 - 10): ";
        cin >> n;

        //tabuada
        cont = 1;
        while (cont <=10){
            resultado = cont *n;
            cout << cont << "\tx\t" << n << "\t=\t" << resultado << endl;
            cont++;
        }


    }while( n <= 0 || n > 10);



    return EXIT_SUCCESS ;
}



