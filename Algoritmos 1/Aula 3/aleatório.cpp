#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int operacao;
    float n1, n2, soma;

    cout << "Se deseja somar digite 1" << endl << "se deseja subtrsir digite 2: " << endl;
    cout << "Se deseja multiplicar digite 3: " << endl << "Se deseja dividir digite 4: " << endl;
    cin >> operacao;

    cout << "digite o primeiro n�mero: ";
    cin >> n1;

    cout << "digite o segundo n�mero: ";
    cin >> n2;

    if (operacao == 1)
        soma = n1 + n2;
    else if ( operacao == 2)
        soma = n1 - n2;
    else if (operacao == 3)
        soma = n1*n2;
    else if (operacao == 4)
        soma = n1/n2;

    cout << "o valor �: " << soma;

    return EXIT_SUCCESS ;
}
