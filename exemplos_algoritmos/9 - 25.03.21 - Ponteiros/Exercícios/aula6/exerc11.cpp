#include <iostream>]
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

#define tam 10

using namespace std;

void gerar(int *x);
void mostrar(int *x);
void soma(int *x);
void maiormenor(int*x);
void consulta(int *x);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x[tam];
    int menu = -1;
    int leu = 0;

    while(menu != 0) {
        cout << "***************************************************" << endl;
        cout << "* Estoque -> Opções possíveis:                    *" << endl;
        cout << "*                                                 *" << endl;
        cout << "* 0. Sair do programa                             *" << endl;
        cout << "* 1. Gerar valores                                *" << endl;
        cout << "* 2. Mostrar o vetor                              *" << endl;
        cout << "* 3. Mostrar a soma dos valores                   *" << endl;
        cout << "* 4. Mostrar o maior e menor valor                *" << endl;
        cout << "* 5. Solicitar valor, indicando se está           *" << endl;
        cout << "*    presente e mostrando sua posição             *" << endl;
        cout << "*                                                 *" << endl;
        cout << "***************************************************" << endl;

        cout << endl;

        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        cout << endl;

        switch(menu) {
            case 0:
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            case 1:
                gerar(x);
                leu = 1;
                cout << "Vetor gerado!" << endl << endl;
                break;

            case 2:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else{
                    mostrar(x);
                    cout << endl;
                }
                break;

            case 3:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else{
                    soma(x);
                    cout << endl;
                }
                break;

            case 4:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    maiormenor(x);
                    cout << endl;
                }
                break;

            case 5:
                system("cls");
                if(leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    consulta(x);
                    cout << endl;
                }
                break;

            default:
                system("cls");
                cout << "Opção inválida!" << endl << endl;
                break;
        }
        system("pause");
        system("cls");
    }
}

void gerar(int *x){
    system("cls");

    srand(time(NULL));

    int valor;
    bool nRepetido = true;
    bool repetido = false;

    //Sem repetição
    for (int i = 0; i < tam; ++i) {
       do{
          x[i] = rand() % 100;
          valor = nRepetido;
          for (int j = 0; (j < i) && (valor == nRepetido); ++j)
             if (x[i] == x[j])
                valor = repetido;
       }while (valor == repetido);
    }

    cout << "OPÇÃO 1 - GERAR VALORES" << endl << endl;
}

void mostrar(int *x){
    cout << "OPÇÃO 2 - MOSTRAR VETOR" << endl << endl;

    cout << "[";
    for (int i = 0; i < tam; i++) {
        cout << x[i];
        if(i < tam - 1)
            cout << ", ";
        else
            cout << "]";
    }

    cout << endl << endl;
}

void soma(int *x){
    int resultado = 0;

    for(int i = 0; i < tam; i++)
        resultado += x[i];

    cout << "OPÇÃO 3 - SOMA DOS VALORES" << endl << endl;

    cout << "A soma dos valores é: " << resultado << endl;
}

void maiormenor(int *x){
    int maior = 0;
    int menor = 100;

    for(int i = 0; i < tam; i++){
        if(x[i] > maior)
            maior = x[i];
        if(x[i] < menor)
            menor = x[i];
    }

    cout << "OPÇÃO 4 - MAIOR E MENOR" << endl << endl;

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
}

void consulta(int *x){
    int valor, posicao;
    bool presente = false;

    cout << "OPÇÃO 5 - VALOR E SUA POSIÇÃO" << endl << endl;

    cout << "Informe o valor: ";
    cin >> valor;

    cout << endl;

    for(int i = 0; i < tam; i++){
        if(valor == x[i]){
            posicao = i;
            presente = true;
        }
    }

    if(presente == true)
        cout << "O valor " << valor << " está presente na posição " << posicao + 1 << endl;
    else
        cout << "O valor " << valor << " não está presente no vetor" << endl;
}
