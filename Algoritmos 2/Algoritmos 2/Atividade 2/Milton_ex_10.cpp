#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string chave, texto;
    bool terminar = true;
    int cont = 0;

    cout << "Insira uma chave: " << endl;
    getline(cin, chave);


    do {
    system("cls");
        cout << "Tente acertar qual � a chave: " << endl;
        getline(cin, texto);
        fflush(stdin);

         if(chave == texto){
            cout << "As chaves s�o iguais" << endl;
            terminar = false;
         } else if( texto == "fim"){
            cout << "Programa encerrado" << endl;
            terminar = false;

         }else
            cout << "diferentes" << endl;
        cont++;
    }while(terminar != false);

    cout << "N�mero de tentativas " << cont << endl;

}


