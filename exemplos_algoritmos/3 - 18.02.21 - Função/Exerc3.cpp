#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
int leitura(char texto[100]);
void primo(int v1);
int somaAlg(int v1);

main(){
    setlocale(LC_ALL, "Portuguese");

    int menu = -1, n1, n2, leu = 0;

    do{
        system("cls");
        cout << "######MENU-PRIMOS######" << endl;
        cout << "# 0 - Sair            #" << endl;
        cout << "# 1 - Ler             #" << endl;
        cout << "# 2 - Verificar Primo #" << endl;
        cout << "# 3 - Soma Algarismos #" << endl;
        cout << "#######################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                n1 = leitura("Digite o valor 1: ");
                leu = 1;
                break;
            case 2 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario informar um valor primeiro";
                else
                    primo(n1);
                getchar();
                break;
            case 3 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else {
                    cout << "Soma dos algarismos é: " << somaAlg(n1) << endl;
                }
                getchar();
                break;
        };

    }while(menu != 0);
}

int leitura(char texto[100]){
    int n;
    cout << texto;
    cin >> n;
    return n;
}

void primo(int v1){

    int divisores = 0;

    for(int i = 1; i <= v1; i++){
        if(v1%i == 0)
            divisores++;
    }

    if(divisores == 2){
        cout << "O número " << v1 << " é primo!";
    } else {
        cout << "O número " << v1 << " não é primo!";
    }
}

int somaAlg(int v1){

    int soma = 0;

    while(v1 > 0){
        soma = soma + v1 % 10;
        v1 = int(v1 / 10);
    }

    return soma;
}
