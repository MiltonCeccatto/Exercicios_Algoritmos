#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;


int main() {
    setlocale(LC_ALL, "Portuguese");

    string nome;

    if(nome.empty())
        cout << "Nome vazio" << endl;
    else
        cout << "Nome foi informado" << endl;

    cout << "Informe seu nome: ";
    getline(cin, nome);

    if(nome.empty())
        cout << "Nome vazio" << endl;
    else
        cout << "Nome foi informado" << endl;

    cout << nome << endl;

    for(int i = 0; i < nome.size(); i++){
        nome[i] = toupper(nome[i]);
        if(!isalnum(nome[i]))
            cout << "Encontrou caractere especial" << endl;
        if(isspace(nome[i]))
            cout << "Espaço em branco" << endl;
        cout << nome[i] << " - ";
    }

}




