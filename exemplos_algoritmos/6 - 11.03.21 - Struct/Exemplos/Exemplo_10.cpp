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

void leitura(cadastro x[]);
void mostra(cadastro x[]);

main()
{
    cadastro x[20];
    leitura(x);

    system("cls");
    mostra(x);

}

void leitura(cadastro x[])
{
    for(int i = 0; i < 20; i++)
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
}

void mostra(cadastro x[])
{
    for(int i = 0; i < 20; i++)
    {
        cout << "DADOS CADASTRADOS: " << endl;
        cout << "Matricula: " << x[i].matricula << endl;
        cout << "Nome: " << x[i].nome << endl;
        cout << "Curso: " << x[i].curso << endl;
        cout << "Nota: " << x[i].nota << endl;
    }
}


