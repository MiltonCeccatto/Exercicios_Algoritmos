#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string nome, endereco;
    int numero, idade;

    cout << "Informe o nome: ";
    getline(cin, nome);

    cout << "Informe o endereço: ";
    getline(cin, endereco);

    cout << "Informe o telefone: ";
    cin >> numero;

    cout << "Informe a idade: ";
    cin >> idade;

    cout << endl;

    cout << "Seu nome é " << nome << ", você tem " << idade << " anos, mora na rua " << endereco << " e seu telefone é " << numero;

    cout << endl;
}
