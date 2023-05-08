#include <iostream>
using namespace std;

#include "pilha.hpp"


int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Pilha p1;
    int tamPilha, valor;
    bool resultado;
    bool continua = true;
    int menu;
    int numero;

    cout << "Informe o tamanho da pilha: ";
    cin >> tamPilha;
    fflush(stdin);

    cout << "########## MENU ########" << endl;
    cout << "# 1 - Criar Pilha      #" << endl;
    cout << "# 2 - Inserir          #" << endl;
    cout << "# 3 - Remover          #" << endl;
    cout << "# 4 - Consultar        #" << endl;
    cout << "# 5 - Mostrar          #" << endl;
    cout << "# 6 - Tamanho da pilha #" << endl;
    cout << "# 0 - Sair             #" << endl;
    cout << "########################" << endl;

    do
    {
        cout << "MENU: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            continua = false;
            break;
        case 1 :
            inicializarPilha(&p1, tamPilha);
            cout << "Pilha foi criada " << endl;
            cout << endl;
            break;
        case 2 :
            cout << "Informe um valor para ser adicionado: ";
            cin >> numero;
            fflush(stdin);
            if(!cheiaP(&p1))
            {
                if(!buscarPilha(&p1, numero))
                {
                    empilhar(&p1, numero);
                    cout << "O número " << numero << " foi empilhado" << endl;
                    break;
                }
                else
                {
                    cout << "Erro: O número ja existe na pilha " << endl;
                    break;
                }
            }
            else
            {
                cout << "Erro: Pilha esta cheia " << endl;
                break;
            }
        case 3 :
            desempilhar(&p1);
            cout << "Número do topo removido !! " << endl << endl;
            break;
        case 4 :
            cout << "Número que esta no topo " << espiarPilha(&p1) << endl;
            cout << endl;
            break;
        case 5 :
            mostrarPilha(&p1);
            cout << endl;
            break;
        case 6 :
            cout << "Informe o tamanho da pilha: ";
            cin >> tamPilha;
            fflush(stdin);
            if(verificaInicializacaoPilha(&p1))
                destroirPilha(&p1);
            inicializarPilha(&p1, tamPilha);
            cout << "Pilha com novo tamanho ja foi criada " << endl << endl;;
            break;
        default :
            cout << "Menu inválido " << endl;

        }

    }
    while(continua = true);

    return EXIT_SUCCESS;

}

