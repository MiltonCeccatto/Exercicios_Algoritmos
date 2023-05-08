#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

#define LINHA 3
#define COLUNA 5

using namespace std;
void GeraValores(int M[][COLUNA])
{
    int numero;
    int vet[LINHA*COLUNA];
    int i = 0,igual;
    srand(time(NULL));

    do
    {

        numero = rand() % 50;// sorteia um número
        if (numero%2 == 0){
            vet[i] = numero; // se o número for par ele salva

        igual = 0;
        for(int j = 0; j < i; j++)  // percorre a parte do vetor já preenchida
        {
            if(vet[j] == vet[i])
                igual = 1; // número repetido
        }

        if(igual == 0) // significa que o elemento não se repetiu
            i++;
    }
    }
    while(i < LINHA*COLUNA);   // enquanto não for sorteado 25 números diferentes

    i=0;

    for(int lin = 0; lin < LINHA; lin++) //Adiciona os números do vetor na matriz
    {
        for(int col= 0; col < COLUNA; col++)
        {
            M[lin][col] = vet[i];

            i++;
        }
    }
}

void Exibir(int matriz[][COLUNA]){

    for(int linha = 0; linha < LINHA; linha++){
        for (int coluna = 0; coluna < COLUNA; coluna++){
            cout << matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }
}

void Transposta(int matriz[][COLUNA]){
    int M[COLUNA][LINHA];

     for(int linha = 0; linha < LINHA; linha++){
        for (int coluna = 0; coluna < COLUNA; coluna++){
            M[coluna][linha] = matriz[linha][coluna];
        }
    }


    for(int linha = 0; linha < COLUNA; linha++){
        for (int coluna = 0; coluna < LINHA; coluna++){
           cout << M[linha][coluna] << "\t";
        }
        cout << endl;
    }


}

void Menor(int M[][COLUNA]){

    int menor = M[0][0];

    for(int linha=0; linha<LINHA; linha++){
        for(int coluna=0; coluna<COLUNA;coluna++){
            if(M[linha][coluna] < menor)
                menor = M[linha][coluna];
        }
    }

    cout << "O menor valor é: " << menor << endl;
}

void Maior(int M[][COLUNA]){

    int maior = M[0][0];

    for(int linha=0; linha<LINHA; linha++){
        for(int coluna=0; coluna<COLUNA;coluna++){
            if(M[linha][coluna] > maior)
                maior = M[linha][coluna];
        }
    }

    cout << "O maior valor é: " << maior << endl;
}

void Media(int M[][COLUNA]){

    int media, soma =0;

    for(int linha=0; linha<LINHA; linha++){
        for(int coluna=0; coluna<COLUNA;coluna++){
            soma+=M[linha][coluna];
        }
    }

    media = soma/(LINHA*COLUNA);


    cout << "A média entre os valores é:  " << media << endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[LINHA][COLUNA];
    int continua = 0, menu, foiGerado=0;

    cout << "#### MENU ####" << endl;
    cout << "1 - Para gerar a matriz " << endl;
    cout << "2 - Para mostrar a matriz e sua transposta " << endl;
    cout << "3 - Para mostrar o maior valor, o menor e a média " << endl;
    cout << "0 - Para encerrar o programa " << endl;

    do{
        cout << "MENU: ";
        cin >> menu;

        switch(menu){
        case 1 :
            GeraValores(matriz);
            foiGerado = 1;
            cout << "Matriz gerada!!!"<< endl;
            break;
        case 2 :
            if (foiGerado == 0 ){
                cout << "Primeiro gere a matriz !!!" << endl;
                break;
            } else {
                Exibir(matriz);
                cout << endl;
                Transposta(matriz);
                break;
            }
        case 3 :
            if (foiGerado == 0){
                cout << "Primeiro gere a matriz !!!"<< endl;
                break;
            }else{
                Maior(matriz);
                cout << endl;
                Menor(matriz);
                cout << endl;
                Media(matriz);
                break;
            }
        case 0 :
            continua = 1;
            break;
        default:
            cout << "Valor inválido "<< endl;
        }
    }while(continua != 1);


}




