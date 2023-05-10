#include <iostream>
#include <clocale>
#include <cstdlib>


using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtdPaes, qtdBroas;
    float total, doacao;

    cout << "Informe a quantidade de pães vendidos: ";
    cin >> qtdPaes;
    cout << "Informe a quantidade de broas vendidas: ";
    cin >> qtdBroas;

    total = (qtdPaes * 0.41) + (qtdBroas * 3.50);
    doacao = total * 0.05;

    cout << "Total arrecadado: " << total << endl;
    cout << "Valor doado: " << doacao << endl;


}




