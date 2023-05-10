#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;
void inserir(int *flag);
void leitura();
void leitura2();

main()
{
    int menu, f = 0;
    do
    {
        system("cls");
        cout << "MENU" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Ler nome" << endl;
        cout << "2 - Mostrar dados do arquivo" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);
        switch(menu)
        {
        case 0 :
            cout << "PROGRAMA FINALIZADO.";
            getchar();
            break;
        case 1 :
            inserir(&f);
            getchar();
            break;
        case 2 :
            leitura2();
            getchar();
            break;
        }
    }
    while(menu != 0);
}


void inserir(int *flag)
{
    string nome;
    cout << "Informe o nome: ";
    getline(cin, nome);
    fflush(stdin);

    ofstream escreve("teste2.txt",ios::app);
    if(escreve.is_open())
    {
        //cout << "Flag: " << *flag << endl;
        if(*flag == 0)
        {
            escreve << nome;
            (*flag)++;
        }
        else
            escreve << "\n" << nome;
        escreve.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo.";
    }
}

void leitura()
{
    char x;
    ifstream ler("teste2.txt",ios::in);
    while(ler.get(x))
        cout << x;
}

void leitura2()
{
    char x[100];
    ifstream ler("teste2.txt",ios::in);

    while(!ler.fail())
    {
        ler >> x;
        cout << x << endl;
    }
}
