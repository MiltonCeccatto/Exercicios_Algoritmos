#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

///Não consegui terminar, não entendi como poderia mostrar a linha inteira caso o nome fosse encontrado

using namespace std;

void incluir();
void mostrar();
void consultarNome();

int main() {
    setlocale(LC_ALL, "Portuguese");

    int menu, f = 0;

    ifstream leitura;
    leitura.open("agenda.txt", ios::in);

    do {
        system("cls");

        cout << "**************MENU**************" << endl;
        cout << "*                              *" << endl;
        cout << "* 0 - Sair                     *" << endl;
        cout << "* 1 - Incluir                  *" << endl;
        cout << "* 2 - Mostrar todos            *" << endl;
        cout << "* 3 - Consultar pelo nome      *" << endl;
        cout << "* 4 - Consultar pelo número    *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl << endl;

        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu) {
            case 0:
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            case 1:
                system("cls");
                incluir();
                break;

            case 2:
                system("cls");
                mostrar();
                cout << endl;
                break;

            case 3:
                system("cls");
                consultarNome();
                cout << endl;
                break;

            default:
                system("cls");

                cout << "Opção iválida." << endl << endl;

                break;
        }

        system("pause");
        system("cls");

    } while(menu != 0);

    leitura.close();


}

void incluir() {
    cout << "OPÇÃO 1 - INCLUIR" << endl << endl;

    ofstream escreve;
    escreve.open("agenda.txt", ios::app);

    string nome;
    int numero;

    if(escreve.is_open()) {
        cout << "Informe o nome: ";
        getline(cin, nome);

        cout << "Informe o número: ";
        cin >> numero;

        escreve << nome << ";" << numero << "\n";

        escreve.close();
    } else
        cout << "Falha ao abrir o arquivo.";

    cout << endl;
}

void mostrar() {
    cout << "OPÇÃO 2 - MOSTRAR TODOS" << endl << endl;

    char x;

    ifstream leitura;
    leitura.open("agenda.txt",ios::in);

    if(leitura.is_open()){
        while(leitura.get(x))
            cout << x;

        leitura.close();
    } else
        cout << "Falha ao abrir o arquivo.";
}

void consultarNome(){
    cout << "OPÇÃO 3 - CONSULTAR PELO NOME" << endl << endl;

    string consultaNome;
    char x[100];

    bool contem = false;
    int cont1 = 0, cont2 = 0;
    int pos1, pos2;

    cout << "Informe o nome a ser consultado: ";
    getline(cin, consultaNome);

    ifstream leitura;
    leitura.open("agenda.txt", ios::in);

    cout << endl;

    if(leitura.is_open()){
        while(leitura.getline(x, sizeof(x), ';')){
            if(x == consultaNome){
                contem = true;
                pos1 = cont1;
            }
            cont1++;
        }

        leitura.close();
    } else
        cout << "Arquivo não encontrado!" << endl;

    cout << "Posição: " << pos1 << endl;

    leitura.open("agenda.txt", ios::in);

    if(leitura.is_open()){
        while(leitura.getline(x, sizeof(x), '\n')){
            pos2 = cont2;
            if(contem == true && pos1 == pos2)
                cout << x;
            cont2++;
        }
    }

    cout << endl;

}

