#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int resto, n1, n2;
    float quociente;

    cout << "Digite um n�mero: ";
    cin >> n1;

    cout << "Digite outro n�mero: ";
    cin >> n2;

    quociente = n1/n2;
    resto = n1%n2;

    cout << "Quociente: " << quociente << endl;
    cout << "Resto da divis�o: " << resto << endl;

    return EXIT_SUCCESS ;
}
