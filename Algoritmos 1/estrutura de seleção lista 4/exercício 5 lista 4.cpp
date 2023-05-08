#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cargo;
    float sal;

    cout << "informe o salário: ";
    cin >> sal;

    cout << "Informe o número do cargo do trabalhador: "<< endl;
    cout << " 1 - Técnicos " << endl;
    cout << " 2 - Gerentes " << endl;
    cout << " 3 - Demais " << endl;
    cin >> cargo;

    if (cargo = 1 )
    {
        sal = (sal*0.5) + sal;
        cout << " O novo salário do técnico é de: " << sal;
    }
    else if (cargo = 2)
    {
        sal = (sal*0.3) + sal;
        cout << " o novo salário do gerente é de: " << sal;

    }
    else if (cargo = 3 )
    {
        sal = (sal*0.2) + sal;
        cout << " O novo salário do funcionário é de: " << sal;
    }
    else
    {
        cout << "Inválido";
    }


    return EXIT_SUCCESS ;
}

