#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void gerar(int *pv);
void mostrar(int *pv);
void pares(int *pv);
void impares(int *pv);

main(){
    setlocale(LC_ALL, "Portuguese");

    int *pvet = new int[10];
    int menu = -1, leu = 0;


    while(menu != 0){
        system("cls");
        cout << "##############MENU##############" << endl;
        cout << "#                              #" << endl;
        cout << "# 0 - Sair                     #" << endl;
        cout << "# 1 - Gerar valores            #" << endl;
        cout << "# 2 - Mostrar                  #" << endl;
        cout << "# 3 - Mostrar números pares    #" << endl;
        cout << "# 4 - Mostrar números ímpares  #" << endl;
        cout << "#                              #" << endl;
        cout << "################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0:
                system("cls");
                cout << "Programa Finalizado!" << endl << endl;
                break;
            case 1:
                gerar(pvet);
                leu = 1;
                cout << "Vetor gerado!" << endl << endl;
                break;
            case 2:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else{
                    mostrar(pvet);
                    cout << endl;
                }
                break;
            case 3:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    pares(pvet);
                    cout << endl;
                }
                break;
            case 4:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    impares(pvet);
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

void gerar(int *pv){
    int *i = new int;

    srand(time(NULL));

    for(*i = 0; *i < 10; (*i)++){
        *pv = rand() % 100;

        pv++;
    }

    cout << "OPÇÃO 1 - GERAR VETOR" << endl << endl;

    delete i;
}

void mostrar(int *pv){
    int *i = new int;

    cout << "OPÇÃO 2 - EXIBIR O VETOR" << endl << endl;

    cout << "V: [ ";

    for(*i = 0; *i < 10; (*i)++){
        cout << *pv << " ";

        pv++;
    }

    cout << "]" << endl << endl;

    delete i;
}

void pares(int *pv){
    int *i = new int;

    cout << "OPÇÃO 3 - EXIBIR OS VALORES PARES" << endl << endl;

    cout << "Pares [ ";

    for(*i = 0; *i < 10; (*i)++) {
        if(*pv % 2 == 0)
            cout << *pv << " ";

        pv++;
    }

    cout << "]" << endl << endl;

    delete i;
}


void impares(int *pv){
    int *i = new int;

    cout << "Impares [";

    for(*i = 0; *i < 10; (*i)++) {
        if(*pv % 2 != 0)
            cout << *pv << " ";

        pv++;
    }

    cout << "]" << endl << endl;

    delete i;
}
