#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float qntMin, qntMax, estoqueMedio;

    cout << "informe o estoque m�nimo de pe�as: ";
    cin >> qntMin;

    cout << "informe o estoque m�ximo de pe�as: ";
    cin >> qntMax;

    estoqueMedio = (qntMin + qntMax) / 2;

    cout << "O estoque m�dio � de " << estoqueMedio  <<  " pe�as " << endl;

   /*algoritimo deve calcular o estoque m�dio dos valores inseridos */



    return 0;
}
