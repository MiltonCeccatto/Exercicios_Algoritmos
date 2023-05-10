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

    cout << "Informe o n�mero de grenais: ";
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
        cout << "# 2 - Mostrar Rela��es                              #" << endl;
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
                    cout << "� necess�rio informar as notas primeiro!" << endl << endl;
                else{
                    mostrar(gremio, inter, jogos, contador);
                    cout << endl;
                }
                break;
            default:
                system("cls");
                cout << "Op��o inv�lida!" << endl << endl;
        }
        system("pause");
        system("cls");
    }

}

void adicionar(int *g, int *i, int *j, int *c){
    int *k = new int;

    g += *c - 1;
    i += *c - 1;

    cout << "Informe os gols marcado pelo Gr�mio no jogo " << (*c) << ": ";
    cin >> *g;
    fflush(stdin);

    cout << endl;

    cout << "Informe os gols marcado pelo Internacional no jogo " << (*c) << ": ";
    cin >> *i;
    fflush(stdin);

    cout << endl;
}

void mostrar(int *g, int *i, int *j, int *c){
    int *k = new int(0);
    int *somag = new int(0);
    int *somai = new int(0);

    ///N�mero de grenais
    cout << "N�mero de grenais: " << *c << endl << endl;

    ///Mostra os gols do Gr�mio em cada partida e faz a soma total de gols
    cout << "Gols do Gr�mio em cada partida: ";
    while(*k < *c){
        cout << *g << " ";
        *somag += *g;
        g++;
        (*k)++;
    }

    *k = 0;

    cout << endl;

    ///Mostra os gols do Internacional em cada partida e faz a soma total de gols
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

    ///Exibe o n�mero de vit�rias do Internacional e do Gr�mio, tamb�m exibe o n�mero de empates
    float *vgremio = new float;
    float *vinter = new float;
    float *empates = new float;

    *vgremio = 0;
    *vinter = 0;
    *empates = 0;

    while(*k < *c){
        if(*g > *i)
            (*vgremio)++;
        if(*g < *i)
            (*vinter)++;
        if(*g == *i)
            (*empates)++;
        g++;
        i++;
        (*k)++;
    }

    cout << "N�mero de vit�rias do Gr�mio: " << *vgremio << endl;
    cout << "N�mero de vit�rias do Internacional: " << *vinter << endl;
    cout << "N�mero de empates: " << *empates << endl;


    g -= *c;
    i -= *c;
    *k = 0;

    cout << endl;

    ///Exibe a soma de gols dos times
    cout << "Total de gols feitos pelo Gr�mio: " << *somag << endl;
    cout << "Total de gols feitos pelo Internacional: " << *somai << endl;

    cout << endl;

    ///Maior percentual de vit�rias
    float *pinter = new float;
    float *pgremio = new float;
    float *pempate = new float;


    *pinter = (*vinter / *c) * 100;
    *pgremio = (*vgremio / *c) * 100;
    *pempate = (*empates / *c) * 100;

    if(*pinter > *pgremio)
        cout << "A maior taxa de vit�ria � do Internacional: " << *pinter << "%" << endl;
    else if(*pinter < *pgremio)
        cout << "A maior taxa de vit�ria � do Gr�mio: " << *pgremio << "%" << endl;
    else if(*pinter == *pgremio)
        cout << "Mesma taxa de vit�ria: " << *pgremio << "%" << endl;

    cout << endl;

}

