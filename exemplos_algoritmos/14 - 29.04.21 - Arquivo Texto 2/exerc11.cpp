#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    string cidade;
    char x[100];

    bool contem = false;
    int cont = 0;
    int pos;

    cout << "Informe o nome da cidade: ";
    getline(cin, cidade);

    ifstream leitura;
    leitura.open("cidade.txt", ios::in);

    cout << endl;

    if(leitura.is_open()){
        cout << "Arquivo aberto com sucesso!" << endl;

        while(leitura.getline(x, sizeof(x), '\n')){
            if(x == cidade){
                contem = true;
                pos = cont;
            }

            cont++;
        }

        cout << endl;

        leitura.close();
    } else
        cout << "Arquivo não encontrado!" << endl;



    if(contem == true) {
        cout << "Linha que a cidade está contida: " << pos + 1 << endl << endl;
        system("pause");
    } else if(contem == false){
        ofstream escreve;
        escreve.open("cidade.txt", ios::app);

        if(escreve.is_open()){
            cout << "Cidade inserida no arquivo" << endl << endl;

            escreve << "\n" << cidade;

            escreve.close();
            system("pause");
    } else
        cout << "Arquivo não encontrado!" << endl;
    }
}
