#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;

    char nome[50], a[50];

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    float h, pesoAtual, pesoIdeal;

    cout << "Digite seu nome: ";
    gets(nome);
    ///cin.getline(nome, 50);  (vetor de char)
    strcpy(a,nome);
    puts(a);
    cout << "\n" << nome;

    if(strcmp(nome, "Bruno") == 0)
        cout << "\n" << "Nome correto!";
    else
        cout <<"\n" << "Erro";

    cout << "\nSeu nome contém: " << strlen(nome) << " caracteres" << endl;

    for(int i = 0; i < strlen(nome); i++){
        cout << nome[i] << " - ";
    }

    getchar();

    /// Com a biblioteca


}




