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

    cout << "N�mero de jogos: " << *n << endl << endl;

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
    cout << "Soma gols Internacional: " << *somai << endl;
    cout << "Soma gols Gr�mio: " << *somag << endl << endl;

    ///Maior percentual de vit�rias
    float *pinter = new float;
    float *pgremio = new float;
    float *pempate = new float;

    *pinter = (*vinter / *n) * 100;
    *pgremio = (*vgremio / *n) * 100;
    *pempate = (*empates / *n) * 100;

    if(*vinter > *vgremio)
        cout << "A maior taxa de vit�ria � do Internacional: " << *pinter << "%" << endl;
    else if(*vinter < *vgremio)
        cout << "A maior taxa de vit�ria � do Gr�mio: " << *pgremio << "%" << endl;
    else if(*vinter == *vgremio)
        cout << "A maior taxa � de empate: " << *pempate << "%" << endl;

    cout << endl;

    ///M�dia de gols por partida
    float *media = new float[*n];

    cout << "M�dia de gols por partida: ";
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

    ///Partida com maior n� de gols do gremio
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

    cout << "Numero da partida com maior n�mero de gols marcado pelo Gr�mio: " << *posG + 1 << endl;

    ///Partida com maior n� de gols do inter
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

    cout << "Numero da partida com maior n�mero de gols marcado pelo Gr�mio: " << *posi + 1 << endl;


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
