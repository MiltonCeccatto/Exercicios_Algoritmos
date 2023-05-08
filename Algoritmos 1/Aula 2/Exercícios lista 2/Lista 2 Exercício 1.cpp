#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float qntMin, qntMax, estoqueMedio;

    cout << "informe o estoque mínimo de peças: ";
    cin >> qntMin;

    cout << "informe o estoque máximo de peças: ";
    cin >> qntMax;

    estoqueMedio = (qntMin + qntMax) / 2;

    cout << "O estoque médio é de " << estoqueMedio  <<  " peças " << endl;

   /*algoritimo deve calcular o estoque médio dos valores inseridos */



    return 0;
}
