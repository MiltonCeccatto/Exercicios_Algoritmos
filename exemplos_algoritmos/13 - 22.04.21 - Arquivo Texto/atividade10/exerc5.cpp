#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    char x[100];
    char nomearquivo[20];

    int *cont = new int(0);
    int *pos = new int(0);

    float *aux = new float(0);
    float *maior = new float(0);

    cout << "Informe o nome do arquivo + .txt: ";
    gets(nomearquivo);

    ifstream leitura;
    leitura.open(nomearquivo, ios::in);

    cout << endl;

    if(leitura.is_open()){
        cout << "Arquivo aberto com sucesso!" << endl << endl;

        cout << "Valores do arquivo: ";
        while(leitura.getline(x, sizeof(x), '\n')){
            *aux = atof(x);

            if(*maior < *aux){
                *maior = *aux;
                *pos = *cont;
            }

            (*cont)++;
        }

        cout << endl << endl;

        cout << "O maior número é: " << *maior << endl;
        cout << "Está presente na linha: " << *pos + 1 << endl;


    } else
        cout << "Arquivo não encontrado!" << endl;

    leitura.close();
}
