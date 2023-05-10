#include <iostream>

using namespace std;

void leitura(float *pt);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x;

    leitura(x);

    cout << endl;

    cout << "Melhor tempo (*x): " << *x << endl;
}

void leitura(float *pt) {
    int cont = 0, i = 0, aux;

     do {
        cout << "Tempo registrado por um atleta: ";
        cin >> *pt;
        fflush(stdin);

        aux = *pt;

    } while(*pt > 0);

    cout << endl;

    if(pt < aux)
        *pt = aux;


    cout << "Melhor tempo (*pt): " << *pt << endl;

}
