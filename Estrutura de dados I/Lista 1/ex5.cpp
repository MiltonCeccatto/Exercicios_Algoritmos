#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace std;

void GerarValores(int **vetor, int qtd, bool &foiGerado);
void MostrarVetor(int **vetor, int qtd);

main()
{
    srand(time(NULL));
    setlocale (LC_ALL, "Portuguese");

    int *Vetor = NULL;
    int tamanho;

    cout << "Informe a quantidade de números no vetor : ";
    cin >> tamanho;
    fflush(stdin);

    bool gerado = false;
    bool continua = true;
    int menu;


    cout << "######## MENU ###########" << endl;
    cout << "#                       #" << endl;
    cout << "# 1 - Mostrar Valores   #" << endl;
    cout << "# 2 - Gerar Valores     #" << endl;
    cout << "# 0 - Sair              #" << endl;
    cout << "#                       #" << endl;
    cout << "#########################" << endl;

    do {
        cout << "MENU:";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0 :
                continua = false;
                delete[] Vetor;
                break;
            case 1 :
                {
                    if(gerado == false){
                        cout << "Primeiro gere os valores ! " << endl;
                        break;
                    }else{
                        MostrarVetor(&Vetor, tamanho);
                        break;
                    }
                }
            case 2 :
                GerarValores(&Vetor, tamanho, gerado);
                break;
            default :
                cout << "Menu inválido !" << endl;
                break;
        }
    }while(continua == true);

}

void GerarValores(int **vetor, int qtd, bool &foiGerado){

    foiGerado = true;
    if(*vetor)
      delete[] *vetor;
    *vetor = new int[qtd];
    for(int i = 0; i < qtd; i++){
        *(*vetor + i) = rand()%50;
    }

    cout << "Valores gerados com sucesso " << endl;

}

void MostrarVetor(int **vetor, int qtd){

    for(int i = 0; i < qtd; i++){
        cout << *(*vetor + i) << " | ";
    }
    cout << endl;
}
