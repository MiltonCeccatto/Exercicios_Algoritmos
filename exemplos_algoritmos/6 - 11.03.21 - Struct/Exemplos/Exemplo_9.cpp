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

void leitura(cadastro &x);
void mostra(cadastro &x);

main()
{
    cadastro x;
    leitura(x);

    system("cls");
    mostra(x);

}

void leitura(cadastro &x)
{
    cout << "Informe a matricula: ";
    cin >> x.matricula;
    fflush(stdin);

    cout << "Informe o nome: ";
    gets(x.nome);
    fflush(stdin);

    cout << "Informe o curso: ";
    gets(x.curso);
    fflush(stdin);

    cout << "Informe a nota: ";
    cin >> x.nota;
    fflush(stdin);
}

void mostra(cadastro &x)
{
    cout << "DADOS CADASTRADOS: " << endl;
    cout << "Matricula: " << x.matricula << endl;
    cout << "Nome: " << x.nome << endl;
    cout << "Curso: " << x.curso << endl;
    cout << "Nota: " << x.nota << endl;
}


