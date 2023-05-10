#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

void cadastrar(int *f);
void mostrar();

int main() {
    setlocale(LC_ALL, "Portuguese");

    int menu;
    int *flag = new int(0);

    do {
        system("cls");

        cout << "*********MENU*********" << endl;
        cout << "*                    *" << endl;
        cout << "* 0 - Sair           *" << endl;
        cout << "* 1 - Cadastrar      *" << endl;
        cout << "* 2 - Mostrar        *" << endl;
        cout << "* 3 - Consultar      *" << endl;
        cout << "*                    *" << endl;
        cout << "**********************" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu) {
            case 0 :
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            case 1 :
                system("cls");
                cadastrar(flag);
                break;

            case 2 :
                system("cls");
                if(*flag == 0)
                    cout << "Escolha a opção 1 antes de continuar." << endl << endl;
                else {
                    mostrar();
                    cout << endl;
                }
                break;

            default:
                system("cls");
                cout << "Opção iválida." << endl << endl;
                break;
        }

        system("pause");
        system("cls");

    } while(menu != 0);
}

void cadastrar(int *f) {
    string nome;

    cout << "Informe o nome: ";
    getline(cin, nome);
    fflush(stdin);

    ofstream escreve("exercicio3.txt",ios::app);

    if(escreve.is_open()) {
        if(*f == 0) {
            escreve << nome;
            (*f)++;
        }
        else
            escreve << "\n" << nome;

        escreve.close();
    }
    else
        cout << "Erro ao abrir o arquivo.";

    cout << endl;
}

void mostrar() {
    char x;

    ifstream leitura("exercicio3.txt",ios::in);

    while(leitura.get(x))
        cout << x;

    cout << endl;

    leitura.close();
}

void consulta() {
    char x;
    char nome[10];

    int cont = 0, letra = 0;

    ifstream leitura("exercicio3.txt",ios::in);

    cout << "Informe o nome: ";
    gets(nome);

    while(!leitura.eof()){
    }

    leitura.close();
}
