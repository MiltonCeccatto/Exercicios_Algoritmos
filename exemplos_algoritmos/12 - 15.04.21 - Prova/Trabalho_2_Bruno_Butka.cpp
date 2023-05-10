#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>

using namespace std;

///Programa realizado com aloca��o din�mica, ponteiros e aritm�tica de ponteiros;
///Como pedido, informar o n�mero de jogos, a seguir quantos gols de cada time;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *n = new int;
    int *i = new int;

    cout << "Informe o n�mero de jogos do cl�ssico: ";
    cin >> *n;
    fflush(stdin);

    cout << endl;

    int *gremio = new int[*n];
    int *inter = new int[*n];

    ///Gols do gremio
    int *somag = new int;

    while(*i < *n){
        cout << "Informe os gols marcado pelo Gr�mio no jogo " << (*i + 1) << ": ";
        cin >> *gremio;
        fflush(stdin);
        *somag += *gremio;
        gremio++;
        (*i)++;
    }

    gremio -= *i;
    *i = 0;

    cout << endl;

    ///Gols do inter
    int *somai = new int;

    while(*i < *n){
        cout << "Informe os gols marcado pelo Internacional no jogo " << (*i + 1) << ": ";
        cin >> *inter;
        fflush(stdin);
        *somai += *inter;
        inter++;
        (*i)++;
    }

    inter -= *i;
    *i = 0;

    system("cls");

    cout << "N�mero de grenais: " << *n << endl << endl;

    ///Exibi��o gols do gremio
    cout << "Gols feitos pelo Gr�mio:        ";
    while(*i < *n){
        cout << *gremio << " ";
        gremio++;
        (*i)++;
    }

    gremio -= *i;
    *i = 0;

    cout << endl;

    ///Exibi��o gols do inter
    cout << "Gols feitos pelo Internacional: ";
    while(*i < *n){
        cout << *inter << " ";
        inter++;
        (*i)++;
    }

    inter -= *i;
    *i = 0;

    cout << endl << endl;

    ///Vit�rias do inter, gremio e empates
    float *vinter = new float;
    float *vgremio = new float;
    float *empates = new float;

    while(*i < *n){
        if(*gremio > *inter){
            (*vgremio)++;
        } else if(*gremio < *inter){
            (*vinter)++;
        } else if(*gremio == *inter) {
            (*empates)++;
        }
        (*i)++;
        gremio++;
        inter++;
    }

    gremio -= *i;
    inter -= *i;
    *i = 0;

    cout << "N�mero de vit�rias do Internacional: " << *vinter << endl;
    cout << "N�mero de vit�rias do Gr�mio: " << *vgremio << endl;
    cout << "N�mero de empates: " << *empates << endl << endl;

    ///Soma dos gols de cada time
    cout << "Soma de gols Internacional: " << *somai << endl;
    cout << "Soma de gols Gr�mio: " << *somag << endl << endl;

    ///Maior percentual de vit�rias
    float *pinter = new float;
    float *pgremio = new float;
    float *pempate = new float;

    *pinter = (*vinter / *n) * 100;
    *pgremio = (*vgremio / *n) * 100;
    *pempate = (*empates / *n) * 100;

    if(*pinter > *pgremio)
        cout << "A maior taxa de vit�ria � do Internacional: " << *pinter << "%" << endl;
    else if(*pinter < *pgremio)
        cout << "A maior taxa de vit�ria � do Gr�mio: " << *pgremio << "%" << endl;
    else if(*pinter == *pgremio)
        cout << "Mesma taxa de vit�ria: " << *pgremio << "%" << endl;

    cout << endl;

    ///M�dia de gols por partida
    float *media = new float[*n];

    cout << "M�dia de gols por partida: ";
    while(*i < *n){
        *media = (*gremio + *inter);
        *media = *media / 2;
        cout << *media << "  ";
        media++;
        gremio++;
        inter++;
        (*i)++;
    }

    media -= *i;
    gremio -= *i;
    inter -= *i;
    *i = 0;

    cout << endl << endl;

    ///Partida com maior n� de gols do gremio
    int *maiorg = new int(0);
    int *posG = new int;

    while(*i < *n){
        if(*maiorg < *gremio){
            *maiorg = *gremio;
            *posG = *i;
            }
        gremio++;
        (*i)++;
    }

    gremio -= *i;
    *i = 0;

    cout << "Numero da partida com maior n�mero de gols marcado pelo Gr�mio: " << *posG + 1 << endl;

    ///Partida com maior n� de gols do inter
    int *maiori = new int(0);
    int *posi = new int;

    while(*i < *n){
        if(*maiori < *inter){
            *maiori = *inter;
            *posi = *i;
            }
        inter++;
        (*i)++;
    }

    cout << "Numero da partida com maior n�mero de gols marcado pelo Internacional: " << *posi + 1 << endl << endl;

    system("pause");

    ///O recomendado � que a cada mem�ria alocada dinamicamente voc� execute um delete para liberar como mem�ria livre;
    ///Claro que ao encerrar o programa essa mem�ria � liberada pelo gerenciador do sistema operacional.
    delete n, i, somai, somag, posG, posi, maiorg, maiori;
    delete [] gremio;
    delete [] inter;
    delete [] media;
}

