#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define TAM 20

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    cout << fixed << setprecision(2);

    int V[TAM];
    int aux, contImpar = 0, contPar = 0;
    bool ordenado;


    for(int i=0; i<TAM; i++)
        V[i] = rand() % 51 + 35;

    cout << "V: ";
    for(int i=0; i<TAM; i++)
        cout << V[i] << ", ";
    cout << endl << endl;

    do
    {
        ordenado = true;
        for(int i=0; i<TAM-1; i++)
        {
            if(V[i] > V[i+1])
            {
                aux =  V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                ordenado = false;
            }
        }

    }while(ordenado == false);


    for (int i = 0; i < TAM;i++ ){
        if (V[i]%2!= 0 )
            contImpar++;
        else
            contPar++;
    }



    cout << "V: ";
    for(int i=0; i<TAM; i++)
        cout << V[i] << ", ";
    cout << endl << endl;


     if (contPar > contImpar) {
        cout << "A maior quantidade de elementos é par "<< endl;
        cout << "E o número de elementos é: " << contPar;
    } else if (contImpar > contPar) {
        cout << "A maior quantidade de elementos é impar "<< endl;
        cout << "E o número de elementos é: " << contImpar;
    } else if ( contPar == contImpar){
        cout << "A quantidade de elementos pares e impares é a mesma" << endl;
        cout << "A quantidade de elementos é: " << contPar;
    }

    cout << endl;





}
