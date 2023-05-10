#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
float salarioFinal(float sF, float sV, float c, float d);

main(){
    setlocale(LC_ALL, "Portuguese");

    float salarioFixo, valorVendido, comissao, desconto;
    float minimo;

    cout << "Informe o salário fixo: ";
    cin >> salarioFixo;

    cout << "Informe o valor vendido: ";
    cin >> valorVendido;

    comissao = 0.05;
    desconto = 0.11;

    //comissao = valorVendido * 0.05;
    //desconto = (salarioFixo + comissao) * 0.11;

    minimo = salarioFinal(salarioFixo, valorVendido, comissao, desconto) / 1100;

    cout << endl;

    cout << fixed;
    cout.precision(2);
    cout << "Salário Final: " << salarioFinal(salarioFixo, valorVendido, comissao, desconto) << endl;
    cout << "Quanto representa em salário mínimo: " << minimo << endl;

    cout << endl;

    system("pause");
}

float salarioFinal(float sF, float sV, float c, float d){

    float resultado;

    resultado = sF + (sV * c);
    resultado = resultado - (resultado * 0.11);

    return resultado;

}
