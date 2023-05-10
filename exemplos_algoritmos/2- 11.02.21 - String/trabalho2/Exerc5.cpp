#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string texto1, texto2, texto3, passando1, passando2, passando3;
    int tamanho1 = 0, tamanho2 = 0, tamanho3 = 0;
    int maior = 0, menor = 0, meio = 0;

    cout << "Informe o texto 1: ";
    getline(cin, texto1);

    cout << "Informe o texto 2: ";
    getline(cin, texto2);

    cout << "Informe o texto 3: ";
    getline(cin, texto3);

    tamanho1 = texto1.size();
    tamanho2 = texto2.size();
    tamanho3 = texto3.size();

    cout << endl;

    if(tamanho1 > tamanho2 && tamanho1 >tamanho3){
        maior = tamanho1;
        if(maior == tamanho1)
            passando1 = "String 1 é a maior";
        if(tamanho2 > tamanho3){
            menor = tamanho3;
            meio = tamanho2;

            if(menor == tamanho3)
                passando3 = "String 3 é a menor";
            if(meio == tamanho2)
                passando2 = "String 2 é a do meio";
        }
        else {
            menor = tamanho2;
            meio = tamanho3;

            if(menor == tamanho2)
                passando3 = "String 2 é a menor";
            if(meio == tamanho3)
                passando2 = "String 3 é a do meio";
            }

        } else if(tamanho2 > tamanho1 && tamanho2 > tamanho3){
            maior = tamanho2;
            if(maior == tamanho2)
                passando1 = "String 2 é a maior";
            if(tamanho1 > tamanho3){
                menor = tamanho3;
                meio = tamanho1;

            if(menor == tamanho3)
                passando3 = "String 3 é a menor";
            if(meio == tamanho1)
                passando2 = "String 1 é a do meio";
            }
            else {
                menor = tamanho1;
                meio = tamanho3;

            if(menor == tamanho1)
                passando3 = "String 1 é a menor";
            if(meio == tamanho3)
                passando2 = "String 3 é a do meio";
                }
        } else if(tamanho3 > tamanho1 && tamanho3 > tamanho2){
            maior = tamanho3;
            if(maior == tamanho3)
                passando1 = "String 3 é a maior";
            if(tamanho1 > tamanho2){
                menor = tamanho2;
                meio = tamanho1;

            if(menor == tamanho2)
                passando3 = "String 2 é a menor";
            if(meio == tamanho1)
                passando2 = "String 1 é a do meio";
            }
            else {
                menor = tamanho1;
                meio = tamanho2;

            if(menor == tamanho1)
                passando3 = "String 1 é a menor";
            if(meio == tamanho2)
                passando2 = "String 2 é a do meio";
                }
        }

    cout << "Indicação de qual é maior, meio, e menor: " << endl;

    cout << passando1 << endl;
    cout << passando2 << endl;
    cout << passando3 << endl;

    cout << endl;

    cout << "Strings em ordem crescente de tamanho e em letras maiúsculas: " << endl;
    for(int i = 0; i < texto1.size(); i++){
        texto1[i] = toupper(texto1[i]);
    }

    for(int i = 0; i < texto2.size(); i++){
        texto2[i] = toupper(texto2[i]);
    }

    for(int i = 0; i < texto3.size(); i++){
        texto3[i] = toupper(texto3[i]);
    }

    if(menor == tamanho1)
        cout << texto1 << endl;
    else if(menor == tamanho2)
        cout << texto2 << endl;
    else if(menor == tamanho3)
        cout << texto3 << endl;

    if(meio == tamanho1)
        cout << texto1 << endl;
    else if(meio == tamanho2)
        cout << texto2 << endl;
    else if(meio == tamanho3)
        cout << texto3 << endl;

    if(maior == tamanho1)
        cout << texto1 << endl;
    else if(maior == tamanho2)
        cout << texto2 << endl;
    else if(maior == tamanho3)
        cout << texto3 << endl;

    cout << endl;

    cout << "Indicação do tamanho das strings menor, meio e maior: " << endl;

    cout << "Menor tamanho: " << menor << endl;
    cout << "Meio tamanho: " << meio << endl;
    cout << "Maior tamanho: " << maior << endl;

    cout << endl;
}
