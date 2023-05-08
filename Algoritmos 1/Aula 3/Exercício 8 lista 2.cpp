#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int resto, n1, n2;
    float quociente;

    cout << "Digite um número: ";
    cin >> n1;

    cout << "Digite outro número: ";
    cin >> n2;

    quociente = n1/n2;
    resto = n1%n2;

    cout << "Quociente: " << quociente << endl;
    cout << "Resto da divisão: " << resto << endl;

    return EXIT_SUCCESS ;
}
