// 2. Desenvolva um programa que permita gerenciar uma pista para descolagem de aviões de um aeroporto. Para o
// correto funcionamento desta pista é necessário que seja implementada uma fila com as seguintes funcionalidades:
// a) Nº de aviões à espera de decolar.
// b) Entrada de um novo avião para decolar (incluir na fila).
// c) Descolagem de um avião (retirar da fila).
// d) Listar todos os aviões à espera para decolagem (mostrar fila).
// e) Listar as características do próximo avião a decolar (peek).
// Observação: para cada avião são necessárias as seguintes informações: código do avião, número de
// passageiros, empresa.

#include <iostream>
using namespace std;

struct Aviao
{
    int codigo;
    int passageiros;
    string empresa;
    Aviao()
    {
        codigo = 0;
        passageiros = 0;
        empresa = " ";
    }
};
// struct deve ficar antes do hpp para poder ser usado nele
// mesma coisa para fila

#include "filacircular.hpp"

void AviaoParaDecolar(Fila *avioes);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Fila avioes;
    int tamFila = 10;
    int valor;
    int menu;
    bool resultado;
    bool continua;

    inicializaF(&avioes, tamFila);




    do
    {
        system("cls");
        cout << "##### MENU ###### " << endl;
        cout << "# 1 - Número de aviões para decolar " << endl;
        cout << "# 2 - Entrada de um novo avião para decolar " << endl;
        cout << "# 3 - Decolagem de um avião " << endl;
        cout << "# 4 - Listar todos os aviôes à espera para decolagem " << endl;
        cout << "# 5 - Listar as características do próximo avião a decolar " << endl;
        cout << "MENU: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            continua = false;
            break;
        case 1 :
            cout << "" << endl;
            break;
        case 2 :
            AviaoParaDecolar(&avioes);
            getchar();
            break;
        case 3 :
        {
            if(vaziaF(&avioes))
            {
                cout << "Não há aviões para decolar ! " << endl;
                getchar();
                break;
            }
            else
            {
                cout << "O avião " << desenfileiraF(&avioes).codigo << " decolou ! " << endl;
                getchar();
                break;
            }
        }
        case 4 :
            mostraF(&avioes);
            getchar();
            break;
        case 5 :
            cout << "Informações do próximo avião que vai decolar : " << endl;
            cout << "Código : " << espiaF(&avioes).codigo << endl;
            cout << "Empresa : " << espiaF(&avioes).empresa << endl;
            cout << "Passageiros : " << espiaF(&avioes).passageiros << endl;
            getchar();
            break;
        default :
            cout << "Menu inválido ! " << endl;
            break;
        }



    }
    while(continua = true);




    destroiF(&avioes);
    return EXIT_SUCCESS;

}//final do main

void AviaoParaDecolar(Fila *avioes)
{

    Aviao av;

    if(cheiaF(avioes))
    {
        cout << "A fila de aviões está cheia " << endl;
    }
    else
    {
        cout << "Informe o código do avião : ";
        cin >> av.codigo;
        fflush(stdin);
        cout << "Informe a quantidade de passageiros : ";
        cin >> av.passageiros;
        fflush(stdin);
        cout << "Informe o nome da empresa : ";
        getline(cin, av.empresa);
        fflush(stdin);

        enfileiraF(avioes, av);

        cout << "\nAvião adicionado a fila ! " << endl;
    }
}
