#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

#define TAM 7

using namespace std;


void MatrizSimetrica(int matriz[][TAM])
{

    for(int lin = 0; lin < TAM; lin++)
    {
        for (int col = 0; col < TAM; col++)
        {
            matriz[lin][col] = 1;
        }
    }


    cout << "Matriz simétrica criada !!" << endl;


}

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

void DiagonalP(int diagonalPri[], int matriz[][TAM], int maiores[])
{

    for(int linha = 0; linha < TAM; linha++)
    {
        for(int coluna= 0; coluna < TAM; coluna++)
        {
            cout << matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }



    int linha = 0, maior = 0;
    int col[TAM], lin[TAM];

    // salva os valores da diaginal principal
    for (int i = 0; i< TAM; i++)
    {
        for (int j =0; j < TAM; j++)
        {
            if (i == j)
            {
                diagonalPri[linha] = matriz[i][j];

            }
        }
        linha++;
    }

    // salva os maiores valores de cada linha
    linha = 0;
    for (int i = 0; i< TAM; i++)
    {
        for (int j =0; j < TAM; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                maiores[linha] = maior;
                lin[linha] = i;
                col[linha] = j;
            }
        }
        linha++;
        maior = 0;

    }

    linha = 0;
    for (int i = 0; i< TAM; i++)
    {
        for (int j =0; j < TAM; j++)
        {
            if (i == j)
            {
                matriz[i][j] = maiores[linha];
                matriz[lin[linha]][col[linha]] = diagonalPri[linha];
            }
        }
        linha++;

    }

    linha = 0;
    cout << endl << endl;
    for(int linha = 0; linha < TAM; linha++)
    {
        for(int coluna= 0; coluna < TAM; coluna++)
        {
            cout << matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }
    cout << endl;

}

void eSimetrica(int matriz[][TAM])
{
    int simetrica = 0;
    for(int lin =0; lin < TAM; lin++)
    {
        for(int col = 0; col < TAM; col++)
        {
            if (matriz[lin][col] != matriz[col][lin])
            {
                simetrica++;
            }
        }
    }


    if(simetrica != 0 )
        cout << "A matriz não é simétrica " << endl;
    else
        cout << "A matriz é simétrica " << endl;
}

void ElementosCM(int matriz[][TAM])
{
    int a = 0;
    int acima[((TAM*TAM)-TAM)/2];
    int abaixo[((TAM*TAM)-TAM)/2];
    for (int i = 0; i< TAM; i++)
    {
        for (int j =0; j < TAM; j++)
        {
            if (i < j)
            {
                acima[a] = matriz[i][j];
                a++;
            }

        }

    }
    a=0;
    for (int i = 0; i< TAM; i++)
    {
        for (int j =0; j < TAM; j++)
        {
            if (i > j)
            {
                abaixo[a] = matriz[i][j];
                a++;
            }

        }

    }

    cout << "ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL: " << endl;
    for (int i = 0; i < (((TAM*TAM)-TAM)/2); i++)
    {
        cout << acima[i] << ", ";
    }
    cout << endl;

    cout << "ELEMENTOS ABAIXO DA DIAGONAL PRINCIPAL: " << endl;
    for (int i = 0; i < ((TAM*TAM)-TAM)/2; i++)
    {

        cout << abaixo[i] << ", ";
    }
    cout << endl;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Matriz[TAM][TAM];
    int numero;
    int ElementosDP[TAM];
    int MaioresValores[TAM];
    int ElementosDS[TAM];
    int menu;
    int continua = 1;
    int foiGerado = 0;
    srand(time(NULL));

    cout << "##### MENU #####" << endl;
    cout << "1 - Gerar a matriz" << endl;
    cout << "2 - Mostrar a matriz " << endl;
    cout << "3 - Troca o maior elemento da linha com o elemento da diagonal principal " << endl;
    cout << "4 - Diz se a matriz é simétrica " << endl;
    cout << "5 - Cria uma matriz simétrica " << endl;
    cout << "6 - Diz quais elementos estão acima e abaixo da diagonal principal " << endl;
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
                DiagonalP(ElementosDP,Matriz, MaioresValores);
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
                eSimetrica(Matriz);
                break;
            }
        }
        case 5 :
            MatrizSimetrica(Matriz);
            foiGerado = 1;
            break;
        case 6 :
        {
            if (foiGerado == 0 )
            {
                cout << " Primeiro gere a matriz !!!" << endl;
                break;
            }
            else
            {
                ElementosCM(Matriz);
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




