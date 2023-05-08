#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

#define TAM 5

using namespace std;

void GeraValores(int M[][TAM])
{
    int numero;
    int vet[TAM*TAM];
    int i = 0,igual;
    srand(time(NULL));

    do
    {
        vet[i] = rand() % 100; // sorteia um número
        igual = 0;
        for(int j = 0; j < i; j++)  // percorre a parte do vetor já preenchida
        {
            if(vet[j] == vet[i])
                igual = 1; // número repetido
        }

        if(igual == 0) // significa que o elemento não se repetiu
            i++;
    }
    while(i < TAM*TAM);   // enquanto não for sorteado 25 números diferentes

    i=0;

    for(int lin = 0; lin < TAM; lin++)
    {
        for(int col= 0; col < TAM; col++)
        {
            M[lin][col] = vet[i];

            i++;
        }
    }

}


void Mostrar(int M[][TAM])
{
    for(int linha = 0; linha < TAM; linha++)
    {
        for(int coluna= 0; coluna < TAM; coluna++)
        {
            cout << M[linha][coluna] << "\t";
        }
        cout << endl;
    }

}

void DiagonalP(int vetor[], int matriz[][TAM])
{
    int a = 0;
    for (int i = 0; i< TAM; i++)
    {
        for (int j =0; j < TAM; j++)
        {
            if (i == j)
            {
                vetor[a] = matriz[i][j];
                a++;
            }
        }

    }

    cout << "Diagonal principal: ";
    for (int i = 0; i<TAM; i++)
    {
        if (i == 4)
            cout << vetor[i];
        else
            cout << vetor[i] << ", ";
    }
    cout << endl;


}

void MaiorValor(int matriz[][TAM])
{
    int maior = 0, linha, coluna;
    for(int lin =0; lin < TAM; lin++)
    {
        for(int col = 0; col < TAM; col++)
        {
            if (matriz[lin][col] > maior)
            {
                maior = matriz[lin][col];
                linha = lin;
                coluna = col;

            }
        }
    }

    cout << "O maior número é " << maior  << " e esta na posição: " << "LINHA: "<< linha << " "<< "COLUNA: " << coluna << endl;
}

void DiagonalS(int matriz[][TAM], int vetor[])
{
    int a = 0;
    for (int i = 0; i< TAM; i++)
    {
        for (int j =0; j < TAM; j++)
        {
            if (i + j == TAM - 1)
            {
                vetor[a] = matriz[i][j];
                a++;
            }
        }

    }

    cout << "Diagonal Secudária: ";
    for (int i = 0; i < TAM; i++)
    {
        if (i == TAM-1)
            cout << vetor[i];
        else
            cout << vetor[i] << ", ";
    }
    cout << endl;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Matriz[TAM][TAM];
    int numero;
    int vet[TAM*TAM];
    int ElementosDP[TAM];
    int ElementosDS[TAM];
    int menu;
    int continua = 1;
    int foiGerado = 0;
    srand(time(NULL));

    cout << "##### MENU #####" << endl;
    cout << "1 - Gerar a matriz" << endl;
    cout << "2 - Mostrar a matriz " << endl;
    cout << "3 - Mostrar os elementos da diagonal principal" << endl;
    cout << "4 - Mostrar os elementos da diagonal secundária" << endl;
    cout << "5 - Mostrar o maior valor e sua posição " << endl;
    cout << "0 - Para sair do programa" << endl;
    do
    {
        cout << "MENU: ";
        cin >> menu;

        switch(menu)
        {
        case 1 :
            GeraValores(Matriz);
            cout << endl;
            cout << "Matriz gerada !! " << endl;
            foiGerado = 1;
            break;
        case 2 :
        {
            if (foiGerado == 0)
            {
                cout << "Primeiro gere a matriz !!!"<< endl;
                break;
            }
            else
            {
                Mostrar(Matriz);
                break;
            }
        }
        case 3 :
        {
            if (foiGerado == 0)
            {
                cout << "Primeiro gere a matriz !!!"<< endl;
                break;
            }
            else
            {
                DiagonalP(ElementosDP,Matriz);
                break;
            }
        }
        case 4 :
        {
            if (foiGerado == 0)
            {
                cout << "Primeiro gere a matriz !!!"<< endl;
                break;
            }
            else
            {
                DiagonalS(Matriz, ElementosDS);
                break;
            }
        }
        case 5 :
        {
            if (foiGerado == 0 )
            {
                cout << "Primeiro gere a matriz !!!" << endl;
                break;
            }
            else
            {
                MaiorValor(Matriz);
                break;
            }
        }
        case 0 :
            continua = 0;
            break;
        default :
            cout << "  Valor inválido !!! " << endl;
            break;
        }

    }
    while(continua != 0);
}




