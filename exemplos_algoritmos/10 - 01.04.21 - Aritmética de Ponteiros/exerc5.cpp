#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int quantia, i = 0, n, acertos = 0;
    int sorteio[20];

    cout << "Informe quantos números gostaria de apostar: ";
    cin >> quantia;

    int aposta[quantia];

    cout << "Informe os números: ";
    while(i < quantia){
        cin >> n;
        if(n > 0 && n < 100){
            aposta[i] = n;
            i++;
        } else
            cout << "Número fora dos padrões, insira outro";
    }

    cout << "Valores apostados: ";
    for(int j = 0; j < quantia; j++){
        cout << aposta[j] << " ";
    }

    cout << endl << endl;

    cout << "Valores sorteados: ";
    for(int j = 0; j < 20; j++){
        sorteio[j] = rand() % 100;

        cout << sorteio[j] << " ";
    }

    cout << endl << endl;

    for(int j = 0; j < quantia; j++){
        for(int k = 0; k < 20; k++){
            if(aposta[j] == sorteio[k])
                acertos++;
        }
    }

    cout << "Quantia de acertos: " << acertos << endl;

    cout << "Números acertados: ";
    for(int j = 0; j < quantia; j++){
        for(int k = 0; k < 20; k++){
            if(aposta[j] == sorteio[k])
                cout << aposta[j] << " ";
        }
    }
}
