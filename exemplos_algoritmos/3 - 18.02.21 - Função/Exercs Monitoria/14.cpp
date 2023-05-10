#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void quantia(int notas);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float notas, resposta;

    cout << "Informe o valor a ser sacado: ";
    cin >> notas;

    cout << endl;

    quantia(notas);
}

void quantia(int notas) {
    int quantia1, quantia2, quantia5, quantia10, quantia20, quantia50, quantia100;

    if(notas > 0){
        quantia100 = notas/100;
        notas = notas%100;

        quantia50 = notas/50;
        notas = notas%50;

        quantia20 = notas/20;
        notas = notas%20;

        quantia10 = notas/10;
        notas = notas%10;

        quantia5 = notas/5;
        notas = notas%5;

        quantia2 = notas/2;
        notas = notas%2;

        quantia1 = notas;

        if(quantia100 != 0)
            cout << "Notas de R$100: " << quantia100 << endl;
        if(quantia50 != 0)
            cout << "Notas de R$50: " << quantia50 << endl;
        if(quantia20 != 0)
            cout << "Notas de R$20: " << quantia20 << endl;
        if(quantia10 != 0)
            cout << "Notas de R$10: " << quantia10 << endl;
        if(quantia5 != 0)
            cout << "Notas de R$5: " << quantia5 << endl;
        if(quantia2 != 0)
            cout << "Notas de R$2: " << quantia2 << endl;
        if(quantia1 != 0)
            cout << "Notas de R$1: " << quantia1 << endl;
    } else
        cout << "Valor inválido!" << endl;
}
