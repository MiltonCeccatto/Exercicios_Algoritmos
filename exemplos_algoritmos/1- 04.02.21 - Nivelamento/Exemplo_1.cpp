#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    int x = 85;
    cout.width(15);
    cout << "NOME";
    cout.width(35);
    cout << "IDADE";
    cout.width(20);
    cout << "SEXO" << endl;

    cout.width(15);
    cout << "Fulano de Tal  ";
    cout.width(35);
    cout << "21";
    cout.width(20);
    cout.fill('.');
    cout << "M" << endl;

    cout.width(15);
    cout.fill(' ');
    cout << "Beltrano de Tal";
    cout.width(35);
    cout.fill(' ');
    cout << "19";
    cout.width(20);
    cout.fill('.');
    cout << "M" << endl;
    //cout.width(10);

    //cout << ceil(x); exibe o valor de x arredondado para cima
    //x = ceil(x); atualiza o valor de x

}
