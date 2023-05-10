#include <iostream>
#include <clocale>
#include <cstdlib>


using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, codigo, quantia = 0, qtd_10=0, qtd_11 = 0, qtd_12 = 0, qtd_13 = 0, qtd_14 = 0, qtd_15 = 0, qtd_1 = 0, qtd_2 = 0;
    float valor, total=0;

    do{
        system("CLS");

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

            cout << "Insira a quantidade: ";
            cin >> quantia;

            switch(codigo){
                case 1:
                    valor = 8;
                    qtd_1 += quantia;
                    break;
                case 2:
                    valor = 10.50;
                    qtd_2 += quantia;
                    break;
                case 10:
                    valor = 12;
                    qtd_10 += quantia;
                    break;
                case 11:
                    valor = 16.50;
                    qtd_11 += quantia;
                    break;
                case 12:
                    valor = 18;
                    qtd_12 += quantia;
                    break;
                case 13:
                    valor = 22;
                    qtd_13 += quantia;
                    break;
                case 14:
                    valor = 20;
                    qtd_14 += quantia;
                    break;
                case 15:
                    valor = 10;
                    qtd_15 += quantia;
                    break;
                default:
                    cout << "Código inválido!" << endl;
            }
        }
    } while(opcao == 1);

    if(opcao == 2){
        system("CLS");
        cout.width(15);
        cout << "Descrição";
        cout.width(15);
        cout << "Quantidade";
        cout.width(15);
        cout << "Valor R$" << endl;

        if(qtd_10 > 0){
            cout.width(15);
            cout << "Cachorro Quente";
            cout.width(15);
            cout << qtd_10;
            cout.width(15);
            cout << 12.0 * qtd_10<< endl;
            total += 12.0 * qtd_10;
        }

        if(qtd_11 > 0){
            cout.width(15);
            cout << "Bauru Simples  ";
            cout.width(15);
            cout << qtd_11;
            cout.width(15);
            cout << 16.50 * qtd_11<< endl;
            total += 16.50 * qtd_11;
        }

        if(qtd_12 > 0){
            cout.width(15);
            cout << "Bauru com Ovo  ";
            cout.width(15);
            cout << qtd_12;
            cout.width(15);
            cout << 18 * qtd_12<< endl;
            total += 18 * qtd_12;
        }

        if(qtd_13 > 0){
            cout.width(15);
            cout << "Hambúrguer     ";
            cout.width(15);
            cout << qtd_13;
            cout.width(15);
            cout << 22 * qtd_13<< endl;
            total += 22 * qtd_13;
        }

        if(qtd_14 > 0){
            cout.width(15);
            cout << "Cheeseburguer  ";
            cout.width(15);
            cout << qtd_14;
            cout.width(15);
            cout << 20 * qtd_14<< endl;
            total += 20 * qtd_14;
        }

        if(qtd_15 > 0){
            cout.width(15);
            cout << "Torrada        ";
            cout.width(15);
            cout << qtd_15;
            cout.width(15);
            cout << 10 * qtd_15<< endl;
            total += 10 * qtd_15;
        }

        if(qtd_1 > 0){
            cout.width(15);
            cout << "Refrigerante   ";
            cout.width(15);
            cout << qtd_1;
            cout.width(15);
            cout << 8 * qtd_1<< endl;
            total += 8 * qtd_1;
        }

        if(qtd_2 > 0){
            cout.width(15);
            cout << "Suco Natural   ";
            cout.width(15);
            cout << qtd_2;
            cout.width(15);
            cout << 10.50 * qtd_2<< endl;
            total += 10.50 * qtd_2;
        }

        cout << "\n\nTotal do Pedido: " << total;
    }

}
