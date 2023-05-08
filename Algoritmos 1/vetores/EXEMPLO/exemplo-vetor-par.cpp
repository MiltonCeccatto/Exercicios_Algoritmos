#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define TAM 5

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    cout << fixed << setprecision(2);

    //vetor
    int V[TAM];
    int VPAR[TAM];
    int contPar =0;



    for(int i=0; i<TAM; i++)
        V[i] = rand() % 100;

    cout << "V: ";
    for(int i=0; i<TAM; i++)
        cout << V[i] << ", ";
    cout << endl << endl;

     for(int i=0; i<TAM; i++)
     {
         if(V[i]%2 == 0)
         {
            VPAR[contPar] = V[i];
            contPar++;
         }

     }


    cout << "VPAR: ";
    for(int i=0; i<contPar; i++)
        cout << VPAR[i] << ", ";
    cout << endl << endl;


}
