/*6 – Escreva um programa para manipular um vetor de 10 posições de números inteiros, o sistema deve
permitir as seguintes opções:
0 – Sair
1 – Gerar valores para o vetor entre 25 e 50
2 – Mostrar os valores do vetor, separando cada elemento com uma vírgula
3 – Mostrar o percentual de números pares no vetor
4 – Mostrar os números ímpares no vetor
5 – Mostrar a média dos elementos do vetor com uma casa decimal
OBS: este exercício deve ser resolvido usando alocação dinâmica de memória, ponteiros e aritmética de
ponteiro*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>


using namespace std;
void GerarValores(int **pvet, int **tam);
void MostrarValores(int **pvet, int **tam);
float PercentualPares(int **pvet, int **tam);
void NumerosImpares(int **pvet, int **tam);
float Media(int **pvet, int **tam);

main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int *tamanho = new int (10);
    int *pvetor = new int[*tamanho];

    GerarValores(&pvetor, &tamanho);
    MostrarValores(&pvetor, &tamanho);
    cout << "O percentual de pares é " << PercentualPares(&pvetor, &tamanho) << " %" << endl;

    cout << endl;

    NumerosImpares(&pvetor, &tamanho);

    cout << endl << endl;

    cout << fixed;
    cout.precision(1);
    cout << "A média dos elementos é " << Media(&pvetor, &tamanho) << endl;
}

void GerarValores(int **pvet, int **tam)
{
    int *i = new int (0);

    for (*i; *i < **tam; (*i)++)
    {
        **pvet = rand() % 25 + 25;
        (*pvet)++;
    }

    (*pvet) -= **tam;

    cout << "Valores gerados !! " << endl << endl;

}

void MostrarValores(int **pvet, int **tam)
{
    int *i = new int(0);
    for (*i; *i < **tam; (*i)++)
    {

        if ((**tam - 1) == *i )
            cout << **pvet;
        else
            cout << **pvet << " , ";

        (*pvet)++;
    }
    (*pvet) -= **tam;

    cout << endl << endl;
}


float PercentualPares(int **pvet, int **tam)
{

    int *contPar = new int (0);
    int *i = new int (0);

    for (*i; *i < **tam; (*i)++)
    {
        if((**pvet)%2 == 0 )
        (*contPar)++;

        (*pvet)++;
    }
     (*pvet) -= **tam;

    return (100.0*(*contPar))/(**tam);


}

void NumerosImpares(int **pvet, int **tam)
{
    int *i = new int (0);

    for (*i; *i < **tam; (*i)++)
    {
        if ( (**pvet) % 2 != 0)
        {
            if(*i == (**tam - 1))
                cout << **pvet;
            else
                cout << **pvet << ", ";
        }
        (*pvet)++;
    }

    (*pvet) -= **tam;
}

float Media(int **pvet, int **tam)
{
    int *i = new int (0);
    float *soma = new float(0);

    for(*i; *i < **tam; (*i)++)
    {
        *soma += **pvet;
        (*pvet)++;
    }

    return (*soma)/(**tam);
}

