
#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num, operacao;

    cout << "Insira um n�mero: ";
    cin >> num;

    if ((num%2) == 0 )
    {
        operacao = num/2;
        cout << "O n�mero " << num <<" � par " <<endl;
        cout << "O resultado dividido por 2 �: " << operacao;
    }
    else
    {
        operacao = num + 5;
        cout << "O n�mero " << num <<" n�o � par " <<endl;
        cout << "O resultado somado a 5 �: " << operacao;
    }



    return EXIT_SUCCESS ;
}
