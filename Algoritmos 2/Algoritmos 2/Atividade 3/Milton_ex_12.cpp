#include <ctime>
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;

void GeraVetor(int v[]){
     srand(time(NULL));

    for (int i = 0; i < 10; i++){
        v[i] = rand()% 50 + 25;
    }

}

void MostraVetor(int v[]){
    for (int i = 0; i < 10; i++){
        cout << v[i] << ", ";
    }

}

void OrdenaVetor(int v[]){
    int aux;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if(v[i] < v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
        }
    }}


}

float Media(int v[]){
    float media, soma = 0;

    for(int i = 0; i < 10; i++){
        soma += v[i];
    }

    media = soma/10;

return media;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int menu;
    int continua = 1;
    int gerado = 0;

    cout << "#### MENU ####" << endl;
    cout << "1 - Cria um vetor com elementos aleatórios " << endl;
    cout << "2 - Mostra o vetor na tela " << endl;
    cout << "3 - Ordena o vetor em ordem crescente " << endl;
    cout << "4 - Retorna a média dos elementos do vetor " << endl;
    cout << "0 - Para sair do programa " << endl;

    do {

    cin >> menu;
    switch (menu) {
    case 1 :
        GeraVetor(vetor);
        cout << "Vetor criado !!" << endl;
        gerado = 1;
        break;
    case 2 :{
        if(gerado == 0){
            cout << "Primeiro gere o vetor !!" << endl;
            break;
        } else{
        MostraVetor(vetor);
        cout << endl;
        break;
        }
    }
    case 3 :
        if (gerado == 0){
            cout << "Primeiro gere o vetor !!" << endl;
            break;
        } else {
        OrdenaVetor(vetor);
        cout << "Vetor ordenado\n";
        MostraVetor(vetor);
        cout << endl;
        break;
        }
    case 4 :
        if(gerado == 0){
            cout << "Primeiro gere o vetor !!" << endl;
            break;
        }else{
        cout << "A média dos valores é: " << Media(vetor) << endl;
        break;
        }
    case 0 :
        continua = 0;
        break;
    default :
        cout << "Código inválido " << endl;
    }
    }while(continua != 0);



}


