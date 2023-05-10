#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void gerar_vetor(int **pv, int **t);
void mostra_vetor(int **pv, int **t);
void Maior_numero(int **pv, int **t);

main()
{
    setlocale(LC_ALL, "Portuguese");
    int *tam = new int;

    cout << "Informe o tamanho do vetor: ";
    cin >> *tam;
    fflush(stdin);

    int *pvet = new int[*tam];

    gerar_vetor(&pvet, &tam);

    mostra_vetor(&pvet, &tam);

    Maior_numero(&pvet, &tam);

    delete [] pvet;
}

void gerar_vetor(int **pv, int **t)
{

    srand(time(NULL));
    for(int *i = new int(0); *i < **t; (*i)++)
    {

        (*((*pv)+*i)) = rand() % 50;
        if(*i == **t)
            delete i;
    }

}

void mostra_vetor(int **pv, int **t)
{
    int *x = new int;
    for(*x = 0; *x < **t; (*x)++)
    {
        cout << (*((*pv)+*x)) << " | ";
    }
    delete x;
}

void Maior_numero(int **pv, int **t)
{
    int *i = new int;
    int *maior = new int;
    int *cont = new int(0);

    for( *i = 0; *i < **t; (*i)++ )
    {
        if( **pv > *maior)
            *maior = **pv;
            (*pv)++;
    }

    (*pv) -= *i;
    delete i;

    for( *i = 0; *i < **t; (*i)++ )
    {
        if(*maior == **pv)
            (*cont)++;

            (*pv)++;
    }

    (*pv) -= *i;


    cout << endl;
    if ( *cont == 1 )
     cout << "O número " << *maior << " ocorreu " << *cont << " vez no vetor " << endl;
    else
    cout << "O número " << *maior << " ocorreu " << *cont << " vezes no vetor " << endl;
}
