#include <iostream>
#include <clocale>
#include <cstdlib>


using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout.width(15);
    cout << "Descrição";
    cout.width(15);
    cout << "Código";
    cout.width(15);
    cout << "Valor R$" << endl;

    cout.width(15);
    cout << "Cachorro Quente";
    cout.width(15);
    cout << "10";
    cout.width(15);
    cout << "12,00" << endl;

    cout.width(15);
    cout << "Bauru Simples  ";
    cout.width(15);
    cout << "11";
    cout.width(15);
    cout << "16,50" << endl;

    cout.width(15);
    cout << "Bauru com Ovo  ";
    cout.width(15);
    cout << "12";
    cout.width(15);
    cout << "18,00" << endl;

    cout.width(15);
    cout << "Hambúrguer     ";
    cout.width(15);
    cout << "13";
    cout.width(15);
    cout << "22,00" << endl;

    cout.width(15);
    cout << "Cheeseburguer  ";
    cout.width(15);
    cout << "14";
    cout.width(15);
    cout << "20,00" << endl;

    cout.width(15);
    cout << "Torrada        ";
    cout.width(15);
    cout << "15";
    cout.width(15);
    cout << "10,00" << endl;

    cout.width(15);
    cout << "Refrigerante   ";
    cout.width(15);
    cout << "1";
    cout.width(15);
    cout << "8,00" << endl;

    cout.width(15);
    cout << "Suco Natural   ";
    cout.width(15);
    cout << "2";
    cout.width(15);
    cout << "10,50" << endl;
    cout << "---------------------------------------------" << endl;

    int opcao, codigo, quantia=0;
    float valor, total=0;

    do{
        cout << endl;
        cout << "1 - Incluir item" << endl;
        cout << "2 - Encerrar pedido" << endl;
        cout << endl;
        cout << "Opção: ";
        cin >> opcao;


        if(opcao == 1){
            cout << endl;
            cout << "Insira o código do produto: ";
            cin >> codigo;

            switch(codigo){
                case 1:
                    valor = 8;
                    break;
                case 2:
                    valor = 10.50;
                    break;
                case 10:
                    valor = 12;
                    break;
                case 11:
                    valor = 16.50;
                    break;
                case 12:
                    valor = 18;
                    break;
                case 13:
                    valor = 22;
                    break;
                case 14:
                    valor = 20;
                    break;
                case 15:
                    valor = 10;
                    break;
                default:
                    cout << "Código inválido!" << endl;
                    valor = 0;
                    quantia--;
            }
            quantia++;
            total = total + valor;
        }


        if(opcao == 2){
            system("CLS");
            cout << "Relatório do pedido:" << endl;
            cout << "Valor total do pedido: R$" << total << endl;
            cout << "Quantia de pedidos feitos: " << quantia << endl;
            cout << endl;
            system("pause");
        }
    } while(opcao == 1);

}





