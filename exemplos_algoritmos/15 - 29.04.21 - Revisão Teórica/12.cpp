#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    //setlocale(LC_ALL, "Portuguese");

    char nome[100];
    float media, soma = 0;
    int x, cont = 0;

    ifstream leitura;
    leitura.open("nomes.txt", ios::in);

    x = 1;
    while(!leitura.fail()){
        leitura.getline(nome,99,';');
        if(x == ){
            soma += atof(nome);
            cout << nome << endl;
            x = 0;
            cont++;
        }
        x++;
    }

    cout << "\nSoma: " << soma << endl;
    media = soma / cont;
    cout << "\nMédia: " << media << endl;
    leitura.close();

}

