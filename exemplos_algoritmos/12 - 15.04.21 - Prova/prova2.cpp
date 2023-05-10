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
    int *sim = new int;

    cout << "Informe o número de jogos do clássico: ";
    cin >> *n;
    fflush(stdin);

    cout << endl;

    int *gremio = new int[*n];
    int *inter = new int[*n];

    ///Gols do gremio

    do{
        cout << "Informe os gols marcado pelo Grêmio no jogo " << (*i + 1) << ": ";
        cin >> *gremio;
        cout << "Informar mais um jogo (1 para sim, qualquer outro valor para não): ";
        cin >> *sim;
        gremio++;
        (*i)++;
    } while(*sim == 1);
        cout << "teste"<< endl;

    gremio -= *i;
    *i = 0;

    cout << endl;

    ///Gols do inter
    do{
        cout << "Informe os gols marcado pelo Internacional no jogo " << (*i + 1) << ": ";
        cin >> *inter;
        cout << "Informar mais um jogo (1 para sim, qualquer outro valor para não): ";
        cin >> *sim;
        gremio++;
        (*i)++;
    } while(*sim == 1);
        cout << "teste"<< endl;

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
    int *vinter = new int;
    int *vgremio = new int;
    int *empates = new int;

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

    vgremio -= *i;
    vinter -= *i;
    *i = 0;

    ///Maior percentual de vitórias
    int *pinter = new int;
    int *pgremio = new int;
    int *pempate = new int;

    *pinter = (*vinter / *n) * 100;

    cout << "Taxa de vitória do inter: " << *pinter << "%";



}
