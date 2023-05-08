#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
using namespace std;
#define TAM 10

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    float vetorA[5], vetRes[5], res = 1;

    for (int i = 1; i <= 5; i++){
        cout << "insira um valor para " << i << endl;
        cin >> vetorA[i];
    }

    for (int i = 1; i <= 5; i++){
        cout << vetorA[i];
        cout << ", ";
    }
   cout << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = vetorA[i]; j >= 1; j--){
            res *= j;
        }
        vetRes[i] = res;
        res = 1;
        cout << "Resultado: " << vetRes[i] << endl;
    }


    return EXIT_SUCCESS ;
}
