#include <iostream>
#include <clocale>
#include <cstdlib>


using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, numero;
    int divisores;
    int primos = 0;
    int nprimos = 0;
    int qtdnumero = 0;

    do{
        cout << "Escolha uma opção e digite abaixo: " << endl;
        cout << "(1) Testar um valor: "<< endl;
        cout << "(2) Encerrar: " << endl;
        cout << "OPÇÃO: ";
        cin >> opcao;

        system ("CLS");

        if(opcao == 1){
            cout << "Informe um número para ser testado: ";
            cin >> numero;

            divisores = 0;

            for(int i=1; i <= numero; i++){
                if(numero%i == 0)
                    divisores++;
            }

            if(divisores == 2){
                cout << "O número " << numero << " é primo!";
                primos++;
            } else {
                cout << "O número " << numero << " não é primo!";
                nprimos++;
            }
            qtdnumero++;

            cout << endl;
            cout << endl;
        }

        else if(opcao == 2){
            cout << "Programa encerrado!" << endl;
            cout << endl;
            cout << "Números avaliados: " << qtdnumero << endl;
            cout << "Quantidade de números primos: " << primos << endl;
            cout << "Quantidade de números não primos: " << nprimos << endl;
            cout << endl;
            system("pause");
        }

        else if(opcao < 1 || opcao > 2){
            cout << "Opção inválida!" << endl;
            cout << "O programa foi encerrado..." << endl;
            cout << endl;
            system("pause");
        }

    } while(opcao == 1);


}




