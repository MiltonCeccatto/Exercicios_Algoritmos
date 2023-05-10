#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 5, *p;
    p = &i;

    cout << "Normal: " << *p << endl;
    cout << "Endereço: " << p << endl << endl;

    cout << "Primeira: " << **&p + 4 << endl;
    cout << "Segunda: " << *p + 2 << endl;
    cout << "Terceira: " << **&p << endl;
    cout << "Quarta: " << p << endl;
    cout << "Quinta: " << 3 * *p << endl;


}

