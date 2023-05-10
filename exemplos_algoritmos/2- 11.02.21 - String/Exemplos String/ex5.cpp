#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string str1, str2, str3, a_maior, a_menor, a_media;
    int n, cont, maior, menor, media, i;

    cout << "Insira a string 1: ";
    getline(cin, str1);

    cout << "Insira a string 2: ";
    getline(cin, str2);

    cout << "Insira a string 3: ";
    getline(cin, str3);

    /// Maior

    if(str1 > str2 && str1 > str3)
        a_maior = str1;

    if(str2 > str1 && str2 > str3)
        a_maior = str2;

    if(str3 > str1 && str3 > str2)
        a_maior = str3;

    /// Menor

    if(str1 < str2 && str1 < str3)
        a_menor = str1;

    if(str2 < str1 && str2 < str3)
        a_menor = str2;

    if(str3 < str1 && str3 < str2)
        a_menor = str3;

    /// Média

    if(/*(*/str1 != a_maior && str1 != a_menor)
        a_media = str1;

    else if(/*(*/str2 != a_maior && str2 != a_menor)
        a_media = str2;

    else if(/*(*/str3 != a_maior && str3 != a_menor)
        a_media = str3;

    /// Iguais

    cout << endl;


    cout << "Maior string: " << a_maior << endl;
    cout << "String média: " << a_media << endl;
    cout << "Menor string: " << a_menor << endl;

    cout << endl;

    for(int i = 0; i <= a_maior.size(); i++) {
        a_maior[i] = toupper(a_maior[i]);
    }

    for(int i = 0; i <= a_media.size(); i++) {
        a_media[i] = toupper(a_media[i]);
    }

    for(int i = 0; i <= a_menor.size(); i++) {
        a_menor[i] = toupper(a_menor[i]);
    }

    cout << "Strings em ordem crescente: " << endl;
    cout << a_menor << endl;
    cout << a_media << endl;
    cout << a_maior << endl;
}
