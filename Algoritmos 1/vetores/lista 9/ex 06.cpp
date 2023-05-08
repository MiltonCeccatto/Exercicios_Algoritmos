#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define TAM 6

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    cout << fixed << setprecision(2);

    //vetor
    int aposta[TAM];
    int sorteados[TAM];

    int numero;
    int acertos = 0;


    bool repetirLeitura;

    cout << "###Informe os n�meros da aposta####\n";
    for(int i=0; i<TAM; i++)
    {

        do{
            cout << "Informe um n�mero entre 1 a 60: ";
            cin >> numero;

            repetirLeitura = false;

            if(numero<1 || numero>60)
                repetirLeitura = true;
            else //verica numeros repetidos
            {
                for(int k=0; k<i; k++)
                {
                    if(aposta[k] == numero)
                    {
                        repetirLeitura = true;
                        break;
                    }
                }
            }

            if(repetirLeitura == false)
                aposta[i] = numero;


        }while(repetirLeitura == true); //se o n�mero � peretido, uma nova leitura ser� realizada

    }

    cout << "\nAposta: ";
    for(int i=0; i<TAM; i++)
    {
        cout << aposta[i];
        if(i<TAM-1)
            cout << ", ";
    }
    cout << endl;


    cout << "###Sortear n�meros####\n";
    for(int i=0; i<TAM; i++)
    {

        do{
            numero = rand()%60 +1;

            repetirLeitura = false;


            for(int k=0; k<i; k++)
            {
                if(sorteados[k] == numero)
                {
                    repetirLeitura = true;
                    break;
                }
            }


            if(repetirLeitura == false)
                sorteados[i] = numero;


        }while(repetirLeitura == true); //se o n�mero � peretido, uma nova leitura ser� realizada

    }

    cout << "\nSorteados: ";
    for(int i=0; i<TAM; i++)
    {
        cout << sorteados[i];
        if(i<TAM-1)
            cout << ", ";
    }
    cout << endl;


    //verificar os acertos
    for(int i=0; i<TAM; i++)
    {
        for(int k=0; k<TAM; k++)
        {
            if(aposta[i] == sorteados[k])
            {
                acertos++;
                break;
            }

        }

    }

    cout << "\nAcertos: " << acertos << endl;

    if(acertos < 4)
        cout << "\nVoc� n�o ganhou nada\n";
    else if(acertos == 4)
        cout << "\nVoc� acertou a quadra\n";
    else if(acertos == 5)
        cout << "\nVoc� acertou a quina\n";
    else if(acertos == 6)
        cout << "\nParab�ns voc� est� milion�rio\n";


}
