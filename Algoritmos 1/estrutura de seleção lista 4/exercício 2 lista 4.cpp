
#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num, operacao;

    cout << "Insira um número: ";
    cin >> num;

    if ((num%2) == 0 )
    {
        operacao = num/2;
        cout << "O número " << num <<" é par " <<endl;
        cout << "O resultado dividido por 2 é: " << operacao;
    }
    else
    {
        operacao = num + 5;
        cout << "O número " << num <<" não é par " <<endl;
        cout << "O resultado somado a 5 é: " << operacao;
    }



    return EXIT_SUCCESS ;
}
