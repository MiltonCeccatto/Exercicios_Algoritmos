#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

  int vet[10], i,n, maior;
  srand(time(NULL));
  for (i = 0 ; i<= 9; i++){
    vet[i] = rand()% 60 + 21;
  }

  for (i = 0; i<=9; i++){
    cout << vet[i] << ", ";
  }

  for (i = 0; i < 9; i++) {
    if (i == 0) {
        vet[i] = maior;
    }
    if (vet[i] > maior) {
        maior = vet[i];
    }
}
    cout << endl;
    cout << "Maior = " << maior;
    return EXIT_SUCCESS ;
}

