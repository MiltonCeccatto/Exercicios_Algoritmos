#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    float salMin, qntW, valorW, pagar, desconto;

    cout << "Informe o valor do salário minimo: ";
    cin >> salMin;

    cout << "Informe a quantidade de W gastos: ";
    cin >> qntW;

    valorW = (salMin/5)/100;
    pagar = valorW*qntW;
    desconto = pagar - (0.1*pagar);

    cout << "Valor em reais de cada kw: " <<valorW << endl;
    cout << "Valor em reais a ser pago: " << pagar << endl;
    cout << "Valor com desconto: " << desconto;

    return EXIT_SUCCESS ;
}
