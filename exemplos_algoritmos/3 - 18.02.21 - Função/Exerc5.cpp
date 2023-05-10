#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

void resultado(float vA, int t, float vF);

main(){
    setlocale(LC_ALL, "Portuguese");

    float valorAuto, fixo;
    int tipo;

    cout << "Informe o valor do automóvel: ";
    cin >> valorAuto;

    cout << "Informe o tipo de correção: ";
    cin >> tipo;

    cout << "Valor fixo aplicado mensalmente: ";
    cin >> fixo;

    if(valorAuto < 1 || tipo != 1 && tipo != 2 || fixo < 1)
        cout << "Algum valor foi informado de maneira errada!" << endl;
    else {
        cout << endl;
        system("pause");
        system("cls");
        resultado(valorAuto, tipo, fixo);
    }

}

void resultado(float vA, int t, float vF){

    int meses = 0;
    float valorFinal = 0;

    if(t == 1){
        while(valorFinal < vA){
            valorFinal = valorFinal + vF;
            valorFinal = valorFinal + (valorFinal * 0.0014);
            meses ++;
        }
    } else if(t == 2){
        while(valorFinal < vA){
            valorFinal = valorFinal + vF;
            valorFinal = valorFinal + (valorFinal * 0.0032);
            meses++;
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << "O valor que José terá no final será: " << valorFinal << endl;
    cout << "Quantia de meses: " << meses << endl;

}
