#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string texto1, texto2;

    cout << "Informe o texto: ";
    getline(cin, texto1);

    cout << endl;

    cout << "Texto normal: " <<texto1 << endl;

    cout << endl;

    for(int i = 0; i < texto1.size(); i++){
        if(!isspace(texto1[i]))
            texto2 = texto2 + texto1[i];
    }

    cout << "Texto sem espaços: " << texto2 << endl;

    cout << endl;

    cout << "Texto sem espaços e ao contrário: ";
    for(int i = texto2.size() - 1; i >= 0; i--){
        cout << texto2[i];
    }

    cout << endl;
    cout << endl;
}
