#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    char nomearquivo[20];
    int total = 0;
    char (x);

    cout << "Informe o nome do arquivo + .txt: ";
    gets(nomearquivo);

    ifstream leitura;
    leitura.open(nomearquivo, ios::in);

    cout << endl;

    if(leitura.is_open()){
        cout << "Arquivo aberto com sucesso!" << endl << endl;

        while(leitura.get(x)){
            cout << x;

            if((x) != ' ' && (x) != '\n')
                total++;
        }

        cout << endl << endl;

        cout << "Total de caracteres: " << total << endl;
    } else
        cout << "Arquivo não encontrado!" << endl;

    leitura.close();
}
