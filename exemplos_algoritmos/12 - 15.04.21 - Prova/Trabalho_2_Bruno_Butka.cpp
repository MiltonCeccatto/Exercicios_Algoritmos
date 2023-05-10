#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>

using namespace std;

///Programa realizado com alocação dinâmica, ponteiros e aritmética de ponteiros;
///Como pedido, informar o número de jogos, a seguir quantos gols de cada time;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *n = new int;
    int *i = new int;

    cout << "Informe o número de jogos do clássico: ";
    cin >> *n;
    fflush(stdin);

    cout << endl;

    int *gremio = new int[*n];
    int *inter = new int[*n];

    ///Gols do gremio
    int *somag = new int;

    while(*i < *n){
        cout << "Informe os gols marcado pelo Grêmio no jogo " << (*i + 1) << ": ";
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

    cout << "Número de grenais: " << *n << endl << endl;

    ///Exibição gols do gremio
    cout << "Gols feitos pelo Grêmio:        ";
    while(*i < *n){
        cout << *gremio << " ";
        gremio++;
        (*i)++;
    }

    gremio -= *i;
    *i = 0;

    cout << endl;

    ///Exibição gols do inter
    cout << "Gols feitos pelo Internacional: ";
    while(*i < *n){
        cout << *inter << " ";
        inter++;
        (*i)++;
    }

    inter -= *i;
    *i = 0;

    cout << endl << endl;

    ///Vitórias do inter, gremio e empates
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

    cout << "Número de vitórias do Internacional: " << *vinter << endl;
    cout << "Número de vitórias do Grêmio: " << *vgremio << endl;
    cout << "Número de empates: " << *empates << endl << endl;

    ///Soma dos gols de cada time
    cout << "Soma de gols Internacional: " << *somai << endl;
    cout << "Soma de gols Grêmio: " << *somag << endl << endl;

    ///Maior percentual de vitórias
    float *pinter = new float;
    float *pgremio = new float;
    float *pempate = new float;

    *pinter = (*vinter / *n) * 100;
    *pgremio = (*vgremio / *n) * 100;
    *pempate = (*empates / *n) * 100;

    if(*pinter > *pgremio)
        cout << "A maior taxa de vitória é do Internacional: " << *pinter << "%" << endl;
    else if(*pinter < *pgremio)
        cout << "A maior taxa de vitória é do Grêmio: " << *pgremio << "%" << endl;
    else if(*pinter == *pgremio)
        cout << "Mesma taxa de vitória: " << *pgremio << "%" << endl;

    cout << endl;

    ///Média de gols por partida
    float *media = new float[*n];

    cout << "Média de gols por partida: ";
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

    ///Partida com maior nº de gols do gremio
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

    cout << "Numero da partida com maior número de gols marcado pelo Grêmio: " << *posG + 1 << endl;

    ///Partida com maior nº de gols do inter
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

    cout << "Numero da partida com maior número de gols marcado pelo Internacional: " << *posi + 1 << endl << endl;

    system("pause");

    ///O recomendado é que a cada memória alocada dinamicamente você execute um delete para liberar como memória livre;
    ///Claro que ao encerrar o programa essa memória é liberada pelo gerenciador do sistema operacional.
    delete n, i, somai, somag, posG, posi, maiorg, maiori;
    delete [] gremio;
    delete [] inter;
    delete [] media;
}

