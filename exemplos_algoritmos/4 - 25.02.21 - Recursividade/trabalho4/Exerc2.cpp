#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>

#define TAM 10

using namespace std;

void gerar(int V[]);
void mostrar(int V[]);
void ordem(int V[]);
float media(int V[]);
void menorMaior(int V[]);
void trocarOrdem(int V[]);


main(){
    setlocale(LC_ALL, "Portuguese");

    int menu = -1, leu = 0;
    int Vet[TAM];

    do{
        system("cls");
        cout << "######MENU############" << endl;
        cout << "# 0 - Sair           #" << endl;
        cout << "# 1 - Gerar          #" << endl;
        cout << "# 2 - Mostrar        #" << endl;
        cout << "# 3 - Ordem Crescente#" << endl;
        cout << "# 4 - Inverter Ordem #" << endl;
        cout << "# 5 - Maior e Menor  #" << endl;
        cout << "# 6 - Média          #" << endl;
        cout << "######################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
            case 0:
                system("cls");
                    cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1:
                system("cls");
                    gerar(&Vet[0]);
                    cout << "Vetor gerado!";
                leu = 1;
                break;
            case 2:
                system("cls");
                    if(leu == 0)
                        cout << "É necessário gerar os valores primeiro!";
                    else
                        mostrar(Vet);
                getchar();
                break;
            case 3:
                system("cls");
                    if(leu == 0)
                        cout << "É necessário gerar os valores primeiro!";
                    else {
                        ordem(Vet);
                    }
                getchar();
                break;
            case 4:
                system("cls");
                    if(leu == 0)
                        cout << "É necessário gerar os valores primeiro!";
                    else {
                        trocarOrdem(Vet);
                    }
                getchar();
                break;
            case 5:
                system("cls");
                    if(leu == 0)
                        cout << "É necessário gerar os valores primeiro!";
                    else {
                        menorMaior(Vet);
                    }
                getchar();
                break;
            case 6:
                system("cls");
                    if(leu == 0)
                        cout << "É necessário gerar os valores primeiro!";
                    else {
                        cout << "A média é: " << media(Vet);
                    }
                getchar();
                break;
        }

    }while(menu != 0);
}

void gerar(int V[]){
    srand(time(NULL));

    for(int i = 0; i < TAM; i++) {
        V[i] = rand()%100;
    }
}

void mostrar(int V[]){
    cout << "V [";
    for (int i = 0; i < TAM; i++) {
        cout << V[i];
        if(i < TAM - 1)
            cout << ", ";
        else
            cout << "]" << endl;
    }
}

void ordem(int V[]){
    int trocou, aux;

    do{
        trocou = 0;
        for (int j = 0; j < TAM - 1; j++){
            if (V[j] > V[j + 1]){
                aux = V[j];
                V[j] = V[j + 1];
                V[j + 1] = aux;
                trocou = 1;
            }
        }
    }while(trocou == 1);

    cout << "V [";
    for (int i = 0; i < TAM; i++) {
        cout << V[i];
        if(i < TAM - 1)
            cout << ", ";
        else
            cout << "]" << endl;
    }
}

float media(int V[]){
    float soma = 0, resultado = 0;

    for(int i = 0; i < TAM; i++){
        soma = soma + V[i];
    }

    resultado = soma / TAM;

    return resultado;
}

void menorMaior(int V[]){
    int maior, menor;

    maior = V[0];
    menor = V[0];

    for(int i = 0; i < TAM; i++) {
        if(V[i] > maior)
            maior = V[i];

        if(V[i] < menor)
            menor = V[i];
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
}

void trocarOrdem(int V[]){
    int aux;

    for(int i = 0; i < TAM / 2; i++){
        aux = V[i];
        V[i] = V[TAM - i - 1];
        V[TAM - i - 1] = aux;
    }

    cout << "V [";
    for (int i = 0; i < TAM; i++) {
        cout << V[i];
        if(i < TAM - 1)
            cout << ", ";
        else
            cout << "]" << endl;
    }


}
