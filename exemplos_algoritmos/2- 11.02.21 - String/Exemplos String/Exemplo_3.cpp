#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    char nome[50], a[50];
    cout<<"Digite seu nome: ";
    //gets(nome);
    cin.getline(nome, 6);
    strcpy(a,"Meu nome: ");
    strcat(a,nome);
    puts(a);
    cout << "\n" << nome;

    if(strcmp(nome,"Adilso Souza") == 0)
        cout << "\n" << "Nome correto.";
    else
        cout << "\n" << "Erro";

    cout << "\nSeu nome contem: " << strlen(nome) << " caracteres" << endl;

    for(int i = 0; i < strlen(nome); i++)
        cout << nome[i] << " - ";

    getchar();
}

