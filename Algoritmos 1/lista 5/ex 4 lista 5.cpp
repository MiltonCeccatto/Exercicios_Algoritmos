#include <iostream>
#include <string>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    string c;
    int a, b, operacao;

    cout << "Insira um n�mero inteiro: ";
    cin >> a;

    cout << "Insira outro n�mero inteiro: ";
    cin >> b;

    cout << "Insira um operador: " << endl;
    cout << " Adi��o = + " << endl;
    cout << " Subtra��o = - " << endl;
    cout << " Multiplica��o = x " << endl;
    cout << " Divis�o = / " << endl;
    cin >> c;

    if (c == "+") {
        operacao = a + b;
        cout << "O resultado �: " << operacao;
    } else if (c == "-"){
        operacao = a - b;
        cout << "O resultado �: " << operacao;
    }else if (c == "x"){
        operacao = a*b;
        cout << "O resultado �: " << operacao;
    }else if (b == 0 ){
        cout << "Um n�mero n�o pode ser dividido por 0 ";
    }else if (c == "/") {
        operacao = a/b;
        cout << "O resultado �: " << operacao;
    }else{
        cout << " Operador � inv�lido ";
    }


    return EXIT_SUCCESS ;
}

