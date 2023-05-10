#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *n = new int;
    int *i = new int;
    int *p = &*i;

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
        *somai += *inter;
        inter++;
        (*i)++;
    }

    inter -= *i;
    *i = 0;

    system("cls");

    cout << "Número de jogos: " << *n << endl << endl;

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
    cout << "Soma gols Internacional: " << *somai << endl;
    cout << "Soma gols Grêmio: " << *somag << endl << endl;

    ///Maior percentual de vitórias
    float *pinter = new float;
    float *pgremio = new float;
    float *pempate = new float;

    *pinter = (*vinter / *n) * 100;
    *pgremio = (*vgremio / *n) * 100;
    *pempate = (*empates / *n) * 100;

    if(*vinter > *vgremio)
        cout << "A maior taxa de vitória é do Internacional: " << *pinter << "%" << endl;
    else if(*vinter < *vgremio)
        cout << "A maior taxa de vitória é do Grêmio: " << *pgremio << "%" << endl;
    else if(*vinter == *vgremio)
        cout << "A maior taxa é de empate: " << *pempate << "%" << endl;

    cout << endl;

    ///Média de gols por partida
    float *media = new float[*n];

    cout << "Média de gols por partida: ";
    while(*i < *n){
        *media = (*gremio + *inter);
        *media = *media / 2;
        cout << *media << " ";
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

    while(*p < *n){
        if(*maiorg < *gremio){
            *maiorg = *gremio;
            *posG = *p;
            }
        gremio++;
        (*p)++;
    }

    gremio -= *p;
    *p = 0;

    cout << "Numero da partida com maior número de gols marcado pelo Grêmio: " << *posG + 1 << endl;

    ///Partida com maior nº de gols do inter
    int *maiori = new int(0);
    int *posi = new int;

    while(*p < *n){
        if(*maiori < *inter){
            *maiori = *inter;
            *posi = *p;
            }
        inter++;
        (*p)++;
    }

    cout << "Numero da partida com maior número de gols marcado pelo Grêmio: " << *posi + 1 << endl;


    delete n;
    delete i;
    delete somai;
    delete somag;
    delete posG;
    delete posi;
    delete [] gremio;
    delete [] inter;
    delete [] media;
}
