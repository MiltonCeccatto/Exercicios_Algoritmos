#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void informar(int *g, int *i, int *jogos);
void mostrar(int *g, int *i, int *jogos);
void vinter(int *i, int *jogos);
void vgremio(int *g, int *jogos);
void gols(int *g, int *i, int *jogos);
void empate(int *g, int *i, int *jogos);


main(){
    setlocale(LC_ALL, "Portuguese");

    int *n = new int;

    int menu = -1;
    int *leu = new int(0);

    cout << "Informe o n�mero de jogos: ";
    cin >> *n;
    fflush(stdin);

    int *gremio = new int[*n];
    int *inter = new int[*n];



    while(menu != 0){
        system("cls");
        cout << "#########################MENU########################" << endl;
        cout << "#                                                   #" << endl;
        cout << "#                                                   #" << endl;
        cout << "# 0 - Sair                                          #" << endl;
        cout << "# 1 - Informar gols                                 #" << endl;
        cout << "# 2 - Mostrar partidas e gols                       #" << endl;
        cout << "# 3 - N�mero de gols do Inter e Gr�mio              #" << endl;
        cout << "# 4 - N�mero de vit�rias do Gr�mio                  #" << endl;
        cout << "# 5 - N�mero de empates                             #" << endl;
        cout << "# 3 - Maior e menor m�dia ponderada                 #" << endl;
        cout << "# 4 - Alunos com nota >= a 6 e < que 6              #" << endl;
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
                informar(gremio, inter, n);
                *leu = 1;
                break;
            case 2:
                system("cls");
                if(*leu == 0)
                    cout << "� necess�rio informar os gols primeiro!" << endl << endl;
                else{
                    mostrar(gremio, inter, n);
                    cout << endl;
                }
                break;
            case 3:
                system("cls");
                if(*leu == 0)
                    cout << "� necess�rio informar os gols primeiro!" << endl << endl;
                else {
                    gols(gremio, inter, n);
                    cout << endl;
                }
                break;
            case 4:
                system("cls");
                if(*leu == 0)
                    cout << "� necess�rio informar os gols primeiro!" << endl << endl;
                else {
                    empate(gremio, inter, n);
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

void informar(int *g, int *i, int *jogos){
    int *k = new int;

    cout << "Op��o 1 - INFORMAR GOLS POR JOGO" << endl << endl;

    while(*k < *jogos){
        cout << "Informe os gols marcado pelo Internacional no jogo " << (*k + 1) << ": ";
        cin >> *i;
        fflush(stdin);
        i++;
        (*k)++;
    }

    i -= *k;
    *k = 0;

    cout << endl;

    while(*k < *jogos){
        cout << "Informe os gols marcado pelo Gr�mio no jogo " << (*k + 1) << ": ";
        cin >> *g;
        fflush(stdin);
        g++;
        (*k)++;
    }

    g -= *k;
    *k = 0;

}

void mostrar(int *g, int *i, int *jogos){
    int *k = new int;

    cout << "Op��o 2 - MOSTAR GOLS DE CADA TIME EM CADA PARTIDA" << endl << endl;

    cout << "Gols do Internacional: ";
    while(*k < *jogos){
        cout << *i << " ";
        i++;
        (*k)++;
    }

    i -= *k;
    *k = 0;

    cout << endl;

    cout << "Gols do Gr�mio: ";
    while(*k < *jogos){
        cout << *g << " ";
        g++;
        (*k)++;
    }

    g -= *k;
    *k = 0;
}

void gols(int *g, int *i, int *jogos){
    int *k = new int;
    int *somaI = new int;
    int *somaG = new int;

    cout << "Op��o 3 - SOMA DOS GOLS DO INTERNACIONAL E GR�MIO" << endl << endl;

    while(*k < *jogos){
        *somaI += *i;
        i++;
        (*k)++;
    }

    i -= *k;
    *k = 0;

    while(*k < *jogos){
        *somaG += *g;
        g++;
        (*k)++;
    }

    cout << "Soma dos gols do Internacional: " << *somaI << endl;
    cout << "Soma dos gols do Gr�mio: " << *somaG << endl;
}

void empate(int *g, int *i, int *jogos){
    int *k = new int;
}
