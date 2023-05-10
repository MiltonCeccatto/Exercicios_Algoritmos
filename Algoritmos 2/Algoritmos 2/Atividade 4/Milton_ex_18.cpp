#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

#define TAM 10

using namespace std;
void GeraValores(int vet[TAM])
{
    int numero;
    int i = 0,igual;
    srand(time(NULL));

    do
    {

        numero = rand() % 35 + 15;// sorteia um número
            vet[i] = numero; // se o número for par ele salva

        igual = 0;
        for(int j = 0; j < i; j++)  // percorre a parte do vetor já preenchida
        {
            if(vet[j] == vet[i])
                igual = 1; // número repetido
        }

        if(igual == 0) // significa que o elemento não se repetiu
            i++;
    }

    while(i < TAM);   // enquanto não for sorteado 25 números diferentes

}

void Exibir(int vet[]){

    for(int i = 0; i < TAM; i++){
       cout << vet[i] << ", ";
    }

    cout << endl;
}

void Crescente(int vet[]){
    int aux = vet[0];
    for(int i = 0; i<TAM;i++){
        for(int j =0;j<TAM;j++){
            if (vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

     for(int i = 0; i < TAM; i++){
       cout << vet[i] << ", ";
    }

    cout << endl;

}

void Decrescente(int vet[]){
    int aux = vet[0];
    for(int i = 0; i<TAM;i++){
        for(int j =0;j<TAM;j++){
            if (vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

     for(int i = 0; i < TAM; i++){
       cout << vet[i] << ", ";
    }

    cout << endl;

}

void PercentNumeros(int vet[]){

    float PercentPar,PercentImpar;
    int contPar = 0, contImpar = 0;

    for (int i = 0; i < TAM; i++){
        if(vet[i]%2 != 0)
            contImpar++;
        else
            contPar++;
    }
    PercentPar = (100.0*contPar)/10;
    PercentImpar = (100.0*contImpar)/10;

    cout << "O percentual de números pares é: " << PercentPar << "%" << endl;
    cout << "O percentual de números ímpares é: " << PercentImpar <<"%"<< endl;

}

void ApresentaImpar(int vet[]){
    for (int i = 0; i <TAM;i++){
        if (i%2 != 0)
            cout << vet[i] << ", ";
    }
    cout << endl;

}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[TAM];
    int continua = 0, menu, foiGerado=0;

    cout << "#### MENU ####" << endl;
    cout << "1 - Para gerar o vetor" << endl;
    cout << "2 - Para exibir um vetor " << endl;
    cout << "3 - Ordena o vetor em ordem crescente" << endl;
    cout << "4 - Ordena o vetor em ordem decrescente" << endl;
    cout << "5 - Mostra o percentual de valores ímpares e pares" << endl;
    cout << "6 - Mostra os valores que estão em posiçoes inpares" << endl;
    cout << "0 - Para encerrar o programa " << endl;

    do{
        cout << "MENU: ";
        cin >> menu;

        switch(menu){
        case 1 :
            GeraValores(vetor);
            foiGerado = 1;
            cout << "Matriz gerada!!!"<< endl;
            break;
        case 2 :
            if (foiGerado == 0 ){
                cout << "Primeiro gere a matriz !!!" << endl;
                break;
            } else {
                Exibir(vetor);

                break;
            }
        case 3 :
            if (foiGerado == 0){
                cout << "Primeiro gere a matriz !!!"<< endl;
                break;
            }else{
                Crescente(vetor);
                break;
            }
        case 4 :
            if (foiGerado == 0 ){
                cout << "Primeiro gere a matriz !!! " << endl;
                break;
            } else {
                Decrescente(vetor);
                break;
            }
        case 5 :
            if (foiGerado == 0){
                cout << "Primeiro gere a matriz !!!" << endl;
                break;
            }else {
                PercentNumeros(vetor);
                break;
            }
        case 6 :
            if (foiGerado == 0 ){
                cout << "Primeiro gere a matriz !!!" << endl;
                break;
            } else {
                ApresentaImpar(vetor);
                break;
            }
        case 0 :
            continua = 1;
            break;
        default:
            cout << "Valor inválido "<< endl;
        }
    }while(continua != 1);


}




