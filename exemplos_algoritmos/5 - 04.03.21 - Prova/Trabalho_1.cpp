#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

#define TAM 20

using namespace std;

void gerar(int V[]);
void mostrar(int V[]);
void maior(int V[]);
void ordem(int V[]);

main(){
    setlocale(LC_ALL, "Portuguese");

    int menu = -1, leu = 0;
    int Vet[TAM];

    while(menu != 0){
        system("cls");
        cout << "##########MENU##########" << endl;
        cout << "# 0 - Sair             #" << endl;
        cout << "# 1 - Gerar            #" << endl;
        cout << "# 2 - Mostrar          #" << endl;
        cout << "# 3 - Maior e Posição  #" << endl;
        cout << "# 4 - Exibir Ordenado  #" << endl;
        cout << "########################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0:
                system("cls");
                cout << "Programa Finalizado!" << endl << endl;
                break;
            case 1:
                gerar(&Vet[0]);
                leu = 1;
                cout << "Vetor gerado!" << endl << endl;
                break;
            case 2:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else{
                    mostrar(Vet);
                    cout << endl;
                }
                break;
            case 3:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    maior(Vet);
                    cout << endl;
                }
                break;
            case 4:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    ordem(Vet);
                    cout << endl;
                }
                break;
            default:
                system("cls");
                cout << "Opção inválida!" << endl << endl;
        }
        system("pause");
        system("cls");
    }
}

void gerar(int V[]){
    system("cls");

    srand(time(NULL));

    int valor;
    bool nRepetido = true;
    bool repetido = false;

    //Gera o vetor sem repetição
    for (int i = 0; i < TAM; ++i) {
       do{
          V[i] = rand() % 100;
          valor = nRepetido;
          for (int j = 0; (j < i) && (valor == nRepetido); ++j)
             if (V[i] == V[j])
                valor = repetido;
       }while (valor == repetido);
    }

    cout << "OPÇÃO 1 - GERAR VETOR" << endl << endl;

}

void mostrar(int V[]){
    cout << "OPÇÃO 2 - EXIBIR O VETOR COM 5 ELEMENTOS EM CADA LINHA" << endl << endl;

    //Exibe o vetor somente com 5 elementos em cada linha
    cout << "Vetor com 5 elementos em cada linha: " << endl;
    for (int i = 0; i < TAM; i++) {
        cout << V[i];
        if(i < TAM - 1){
            cout << "\t ";
            if (i == 4 || i == 9 || i == 14 || i == 19)
                cout << endl;
        }
    }

    cout << endl;
}

void maior(int V[]){
    int maior = V[0], posX;

    //Encontra o maior e passa para a var posX o índice de sua posição
    for(int i = 0; i < TAM; i++){
        if(V[i] > maior){
            maior = V[i];
            posX = i;
        }
    }

    cout << "OPÇÃO 3 - EXIBIR O MAIOR ELEMENTO E SUA POSIÇÃO" << endl << endl;

    cout << "V: [";
    for (int i = 0; i < TAM; i++) {
        cout << V[i];
        if(i < TAM - 1)
            cout << ", ";
        else
            cout << "]" << endl;
    }

    cout << endl;

    //posX + 1 Porque o loop inicia em 0
    cout << "O maior elemento é: " << maior << endl;
    cout << "Sua posição é: " << posX + 1 << "ª" << endl;
}

void ordem(int V[]){
    int cres[TAM], decre[TAM];
    int aux;
    bool trocou;

    //Passa o V para as variáveis cres e decre, assim não altera outras
    //mostragens no programa com o vetor original
    for(int i = 0; i < TAM; i++){
        cres[i] = V[i];
        decre[i] = V[i];
    }

    //Crescente
    do{
        trocou = false;
        for (int j = 0; j < TAM - 1; j++){
            if (cres[j] > cres[j + 1]){
                aux = cres[j];
                cres[j] = cres[j + 1];
                cres[j + 1] = aux;
                trocou = true;
            }
        }
    }while(trocou == true);

    //Decrescente
    do{
        trocou = false;
        for (int j = 0; j < TAM - 1; j++){
            if (decre[j] < decre[j + 1]){
                aux = decre[j];
                decre[j] = decre[j + 1];
                decre[j + 1] = aux;
                trocou = true;
            }
        }
    }while(trocou == true);

    cout << "OPÇÃO 4 - EXIBIR ORDENADO DE MANEIRA CRESCENTE E DECRESCENTE" << endl << endl;

    cout << "Vetor em ordem crescente: [";
    for (int i = 0; i < TAM; i++) {
        cout << cres[i];
        if(i < TAM - 1)
            cout << ", ";
        else
            cout << "]" << endl;
    }

    cout << endl;

    cout << "Vetor em ordem decrescente: [";
    for (int i = 0; i < TAM; i++){
        cout << decre[i];
        if(i < TAM - 1)
            cout << ", ";
        else
            cout << "]" << endl;
    }

    cout << endl;
}
