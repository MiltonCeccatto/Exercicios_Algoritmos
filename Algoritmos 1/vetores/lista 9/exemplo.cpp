#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

  int vet[10], i;
  for (i = 0 ; i<= 9; i++){
    cout << "Digite o valor  "<< i << " i"<< endl;
    cin >> vet[i];
    fflush(stdin);//sempre colocar quando for lida uma váriavel dentro de um laço

  }

  for (i = 0; i<=9; i++){
    cout << vet[i] << ", ";
  }
    return EXIT_SUCCESS ;
}

