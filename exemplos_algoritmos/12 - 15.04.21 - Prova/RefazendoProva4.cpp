#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

void adicionar(int *g, int *i, int *j, int *c);
void mostrar(int *g, int *i, int *j, int *c);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *n = new int;

    int menu = -1;
    int *leu = new int(0);

    cout << "Informe o número de grenais: ";
    cin >> *n;
    fflush(stdin);

    int *jogos = new int[*n];
    int *gremio = new int[*n];
    int *inter = new int[*n];
    int *contador = new int;


    while(menu != 0){
        system("cls");
        cout << "#########################MENU########################" << endl;
        cout << "#                                                   #" << endl;
        cout << "# 0 - Sair                                          #" << endl;
        cout << "# 1 - Adicionar Resultados                          #" << endl;
        cout << "# 2 - Mostrar Relações                              #" << endl;
        cout << "#                                                   #" << endl;
        cout << "#####################################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0:
                system("cls");
                cout << "Programa Finalizado!" << endl << endl;
                break;
            case 1:
                system("cls");
                if(*contador < *n){
                    (*contador)++;
                    adicionar(gremio, inter, jogos, contador);
                } else {
                    cout << "Limite atingido" << endl << endl;
                }
                *leu = 1;
                break;
            case 2:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário informar as notas primeiro!" << endl << endl;
                else{
                    mostrar(gremio, inter, jogos, contador);
                    cout << endl;
                }
                break;
            default:
                system("cls");
                cout << "Opção inválida!" << endl << endl;
        }
        system("pause");
        system("cls");
    }

}

void adicionar(int *g, int *i, int *j, int *c){
    int *k = new int;

    if(*c - 5 < *j){
        g += *c - 1;
        i += *c - 1;

        cout << "Informe os gols marcado pelo Grêmio no jogo " << (*c) << ": ";
        cin >> *g;
        fflush(stdin);

        cout << endl;

        cout << "Informe os gols marcado pelo Internacional no jogo " << (*c) << ": ";
        cin >> *i;
        fflush(stdin);

        cout << endl;

    }
}

void mostrar(int *g, int *i, int *j, int *c){
    int *k = new int;
    int *somag = new int;
    int *somai = new int;

    cout << "Número de grenais: " << *c << endl << endl;

    cout << "Gols do Grêmio em cada partida: ";
    while(*k < *c){
        cout << *g << " ";
        *somag += *g;
        g++;
        (*k)++;
    }

    *k = 0;

    cout << endl;

    cout << "Gols do Internacional em cada partida: ";
    while(*k < *c){
        cout << *i << " ";
        *somai += *i;
        i++;
        (*k)++;
    }

    g -= *c;
    i -= *c;
    *k = 0;

    cout << endl << endl;

    cout << "Total de gols feitos pelo Grêmio: " << *somag << endl;
    cout << "Total de gols feitos pelo Internacional: " << *somai << endl;

    cout << endl << endl;

}


