#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;



main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    char nome[50], sobreNome[50];
    cout << "informe o nome: ";
    gets(nome);
    fflush(stdin);
    cout << "Informe o sobrenome" << endl;
    gets(sobreNome);
    fflush(stdin);
    cout << nome << endl;
    cout << sobreNome << endl;

    strcat(nome, " ");
    strcat(nome, sobreNome);
   // cout << "Digite outro nome - somente 10 caracteres: " ;
    //cin.getline(nome, sizeof(nome));
    cout << nome<< endl;


}

