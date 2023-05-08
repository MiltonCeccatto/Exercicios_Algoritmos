#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define TAM 10

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    cout << fixed << setprecision(2);

    //vetor
    int V[TAM];
    int maior, menor, contImpar=0;
    float soma=0, media, somaPares=0, percIMpares;

    for(int i=0; i<TAM; i++)
    {
        V[i] = rand()%10;
    }

    for(int i=0; i<TAM; i++)
    {
        soma += V[i];

        if(i ==0 || V[i] > maior)
           maior = V[i];

        if(i ==0 || V[i] < menor)
           menor = V[i];

        if(V[i] % 2 == 0)
            somaPares+= V[i];

        if(V[i] %2 != 0)
            contImpar++;

    }
    percIMpares = (contImpar * 100.0) / TAM;



    media = soma / TAM;
    cout << "Porcentagem de ímpares: " << percIMpares << "%" << endl;
    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
    cout << "Média: " << media << endl;
    cout << "Soma: " << soma << endl;
    cout << "Soma DOS PARES: " << somaPares << endl;


    cout << "\nV: ";
    for(int i=0; i<TAM; i++)
    {
        cout << V[i];
        if(i<TAM-1)
            cout << ", ";
    }
    cout << endl;


}
