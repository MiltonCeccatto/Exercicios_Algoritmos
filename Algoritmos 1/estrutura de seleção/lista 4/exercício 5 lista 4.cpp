#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cargo;
    float sal;

    cout << "informe o sal�rio: ";
    cin >> sal;

    cout << "Informe o n�mero do cargo do trabalhador: "<< endl;
    cout << " 1 - T�cnicos " << endl;
    cout << " 2 - Gerentes " << endl;
    cout << " 3 - Demais " << endl;
    cin >> cargo;

    if (cargo = 1 )
    {
        sal = (sal*0.5) + sal;
        cout << " O novo sal�rio do t�cnico � de: " << sal;
    }
    else if (cargo = 2)
    {
        sal = (sal*0.3) + sal;
        cout << " o novo sal�rio do gerente � de: " << sal;

    }
    else if (cargo = 3 )
    {
        sal = (sal*0.2) + sal;
        cout << " O novo sal�rio do funcion�rio � de: " << sal;
    }
    else
    {
        cout << "Inv�lido";
    }


    return EXIT_SUCCESS ;
}

