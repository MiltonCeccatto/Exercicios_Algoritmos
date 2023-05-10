#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    string nome;

    if(nome.empty())
       cout << "Nome vazio";
    else
       cout << "Nome foi informado";

    cout << "\n\nInforme o seu nome: ";
    getline(cin, nome);

    if(nome.empty())
       cout << "Nome vazio";
    else
       cout << "Nome foi informado";

    cout << "\n" << nome << endl;

    for(int i = 0; i < nome.size(); i++)
    {
        nome[i] = toupper(nome[i]);
        if(!isalnum(nome[i]))
            cout << "\n\nEncontrou caracter especial" << endl;
        if(isspace(nome[i]))
            cout << "Espaco em branco" << endl;
        cout << nome[i] << " - ";
    }

}

