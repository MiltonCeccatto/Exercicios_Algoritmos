#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    ofstream escreve("prova.txt");;
    int cod;
    string nome;
    if(escreve.is_open()){
        cout << "Informe o código e o nome, CTRL+Z para finalizar: ";
        while(cin >> cod >> nome){
            escreve << cod << " " << nome << "\n";
            cout << "? ";
        }
        escreve.close();
    }
    else{
        cout << "Falhas ao abrir o arquivo.";
    }
    cout << "\n\nDados no arquivo: " << endl;

}
