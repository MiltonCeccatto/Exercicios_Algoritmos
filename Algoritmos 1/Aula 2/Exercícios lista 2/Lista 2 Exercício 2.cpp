#include <iostream>

using namespace std;

int main(){

    setlocale (LC_ALL, "Portuguese");

    float valorParcelas, nTotalParcelas, parcelasPagas, valorPago, saldoDevedor;


    cout << "Informe o n�mero total de parcelas: ";
    cin >> nTotalParcelas;

    cout << "Informe o n�mero de parcelas pagas: ";
    cin >> parcelasPagas;

    cout << "Informe o valor das parcelas: R$ ";
    cin >> valorParcelas;

    valorPago = parcelasPagas * valorParcelas;
    saldoDevedor = (nTotalParcelas - parcelasPagas) * valorParcelas;

    cout << "O valor total pago � de: R$" << valorPago <<" " << "reais" << endl;

    cout << "O valor restante � de: R$" << saldoDevedor <<" " << "reais" << endl;

    return 0;
}
