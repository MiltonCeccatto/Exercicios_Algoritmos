#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num, x,divi = 0;

    do {
    cout << "Digite um n�mero inteiro: " << endl;
    cin >> num;
    }while (num < 2);


    for (x = 1 ; x<num ; x++)
    {
        if (num % x == 0){
            cout << x << endl;
            divi += x;
        }

    }

    if (num == divi){
        cout << num << " � um n�mero perfeito" << endl;
    } else {
        cout << num << " N�o � um n�mero perfeito" << endl;
    }


    return EXIT_SUCCESS ;
}

