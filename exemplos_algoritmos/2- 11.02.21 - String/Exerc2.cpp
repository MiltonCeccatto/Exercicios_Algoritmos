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

    cout << "Informe o endere�o: ";
    getline(cin, endereco);

    cout << "Informe o telefone: ";
    cin >> numero;

    cout << "Informe a idade: ";
    cin >> idade;

    cout << endl;

    cout << "Seu nome � " << nome << ", voc� tem " << idade << " anos, mora na rua " << endereco << " e seu telefone � " << numero;

    cout << endl;
}
