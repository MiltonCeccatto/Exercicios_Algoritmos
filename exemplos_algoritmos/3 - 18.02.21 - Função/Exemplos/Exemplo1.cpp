#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int leitura(char texto[100]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int menu - -1,n1, n2;

    do{
        system("CLS");
        cout << "######MENU######" << endl;
        cout << "# 0 - Sair     #" << endl;
        cout << "# 1 - Ler      #" << endl;
        cout << "# 2 - Mostrar  #" << endl;
        cout << "# 3 - Calcular #" << endl;
        cout << "################" << endl;
        cout << "Sua escolha: ";
        cin >>  menu;

        switch(menu){
            case 0:
                system("CLS");
                cout << "Programa Finalizado";
                getchar();
                break;
            case 1:
                system("CLS");
                n1 = leitura("Digite o valor 1: ");
                n2 = leitura("Digite o valor 2: ");
                break;
            case 2:
                system("CLS");
                mostra(n1, n2);
                getchar();
                break;

        }
    } while(menu != 0);

}

int leitura(char texto[100]){
    int n;
    cout << texto;
    cin >> n;
    return n;
}

void mostra(v1, v2)
