#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    string texto;
    int v;
    cout<<"Digite um valor qualquer: ";
    getline(cin, texto);

    v = stoi(texto);
    //converte de string para inteiro mesma fun��o que o atoi que
    //� usado para vetor de char

    cout << v << endl;

    v = v + 5;
    //ap�s converter pode ser realizado opera��es matem�ticas

    cout << v << endl;

    texto = to_string(v);
    //converte para texto novamente

    cout << texto << endl;
}

