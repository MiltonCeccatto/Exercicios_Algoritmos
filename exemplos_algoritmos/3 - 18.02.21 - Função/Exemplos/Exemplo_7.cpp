#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>

using namespace std;
void leitura(int v[]);
void mostra(int v[]);
int calcula(int v[]);

main()
{
    int menu = -1, vet[10], leu = 0;

    do{
        system("cls");
        cout << "######MENU######" << endl;
        cout << "# 0 - Sair     #" << endl;
        cout << "# 1 - Ler      #" << endl;
        cout << "# 2 - Mostrar  #" << endl;
        cout << "# 3 - Calcular #" << endl;
        cout << "################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                leitura(&vet[0]);
                //leitura(vet);
                leu = 1;
                cout << "VALORES GERADOS COM SUCESSO.";
                getchar();
                break;
            case 2 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else
                    mostra(vet);
                getchar();
                break;
            case 3 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else
                {
                    cout << "Soma dos elementos: " << calcula(vet);
                }
                getchar();
                break;
        };

    }while(menu != 0);
}

void leitura(int v[])
{
    int i;
    srand(time(NULL));
    for(i = 0; i < 10; i++)
        v[i] = rand() % 50;
}

void mostra(int v[])
{
    for(int i = 0; i < 10; i++)
        cout << v[i] << " - ";
}

int calcula(int v[])
{
    int soma = 0;
    for(int i = 0; i < 10; i++)
        soma += v[i];
    return soma;
}
