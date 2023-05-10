#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void gerar(int *v, int *v2, int *t);
void mostrar(int *v, int *t);
void troca(int *v, int *v2, int *t);

main(){
    setlocale(LC_ALL, "Portuguese");

    int *tam = new int;
    int menu = -1, leu = 0;

    cout << "Informe o tamanho do vetor: ";
    cin >> *tam;
    fflush(stdin);

    int *vet = new int[*tam];
    int *vet2 = new int[*tam];


    while(menu != 0){
        system("cls");
        cout << "#########################MENU########################" << endl;
        cout << "#                                                   #" << endl;
        cout << "# VETOR GERADO COM TAMANHO " << *tam << "                        #" << endl;
        cout << "#                                                   #" << endl;
        cout << "# 0 - Sair                                          #" << endl;
        cout << "# 1 - Gerar valores                                 #" << endl;
        cout << "# 2 - Mostrar                                       #" << endl;
        cout << "# 3 - Trocar 1º com o último, assim sucessivamente  #" << endl;
        cout << "#                                                   #" << endl;
        cout << "#####################################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0:
                system("cls");
                cout << "Programa Finalizado!" << endl << endl;
                break;
            case 1:
                system("cls");
                gerar(vet, vet2, tam);
                leu = 1;
                cout << "Valores gerados!" << endl << endl;
                break;
            case 2:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else{
                    mostrar(vet, tam);
                    cout << endl;
                }
                break;
            case 3:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    troca(vet, vet2, tam);
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

    delete tam;
    delete [] vet;
    delete [] vet2;
}

void gerar(int *v, int *v2, int *t){
    int *i = new int;

    srand(time(NULL));

    for(*i = 0; *i < *t; (*i)++){
        *v = rand() % 100;
        *v2 = *v;
        v++;
        v2++;
    }

    v -= *t;
    v2 -= *t;

    cout << "OPÇÃO 1 - GERAR VETOR" << endl << endl;

    delete i;
}

void mostrar(int *v, int *t){
    int *i = new int;

    cout << "OPÇÃO 2 - EXIBIR O VETOR" << endl << endl;

    cout << "Normal V: [ ";
    for(*i = 0; *i < *t; (*i)++){
        cout << *v << " ";
        v++;
    }
    cout << "]" << endl;

    v--;

    cout << "Inverso V: [ ";
    for(*i = *t; *i > 0; (*i)--){
        cout << *v << " ";
        v--;
    }
    cout << "]" << endl << endl;

    delete i;
}

void troca(int *v, int *v2, int *t){
    int *i = new int;
    int aux;

    cout << "OPÇÃO 3 - TROCAR VALORES, 1º COM ULTIMO E ASSIM SUCESSIVAMENTE" << endl << endl;

    cout << "Normal V: [ ";
    for(*i = 0; *i < *t; (*i)++){
        cout << *v << " ";
        v++;
    }
    cout << "]" << endl;

    v -= *t;

    for(*i = 0; *i < *t / 2; (*i)++){
        aux = v2[*i];
        v2[*i] = v2[*t - *i - 1];
        v2[*t - *i - 1] = aux;
    }

    cout << "Trocado V: [ ";
    for(*i = 0; *i < *t; (*i)++){
        cout << *v2 << " ";
        v2++;
    }
    cout << "]" << endl;
}
