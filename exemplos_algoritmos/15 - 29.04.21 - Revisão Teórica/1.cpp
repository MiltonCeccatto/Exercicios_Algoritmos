#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

void converte(char *s);

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    char texto[100];
    cout << "Digite um texto qualquer: ";
    cin.getline(texto, sizeof(texto));

    converte(texto);

    cout << texto;

}

void converte(char *s){
    int i = 0;

    while(s[i] != '\0'){
        s[i] = toupper(s[i]);
        i++;
    }
}
