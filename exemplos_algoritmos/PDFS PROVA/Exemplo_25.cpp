#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

struct cad
{
    char nome[100];
    int idade;
    float salario;
};


void mostra(cad *pvet, int *t);
void leitura(cad *pvet, int *t);

main()
{
    int *tam = new int;
    cout << "Informe o tamanho do vetor: ";
    cin >> *tam;
    fflush(stdin);


    cad *pvet = new cad[*tam];

    leitura(pvet, tam);

    mostra(pvet, tam);
}

void leitura(cad *pvet, int *t)
{
    int *x = new int;
    for(*x = 0; *x < *t; (*x)++)
    {
        cout << "Informe o nome: ";
        gets(pvet->nome);
        fflush(stdin);
        cout << "Informe a idade: ";
        cin >> pvet->idade;
        fflush(stdin);
        cout << "Informe o salario: ";
        cin >> pvet->salario;
        fflush(stdin);
        pvet++;
    }
    pvet -= *x;//volta a posição inicial do vetor na memória
}

void mostra(cad *pvet, int *t)
{
    int *i = new int;
    for(*i = 0; *i < *t; (*i)++)
    {
        cout << (*pvet).nome << ", ";
        cout << (*pvet).idade << ", ";
        cout << (*pvet).salario << "\n";
        pvet++;
    }
    pvet -= *i; //volta a posição inicial do vetor na memória
}
