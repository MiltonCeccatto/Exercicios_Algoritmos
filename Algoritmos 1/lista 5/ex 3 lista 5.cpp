#include <iostream>
#include <string>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    string nome;
    float sal, salMin, reajuste, salF;

    cout << "Digite o nome do funcion�rio: ";
    cin >> nome;

    cout << "Digite o valor do sal�rio recebido: ";
    cin >> sal;

    cout << "Digite o valor do sal�rio m�nimo: ";
    cin >> salMin;

    if (salMin*3 > sal)
{
    reajuste = sal*0.5;
    salF = sal + reajuste;
    cout << "Nome: " << nome << endl;
    cout << "O reajuste � de: R$ " << reajuste << endl;
    cout << "O novo sal�rio � de : R$ " << salF;
}
else if ( sal >= salMin*3 && sal <= salMin*10 )
    {
        reajuste = sal*0.2;
        salF = sal + reajuste;
        cout << "Nome: " << nome << endl;
        cout << "O reajuste � de: R$ " << reajuste << endl;
        cout << "O novo sal�rio � de : R$ " << salF;
    }
    else if (sal > salMin*10 && sal <= salMin*20)
    {
        reajuste = sal*0.15;
        salF = sal + reajuste;
        cout << "Nome: " << nome << endl;
        cout << "O reajuste � de: R$ " << reajuste << endl;
        cout << "O novo sal�rio � de : R$ " << salF;
    }
    else if (sal > salMin*20)
    {
        reajuste = sal*0.1;
        salF = sal + reajuste;
        cout << "Nome: " << nome << endl;
        cout << "O reajuste � de: R$ " << reajuste << endl;
        cout << "O novo sal�rio � de : R$ " << salF;
    }


    return EXIT_SUCCESS ;
}

