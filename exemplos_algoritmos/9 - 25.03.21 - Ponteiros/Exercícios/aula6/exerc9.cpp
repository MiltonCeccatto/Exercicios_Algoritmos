#include <iostream>

using namespace std;

void leitura(float *pt);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float tempo[100];

    leitura(tempo);

    cout << endl;

    cout << "O melhor tempo foi: " << *tempo << endl;
}

void leitura(float *pt) {
    int cont = 0, i = 0, aux;

     do {
        cout << "Tempo registrado por um atleta: ";
        cin >> pt[i];
        fflush(stdin);

        aux = pt[i];

        i++;
    } while(aux > 0);

    cout << endl;

    float menor = pt[0];

    for(int j = 0; j < cont; j++) {
        if(pt[j] < menor && pt[j] > 0)
            menor = pt[j];
    }

}
