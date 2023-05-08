#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, ini, fim;

    cout << " Informe Ínicio : ";
    cin >> ini;

    cout << " Informe Fim : ";
    cin >> fim;

    for (x=ini; x<=fim; x++ ) {
        cout << "x: " << x << endl;
    }

    return EXIT_SUCCESS ;
}


