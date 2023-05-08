#include <iostream>

using namespace std;

int main(){

    setlocale (LC_ALL, "Portuguese");

    float valorParcelas, nTotalParcelas, parcelasPagas, valorPago, saldoDevedor;


    cout << "Informe o número total de parcelas: ";
    cin >> nTotalParcelas;

    cout << "Informe o número de parcelas pagas: ";
    cin >> parcelasPagas;

    cout << "Informe o valor das parcelas: R$ ";
    cin >> valorParcelas;

    valorPago = parcelasPagas * valorParcelas;
    saldoDevedor = (nTotalParcelas - parcelasPagas) * valorParcelas;

    cout << "O valor total pago é de: R$" << valorPago <<" " << "reais" << endl;

    cout << "O valor restante é de: R$" << saldoDevedor <<" " << "reais" << endl;

    return 0;
}
