
#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int anoAtual, dtNascimento, idade, idadeFutura;

    cout << "Informe seu ano de nascimento: ";
    cin >> dtNascimento;

    cout << "Informe o ano atual: ";
    cin >> anoAtual;

    idade = anoAtual - dtNascimento;
    idadeFutura = 2063 - dtNascimento;

    cout << "A sua idade é de " << idade << " anos" << endl;
    cout << "A sua idade em 2063 vai ser de " << idadeFutura << " anos"<< endl;

    return EXIT_SUCCESS ;
}
