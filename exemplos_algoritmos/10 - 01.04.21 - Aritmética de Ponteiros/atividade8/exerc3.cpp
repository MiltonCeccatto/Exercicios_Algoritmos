#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

#define TAM 20

using namespace std;

void gerar(int *Vetor1);
void preencher(int *Vetor1, int *Vetor2);
void mostrar(int *Vetor1, int *Vetor2);
void contas(int *Vetor1);

main(){
    setlocale(LC_ALL, "Portuguese");

    int menu = -1, leu = 0, preenc = 0;
    int V1[20], V2[20], *vet1, *vet2;
    vet1 = V1;
    vet2 = V2;

    while(menu != 0){
        system("cls");
        cout << "################################################################" << endl;
        cout << "# 0 - Sair                                                     #" << endl;
        cout << "# 1 - Gerar V1                                                 #" << endl;
        cout << "# 2 - Preencher V2 com os valores de V1 de maneira inversa     #" << endl;
        cout << "# 3 - Mostrar                                                  #" << endl;
        cout << "# 4 - Maior, menor e média de V1                               #" << endl;
        cout << "################################################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0:
                system("cls");
                cout << "Programa Finalizado!" << endl << endl;
                break;
            case 1:
                gerar(vet1);
                leu = 1;
                cout << "Vetor gerado!" << endl << endl;
                break;
            case 2:
                system("cls");
                preenc = 1;
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else{
                    preencher(vet1, vet2);
                    cout << endl;
                }
                break;
            case 3:
                system("cls");
                if(leu == 0 || preenc == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    mostrar(vet1, vet2);
                    cout << endl;
                }
                break;
            case 4:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    contas(vet1);
                    cout << endl;
                }
                break;
            default:
                system("cls");
                cout << "Opção inválida!" << endl << endl;
        }
        system("pause");
        system("cls");
    }
}

void gerar(int *Vetor1){
    system("cls");

    srand(time(NULL));

    int i = 0;

    while(i < TAM){
        *Vetor1 = rand() % 100;
        Vetor1++;
        i++;
    }

    cout << "OPÇÃO 1 - GERAR VETOR" << endl << endl;

}

void preencher(int *Vetor1, int *Vetor2){
    cout << "OPÇÃO 3 - PREENCHER V2 COM V1 INVERSO" << endl << endl;

    int i = 0;

    Vetor1 += TAM - 1;
    while(i < TAM){
        *Vetor2 = *Vetor1;
        Vetor2++;
        Vetor1--;
        i++;
    }

    Vetor1 -= i;
    Vetor2 -=i;
    i = 0;
}

void mostrar(int *Vetor1, int *Vetor2){
    cout << "OPÇÃO 3 - EXIBIR V1 E V2" << endl << endl;

    int i = 0;

    cout << "V1: ";
    while(i < TAM){
        cout << *Vetor1 << " ";
        Vetor1++;
        i++;
    }

    Vetor1 -= i;
    i = 0;

    cout << endl;

    cout << "V2: ";
    while(i < TAM){
        cout << *Vetor2 << " ";
        Vetor2++;
        i++;
    }


    cout << endl;
}

void contas(int *Vetor1){
    cout << "OPÇÃO 4 - MAIOR, MENOR E MÉDIA DE V1" << endl << endl;

    int i = 0;
    int maior = 0, menor = 100;
    float media = 0;

    while(i < TAM){
        if(*Vetor1 > maior)
            maior = *Vetor1;
        if(*Vetor1 < menor)
            menor = *Vetor1;

        media += *Vetor1;

        Vetor1++;
        i++;
    }

    media = media / TAM;

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Média: " << media << endl;

}
