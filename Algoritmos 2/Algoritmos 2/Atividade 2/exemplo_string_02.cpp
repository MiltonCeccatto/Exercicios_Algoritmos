
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;



main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    string nome;
    cout << "INforme seu nome: ";
    getline(cin, nome);
    fflush(stdin);

    cout << nome << endl;


    for(int i = 0; i < nome.size(); i++ )
    {
        nome[i] = tolower(nome[i]);
    }

    for(int i = 0; i < nome.size(); i++)
    {
        if (i == 0)
        {
            nome[i] = toupper(nome[i]);
        }
        else if (isspace(nome[i]))
        {

            nome[i+1] = toupper(nome[i+1]);
        }

    }

    cout << nome << endl;

}

