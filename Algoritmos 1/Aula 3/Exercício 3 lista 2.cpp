#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    float valorHora, inss, horasTraba, salBruto, salLiquido, valorDesc;

    cout << "Informe o número de horas trabalhadas: ";
    cin >> horasTraba;

    cout << "Informe o valor da hora trabalhada: ";
    cin >> valorHora;

    cout << "Informe a porcentagem de desconto do INSS: ";
    cin >> inss;

    salBruto = valorHora*horasTraba;
    valorDesc = (inss/100.0)*salBruto;
    salLiquido = salBruto - valorDesc;

    cout << "Salário bruto: R$" <<salBruto << endl;
    cout << "Valor descontado: R$" << valorDesc << endl;
    cout << "Salário líquido: R$" << salLiquido;

    return EXIT_SUCCESS ;
}
