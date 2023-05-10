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
    float *vetor = new float[25];

    float *aux = new float(0);
    int *cont = new int(0);

    float *soma = new float(0);
    float *media = new float(0);

    cout << "Informe o nome do arquivo + .txt: ";
    gets(nomearquivo);

    ifstream leitura;
    leitura.open(nomearquivo, ios::in);

    if(leitura.is_open()){
        cout << endl;
        cout << "Arquivo aberto com sucesso!" << endl << endl;

        while(leitura.getline(x, sizeof(x), ';')){
            *aux = atof(x);
            *vetor= *aux;

            *soma += *aux;

            vetor++;
            (*cont)++;
        }

        vetor -= *cont;

        int *k = new int(0);
        float *maior = new float(*vetor);
        float *menor = new float(*vetor);

        cout << "Valores do arquivo: ";
        while(*k < *cont){
            cout << *vetor << "; ";

            if(*maior < *vetor)
                *maior = *vetor;

            if(*menor > *vetor)
                *menor = *vetor;

            (*k)++;
            vetor++;
        }

        cout << endl << endl;

        cout << "Soma: " << *soma << endl;
        cout << "Média: " << (*soma / *cont) << endl;
        cout << "Maior: " << *maior << endl;
        cout << "Menor: " << *menor << endl;
    } else
        cout << "Arquivo não encontrado!" << endl;

    leitura.close();
}
