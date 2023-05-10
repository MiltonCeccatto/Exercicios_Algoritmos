#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string texto;
    char *ptexto;
    ptexto = &texto[0];
    int contMaiusculo = 0, contMinusculo = 0;

    cout << "Informe o texto: ";
    getline(cin, texto);

    system("cls");

    cout << "Texto informado: " << ptexto << endl << endl;

    for(int i = 0; i < strlen(ptexto); i++){
        if(islower(ptexto[i]))
            contMinusculo++;
        else if(isupper(ptexto[i]))
            contMaiusculo++;
    }

    cout << "Quantia de caracteres mai�sculos: " << contMaiusculo << endl;
    cout << "Quantia de caracteres min�sculos: " << contMinusculo << endl << endl;

    for(int i = 0; i < strlen(ptexto); i++){
        if(islower(ptexto[i]))
            ptexto[i] = toupper(ptexto[i]);
    }

    cout << "Texto em mai�sculo: " << texto << endl << endl;

    cout << "Texto ao contr�rio: ";
    for(int i = strlen(ptexto) - 1; i >= 0; i--){
        cout << ptexto[i];
    }

    cout << endl << endl;

    system("pause");

}
