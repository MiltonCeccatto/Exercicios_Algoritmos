#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int diasAtr;
    float total, valorParc, taxa;

    cout << "Informe os dias de atraso: ";
    cin >> diasAtr;

    cout << "Informe o valor de cada parcela: ";
    cin >> valorParc;

    cout << "Informe a taxa de juros cobrada: ";
    cin >> taxa;

    total = valorParc + (valorParc*((taxa/100.0)*diasAtr))                             ;

    cout << "Valor inicial: R$" <<valorParc << endl;
    cout << "Valor corrigido: R$" << total << endl;


    return EXIT_SUCCESS ;
}
