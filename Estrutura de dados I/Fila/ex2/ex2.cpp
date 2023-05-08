// 2. Desenvolva um programa que permita gerenciar uma pista para descolagem de avi�es de um aeroporto. Para o
// correto funcionamento desta pista � necess�rio que seja implementada uma fila com as seguintes funcionalidades:
// a) N� de avi�es � espera de decolar.
// b) Entrada de um novo avi�o para decolar (incluir na fila).
// c) Descolagem de um avi�o (retirar da fila).
// d) Listar todos os avi�es � espera para decolagem (mostrar fila).
// e) Listar as caracter�sticas do pr�ximo avi�o a decolar (peek).
// Observa��o: para cada avi�o s�o necess�rias as seguintes informa��es: c�digo do avi�o, n�mero de
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
        cout << "# 1 - N�mero de avi�es para decolar " << endl;
        cout << "# 2 - Entrada de um novo avi�o para decolar " << endl;
        cout << "# 3 - Decolagem de um avi�o " << endl;
        cout << "# 4 - Listar todos os avi�es � espera para decolagem " << endl;
        cout << "# 5 - Listar as caracter�sticas do pr�ximo avi�o a decolar " << endl;
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
                cout << "N�o h� avi�es para decolar ! " << endl;
                getchar();
                break;
            }
            else
            {
                cout << "O avi�o " << desenfileiraF(&avioes).codigo << " decolou ! " << endl;
                getchar();
                break;
            }
        }
        case 4 :
            mostraF(&avioes);
            getchar();
            break;
        case 5 :
            cout << "Informa��es do pr�ximo avi�o que vai decolar : " << endl;
            cout << "C�digo : " << espiaF(&avioes).codigo << endl;
            cout << "Empresa : " << espiaF(&avioes).empresa << endl;
            cout << "Passageiros : " << espiaF(&avioes).passageiros << endl;
            getchar();
            break;
        default :
            cout << "Menu inv�lido ! " << endl;
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
        cout << "A fila de avi�es est� cheia " << endl;
    }
    else
    {
        cout << "Informe o c�digo do avi�o : ";
        cin >> av.codigo;
        fflush(stdin);
        cout << "Informe a quantidade de passageiros : ";
        cin >> av.passageiros;
        fflush(stdin);
        cout << "Informe o nome da empresa : ";
        getline(cin, av.empresa);
        fflush(stdin);

        enfileiraF(avioes, av);

        cout << "\nAvi�o adicionado a fila ! " << endl;
    }
}
