#include <iostream>
#include <string>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    string c;
    int a, b, operacao;

    cout << "Insira um número inteiro: ";
    cin >> a;

    cout << "Insira outro número inteiro: ";
    cin >> b;

    cout << "Insira um operador: " << endl;
    cout << " Adição = + " << endl;
    cout << " Subtração = - " << endl;
    cout << " Multiplicação = x " << endl;
    cout << " Divisão = / " << endl;
    cin >> c;

    if (c == "+") {
        operacao = a + b;
        cout << "O resultado é: " << operacao;
    } else if (c == "-"){
        operacao = a - b;
        cout << "O resultado é: " << operacao;
    }else if (c == "x"){
        operacao = a*b;
        cout << "O resultado é: " << operacao;
    }else if (b == 0 ){
        cout << "Um número não pode ser dividido por 0 ";
    }else if (c == "/") {
        operacao = a/b;
        cout << "O resultado é: " << operacao;
    }else{
        cout << " Operador é inválido ";
    }


    return EXIT_SUCCESS ;
}

