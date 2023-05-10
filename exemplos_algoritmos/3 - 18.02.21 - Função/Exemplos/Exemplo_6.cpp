#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
int leitura(char texto[100]);
void mostra(int v1, int v2);
int calcula(int v1, int v2 = 5);

main()
{
    int menu = -1, n1, n2, leu = 0;

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
                n1 = leitura("Digite o valor 1: ");
                n2 = leitura("Digite o valor 2: ");
                leu = 1;
                break;
            case 2 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else
                    mostra(n1, n2);
                getchar();
                break;
            case 3 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else
                {
                    cout << "Soma dos valores: " << calcula(n1, n2) << endl;
                    cout << "Soma com default: " << calcula(n1) << endl;
                }
                getchar();
                break;
        };

    }while(menu != 0);
}

int leitura(char texto[100])
{
    int n;
    cout << texto;
    cin >> n;
    return n;
}

void mostra(int v1, int v2)
{
    cout << "Valor 1: " << v1 << endl;
    cout << "Valor 2: " << v2 << endl;
}

int calcula(int v1, int v2)
{
    return v1 + v2;
}
