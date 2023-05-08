#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string texto1, texto2, caractere;


    cout << "Informe o texto: ";
    getline(cin, texto1);

    cout << "Insira um caractere a ser removido do texto: ";
    cin >> caractere;

    cout << endl;

    cout << "Texto normal: " <<texto1 << endl;

    cout << endl;

    cout << "Caractere a ser removido: " << caractere << endl;

   /* for(int i = 0; i < texto1.size(); i++){
        if(isspace(texto1[i]))
            texto2 = texto2 + texto1[i];
    else{
        if(isalnum(texto1[i]))
            texto2 = texto2 + texto1[i];
    }}*/

    for (int i = 0; i < texto1.size();i++){
        if(texto1[i] != caractere[0])
            texto2 = texto2 + texto1[i];
    }

    cout << "Texto sem os caracteres: " << texto2 << endl;

}
