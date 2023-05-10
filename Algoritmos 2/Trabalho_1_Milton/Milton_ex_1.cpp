#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

using namespace std;

string Inverte(string num, int tam);
string lerNumero(string &num);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string numero;
    int continua = 1;

    do
    {
        lerNumero(numero);
        if (numero.size() >= 3)
        {
            cout << "O número invertido é : " <<  Inverte(numero, numero.size()) << endl;
            continua = 0;
        }
        else
        {
            cout << "Insira um número maior que 100 !!!" << endl << endl;
        }
    }
    while(continua != 0);

}

string lerNumero(string &num)
{
    cout << "Informe um número maior que 100 :";
    getline(cin, num);
    cout << "Número informado : " << num << endl << endl;
    return num;
}

string Inverte(string num, int tam)
{
    if(tam == 0)
    {
        return "\0";
    }
    else
    {
        return num[tam-1] + Inverte(num, tam-1);
    }
}










