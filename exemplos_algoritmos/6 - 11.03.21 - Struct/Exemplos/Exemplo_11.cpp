#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct cadastro
{
    int matricula;
    char nome[50];
    char curso[4];
    float nota;
};

void leitura(cadastro x[], int i);
void mostra(cadastro x[], int i);

main()
{
    cadastro x[20];
    int menu = -1, indice = -1;

    do{
        system("cls");
        cout << "######MENU######" << endl;
        cout << "# 0 - Sair     #" << endl;
        cout << "# 1 - Ler      #" << endl;
        cout << "# 2 - Mostrar  #" << endl;
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
                indice++;
                if(indice == 20)
                    cout << "Limite maximo de alunos ja cadastrados";
                else
                    leitura(x, indice);
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores primeiro";
                else
                    mostra(x, indice);
                getchar();
                break;

        };
    }while(menu != 0);

}

void leitura(cadastro x[], int i)
{
        cout << "\n\nInforme a matricula: ";
        cin >> x[i].matricula;
        fflush(stdin);

        cout << "Informe o nome: ";
        gets(x[i].nome);
        fflush(stdin);

        cout << "Informe o curso: ";
        gets(x[i].curso);
        fflush(stdin);

        cout << "Informe a nota: ";
        cin >> x[i].nota;
        fflush(stdin);
}

void mostra(cadastro x[], int i)
{
    cout << "DADOS CADASTRADOS: " << endl;
    for(int j = 0; j <= i; j++)
    {
        cout << "Matricula: " << x[j].matricula << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Curso: " << x[j].curso << endl;
        cout << "Nota: " << x[j].nota << endl;
        cout << "\n\n";
    }
}


