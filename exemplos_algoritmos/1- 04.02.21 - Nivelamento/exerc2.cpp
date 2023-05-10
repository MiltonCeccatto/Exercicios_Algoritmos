#include <iostream>
#include <clocale>
#include <cstdlib>


using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    float h, pesoAtual, pesoIdeal;

    cout << "Informe o sexo (F ou M): ";
    cin >> sexo;

    sexo = toupper(sexo);

    cout << "Informe a altura: ";
    cin >> h;

    cout << "Informe seu peso atual: ";
    cin >> pesoAtual;

    cout << endl;

    if(sexo == 'M')
        pesoIdeal = (72.7 * h) - 58;
    else if(sexo == 'F')
        pesoIdeal = (62.1 * h) - 44.7;

    cout << "Peso atual: " << pesoAtual << endl;
    cout << "Peso ideal: " << pesoIdeal << endl;

    if(pesoAtual - pesoIdeal >= -3 && pesoAtual - pesoIdeal <= 3)
        cout << "Dentro do peso ideal" << endl;
    else if(pesoAtual - pesoIdeal < -3)
        cout << "Abaixo do peso ideal" << endl;
    else if(pesoAtual - pesoIdeal > 3)
        cout << "Acima do peso ideal" << endl;

}




