#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string nome, cpf;
    int dia, mes, ano;
    int ponto = 0, traco = 0;

    ///Nome
    cout << "Informe seu nome: ";
    getline(cin, nome);

    nome[0] = toupper(nome[0]);

    for(int i = 0; i < nome.size(); i++){
        if(isspace(nome[i]))
            nome[i + 1] = toupper(nome[i + 1]);
    }

    ///CPF
    do {
        cout << "Informe o CPF: ";
        getline(cin, cpf);

        if(cpf.size() != 11) {
            system("CLS");
            cout << "Nome: " << nome << endl;
            cout << "CPF deve conter 11 números." << endl << endl;
        }
    } while(cpf.size() != 11);

    cout << "Informe o dia: ";
    cin >> dia;
    cout << "Informe o mês: ";
    cin >> mes;
    cout << "Informe o ano: ";
    cin >> ano;

    cout << endl;
    system("pause");
    system("CLS");

    cout << "Dados finais: " << endl << endl;
    cout << "Nome: " << nome << endl;
    cout << "CPF: ";
    for(int i = 0; i < cpf.size(); i++) {
        if(ponto == 3 && traco < 9) {
            cout << ".";
            ponto = 0;
        }

        if(traco == 9) {
            cout << "-";
            traco = 0;
        }

        cout << cpf[i];

        ponto++;
        traco++;
    }

    cout << endl;

    ///Data
    if(dia < 10 && mes < 10)
        cout << "Data: 0" << dia << "/0" << mes << "/" << ano << endl;
    else if(mes < 10)
        cout << "Data: " << dia << "/0" << mes << "/" << ano << endl;
    else if(dia < 10)
        cout << "Data: 0" << dia << "/" << mes << "/" << ano << endl;
    else
        cout << "Data: " << dia << "/" << mes << "/" << ano << endl;
}
