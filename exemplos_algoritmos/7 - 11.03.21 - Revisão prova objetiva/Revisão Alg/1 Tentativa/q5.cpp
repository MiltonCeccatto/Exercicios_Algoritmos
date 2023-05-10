#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;



main(){
    setlocale(LC_ALL, "Portuguese");

    int x = 9;

    if(((x >= 0) && (x <= 5)) || (x % 2 != 0))
        cout << "valor válido";
    else
        cout << "valor inválido";

}



