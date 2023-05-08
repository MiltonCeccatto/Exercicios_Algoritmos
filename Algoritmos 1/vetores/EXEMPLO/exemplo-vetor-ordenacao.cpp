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

    //vetor
    int V[TAM];
    int aux;
    bool ordenado;


    for(int i=0; i<TAM; i++)
        V[i] = rand() % 100;

    cout << "V: ";
    for(int i=0; i<TAM; i++)
        cout << V[i] << ", ";
    cout << endl << endl;

    do
    {
        ordenado = true;
        for(int i=0; i<TAM-1; i++)
        {
            if(V[i] < V[i+1])
            {
                aux =  V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                ordenado = false;
            }
        }

    }while(ordenado == false);


    cout << "V: ";
    for(int i=0; i<TAM; i++)
        cout << V[i] << ", ";
    cout << endl << endl;


}
