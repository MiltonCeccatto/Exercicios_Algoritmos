
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

bool Existe(int valores[], int tam, int valor)
{
    for (int i = 0; i <tam; i++)
    {
        if(valores[i] == valor)
            return true;
    }
    return false;
}

void geraAleatorios(int numeros[], int quantNumeros, int limite)
{
    srand(time(NULL));

    int v;
    for(int i = 0; i<quantNumeros; i++)
    {
        v = rand()%limite +15;
        while(Existe(numeros,i,v))
        {
            v = rand()%limite + 15;
        }
        numeros[i] = v;
    }
}

main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros[10];
    int aux, contImpar=0, contPar=0, somaTotal;
    float percentPar, percentImpar, media;




    geraAleatorios(numeros,10,35);
    cout << "####  Vetor  ####" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << numeros[i] << ", ";
    }

    for(int i = 0; i < 10; i++)
    {
        for (int j = 0; j< 10; j++)
        {
            if (numeros[i] > numeros [j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    cout << endl << endl;
    cout << "###  Vetor em ordem decrescente  ###" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << numeros[i] << ", ";
    }

    for (int i = 0; i<10; i++){
        somaTotal += numeros[i];
        if (numeros[i]%2 == 0)
            contPar++;
        else
            contImpar++;
    }

    percentImpar = (contImpar*100.0)/10;
    percentPar = (contPar*100.0)/10;

    media = somaTotal/10.0;

    cout << "\n\nPorcentagem de n�meros �mpares: " << percentImpar << "%";
    cout << "\n\nPorcentagem de n�meros Pares: " << percentPar << "%";
    cout << "\n\nA soma total dos n�meros �: " << somaTotal;
    cout << "\n\nA m�dia �: " << media;
}
