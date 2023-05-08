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
    int x[TAM], y[TAM], z[TAM],w[TAM],s[TAM],u[20],maiorQ ;
    int aux1, aux2, contPrimo;
    bool ordenadoX, ordenadoY;


    for(int i=0; i<TAM; i++)
    {
        x[i] = rand()% 50;
        y[i] = rand()% 50;
    }

    for(int i=0; i<TAM; i++)
    {
        cout << "x" << i <<": " << x[i];
        cout << "\t\t";
        cout << "y" << i <<": " << y[i];
        cout << endl;
    }

    cout << endl;


    do
    {
        ordenadoX = true;
        ordenadoY = true;
        for(int i=0; i<TAM-1; i++)
        {
            if(x[i] > x[i+1])
            {
                aux1 =  x[i];
                x[i] = x[i+1];
                x[i+1] = aux1;
                ordenadoX = false;
            }

            if(y[i] < y[i+1])
            {
                aux2 = y[i];
                y[i] = y[i+1];
                y[i+1] = aux2;
                ordenadoY = false;
            }
        }

    }
    while(ordenadoX == false && ordenadoY == false);

    for (int i = 0; i<TAM; i++)
    {
        if (x[i]%2 != 0)
            z[i] = x[i];
        else
            z[i] = 0;
    }

    for (int i = 0; i<TAM; i++)
    {
        if (x[i]%2 == 0)
            w[i] = x[i];
        else
            w[i] = 0;
    }

    for (int j = 0; j<TAM; j++)
    {
        for (int i = 0; i<TAM; i++)
        {
            if (x[i] > 30)
                 maiorQ = x[i];
        }
        s[j] = maiorQ  ;
        maiorQ = 1;
    }



    cout << "x: ";
    for(int i=0; i<TAM; i++)
        cout << x[i] << ", ";
    cout << endl << endl;

    cout << "y: ";
    for(int i=0; i<TAM; i++)
        cout << y[i] << ", ";
    cout << endl << endl;

    cout << "z: ";
    for(int i=0; i<TAM; i++)
        cout << z[i] << ", ";
    cout << endl << endl;

    cout << "w: ";
    for(int i=0; i<TAM; i++)
        cout << w[i] << ", ";
    cout << endl << endl;

    cout << "s: ";
    for(int i=0; i<TAM; i++)
        cout << s[i] << ", ";
    cout << endl << endl;




}
