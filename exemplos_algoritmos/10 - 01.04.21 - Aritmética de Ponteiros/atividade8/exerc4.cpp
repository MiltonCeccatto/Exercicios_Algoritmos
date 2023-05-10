#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    string texto1, texto2, texto3;

    cout << "Informe o texto: ";
    getline(cin, texto1);

    for(int i = 0; i < texto1.size(); i++){
        texto1[i] = toupper(texto1[i]);

        if(!isspace(texto1[i]))
            texto2 = texto2 + texto1[i];
    }

    for(int i = texto2.size() - 1; i >= 0; i--){
        texto3 = texto3 + texto2[i];
    }

    if(texto2 == texto3)
        cout << "É um palíndromo!" << endl;
    else
        cout << "Não é um palíndromo" << endl;
}
