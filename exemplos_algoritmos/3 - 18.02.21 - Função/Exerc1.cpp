#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;
float leitura(string texto);
void mostra(float baseMenor, float baseMaior, float altura);
float calcula(float baseMenor, float baseMaior, float altura);

main(){
    setlocale(LC_ALL, "Portuguese");

    int menu = -1, leu = 0;
    float baseMenor, baseMaior, altura;

    do{
        system("cls");
        cout << "######MENU######" << endl;
        cout << "# 0 - Sair     #" << endl;
        cout << "# 1 - Ler      #" << endl;
        cout << "# 2 - Mostrar  #" << endl;
        cout << "# 3 - Calcular #" << endl;
        cout << "################" << endl;
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
                baseMenor = leitura("Digite a base menor: ");
                baseMaior = leitura("Digite a base maior: ");
                altura = leitura("Digite a altura: ");
                leu = 1;
                break;
            case 2 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else
                    mostra(baseMenor, baseMaior, altura);
                getchar();
                break;
            case 3 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else {
                    cout << "A área do trapézio é: " << calcula(baseMenor, baseMaior, altura) << endl;
                }
                getchar();
                break;
        };

    }while(menu != 0);
}

float leitura(string texto){
    int n;
    cout << texto;
    cin >> n;
    return n;
}

void mostra(float baseMenor, float baseMaior, float altura){
    cout << "Base menor: " << baseMenor << endl;
    cout << "Base maior: " << baseMaior << endl;
    cout << "Altura: " << altura << endl;
}

float calcula(float baseMenor, float baseMaior, float altura){
    int a;

    a = ((baseMenor + baseMaior) * altura) / 2;
    return a;
}
