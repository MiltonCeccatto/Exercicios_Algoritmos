#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;



main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));


    float vetor[10];
    float aux;

    cout << fixed;
    cout.precision(2);

    // Cria o vetor
    for (int i = 0; i < 10; i++){
        vetor[i] =  rand()%60 *1.2;
    }

    //Exibe o vetor criado
    cout << "Valores gerados para o vetor: " << endl;
    for (int i = 0; i < 10; i++){
        cout << vetor[i] << ", ";
    }

    //Ordena o vetor
    for (int i = 0; i < 10 ; i++){
        for (int j = 0; j < 10;j++){
            if (vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    //Exibe o vetor ordenado
    cout << endl << endl;
    cout << "Vetor ordenado" << endl;
    for (int i = 0; i < 10; i++){
        cout << vetor[i] << ", ";
    }

    //Valores arredondados para cima
    cout << endl << endl;
    cout << "Vetor com valores arredondados para cima " << endl;
    for (int i = 0; i < 10; i++){
        cout << ceil(vetor[i]) << ", ";
    }

    //Valores arredondados para baixo
    cout << endl << endl;
    cout << "Vetor com valores arredondados para baixo " << endl;
    for (int i = 0; i < 10; i++){
        cout << floor(vetor[i]) << ", ";
    }

    cout << endl << endl;
    cout << "Vetor com valores ordenados pela primeira casa decimal " << endl;
    for (int i = 0; i < 10; i++){
        cout << round(vetor[i]) << ", ";
    }
}
