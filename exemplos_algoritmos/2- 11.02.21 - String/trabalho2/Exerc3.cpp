#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string texto1, texto2;
    char caractere;

    cout << "Informe um texto: ";
    getline(cin, texto1);

    cout << "Informe um caractere (obs: minúsculo e maiúsculo são considerados diferentes): ";
    cin >> caractere;

    for(int i = 0; i < texto1.size(); i++){
        if(texto1[i] != caractere)
            texto2 = texto2 + texto1[i];
    }

    cout << "Texto normal: " << texto1 << endl;
    cout << "Texto sem o caractere " << caractere << ": " << texto2 << endl;

}
