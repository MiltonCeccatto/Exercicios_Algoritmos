#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

#define tam 30

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v[tam], total, idx, n, repetido, cont, aux;
    bool trocou;

    total = 0;
    idx = 0;
    cont = 0;

    srand(time(NULL));

    do {
        n = rand()%40;
        total++;

        repetido = 0;

        for(int i = 0; i < idx; i++) {
            if(v[i] == n) {
                repetido = 1;
            }
        }

        if(repetido == 0) {
            v[idx] = n;
            idx++;
        }

        cont++;

    } while(idx < tam);

    cout << "V = [";
    for(int i = 0; i < tam; i++) {
        cout << v[i];

        if(i < tam - 1) {
            cout << ", ";
        } else {
            cout << "]" << endl << endl;
        }
    }

    do {

    trocou = false;

    for (int i = 0; i < tam - 1; i++) {
        if (v[i] > v[i + 1]){ //faz a troca
            // V[i] deve ir para V[i + i]
            // V[i + i] deve ir para V[i]
            aux = v[i];
            v[i] = v[i+1];
            v[i + 1] = aux;
            trocou = true;
        }
    }

    } while(trocou == true);

    cout << "V (crescente para ficar mais fácil a visualização) = [";
    for(int i = 0; i < tam; i++) {
        cout << v[i];

        if(i < tam - 1) {
            cout << ", ";
        } else {
            cout << "]" << endl << endl;
        }
    }

    cout <<  "Contagem de números inseridos: " << cont << endl;
}
