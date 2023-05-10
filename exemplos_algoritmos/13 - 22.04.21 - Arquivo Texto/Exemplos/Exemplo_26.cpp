#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main()
{
    ofstream escreve;
    escreve.open("teste.txt",ios::app);
    string nome;
    char (x);
    if(escreve.is_open())
    {
        cout << "Arquivo aberto com sucesso.";
        cout << "Informe seu nome: ";
        getline(cin, nome);
        fflush(stdin);
        escreve << "\n" << nome;
        escreve.close();
        ifstream ler("teste.txt",ios::in);
        while(ler.get(x))
           cout << x << ", ";
    }
    else
    {
        cout << "Erro ao abrir o arquivo.";
    }
}
