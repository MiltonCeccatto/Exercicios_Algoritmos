#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;



main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int continuar, codigo;
    int pedidos[9];
    float somaTotal = 0;
    float aux = 0;
    int VetorCodigo[9];
    float VetorPreco[9];
    int qntd;


    for (int i = 0; i < 9; i++)
    {
        pedidos[i] = 0;
    }

    VetorCodigo[0] = 10;
    VetorPreco[0] = 15.00;
    VetorCodigo[1] = 11;
    VetorPreco[1] = 18.50;
    VetorCodigo[2] = 12;
    VetorPreco[2] = 22.00;
    VetorCodigo[3] = 13;
    VetorPreco[3] = 26.00;
    VetorCodigo[4] = 14;
    VetorPreco[4] = 22.00;
    VetorCodigo[5] = 15;
    VetorPreco[5] = 10.00;
    VetorCodigo[6] = 1;
    VetorPreco[6] = 7.50;
    VetorCodigo[7] = 2;
    VetorPreco[7] = 10.00;
    VetorCodigo[8] = 3;
    VetorPreco[8] = 5.00;

    const char*cardapio[] = {"Cachorro quente","Bauru simple","Bauru com ovo","Hambúrger","Cheesebuger","Torrada","Refrigerante","Suco natural", "Água"};



    do
    {
        system("cls");
        cout << fixed;
        cout.precision(2);
        cout << "Faça seu pedido: " << endl << endl;
        cout << "Descrição\t" << "\tCódigo\t" << "\tValor R$" << endl << endl;
        for (int i = 0; i < 9; i++)
        {
            if (VetorCodigo[i] == 3 || VetorCodigo[i] == 15)
            {
                cout << cardapio[i] <<"\t\t\t  " << VetorCodigo[i] <<"\t\t  " << VetorPreco[i] << endl;
            }
            else
            {
                cout << cardapio[i] <<"\t\t  " << VetorCodigo[i] <<"\t\t  " << VetorPreco[i] << endl;
            }
        }

        cout << "\ninsira o código do item: " << endl;
        cin >> codigo;

        switch(codigo)
        {
        case 10 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[0] += qntd;
            break;
        case 11 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[1] += qntd;
            break;
        case 12 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[2] += qntd;
            break;
        case 13 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[3] += qntd;
            break;
        case 14 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[4] += qntd;
            break;
        case 15 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[5] += qntd;
            break;
        case 1 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[6] += qntd;
            break;
        case 2 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[7] += qntd;
            break;
        case 3 :
            cout << "Insira a quantidade de itens: " << endl;
            cin >> qntd;
            pedidos[8] += qntd;
            break;
        default :
            cout << "Código inválido" << endl;

        }

        qntd = 0;

        cout << "1 - Para adicionar mais um item " << endl;
        cout << "2 - Para finalizar o pedido " << endl;
        cin >> continuar;
    }
    while(continuar != 2);

    for(int i = 0; i < 9; i++)
    {
        if(pedidos[i] !=0)
        {
            aux = pedidos[i]*VetorPreco[i];
            somaTotal += aux;
        }

    }

    cout << endl;
    cout << "Descrição\t" << "\tQTD\t" << "\tValor do item";

    for(int i = 0; i < 9; i++)
    {
        if (pedidos[i] != 0)
        {
            if (VetorCodigo[i] == 3 || VetorCodigo[i] == 15)
            {
                cout << fixed;
                cout << endl << cardapio[i] <<"\t\t\t " << pedidos[i] <<"\t" << "\t   " << VetorPreco[i];

            }
            else
            {
                cout << fixed;
                cout << endl << cardapio[i] <<"\t\t " << pedidos[i] <<"\t" << "\t   " << VetorPreco[i];
            }

        }
    }


    cout << endl << "Total do pedido:  ";
    cout.width(30);
    cout.fill('.');
    cout << right << somaTotal << endl;


}

