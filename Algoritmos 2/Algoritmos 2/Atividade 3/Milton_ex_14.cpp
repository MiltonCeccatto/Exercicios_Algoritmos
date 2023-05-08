#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;

void LerValor(int &a)
{
    cout << "###### CAIXA ELETÔNICO ######" << endl;
    cout << "Insira um valor para ser sacado: ";
    cin >> a;

}

void Troco(int numero)
{
    enum {nota_cem,nota_cinquenta, nota_vinte, nota_dez, nota_cinco,nota_dois};
    /* enum{moeda1,moeda50,moeda25,moeda10,moeda5, moeda01};*/
    int contNotas[6];
    /*int contMoedas[6];*/

     for(int i = 0; i < 6; i++)
    {
        contNotas[i] = 0;
    }

    const char*Notas[] = {"Notas de 100: ","Notas de 50: ","Notas de 20: ","Notas de 10: ","Notas de 5: ","Notas de 2: "};
    /*const char*Moedas[] = {"Moeadas de 1: ", "Moeadas de 50: ", "Moeadas de 25: ", "Moedas de 10: ", "Moedas de 5: "};*/


    while(numero != 0)
    {
        if (numero%5 == 0)
        {
            if(numero >= 100 )
            {
                contNotas[nota_cem]++;
                numero -= 100;
            }
            else if(numero >= 50)
            {

                contNotas[nota_cinquenta]++;
                numero -= 50;
            }
            else if (numero >= 20)
            {

                contNotas[nota_vinte]++;
                numero -=20;
            }
            else if (numero >= 10)
            {

                contNotas[nota_dez]++;
                numero -= 10;
            }
            else
            {

                contNotas[nota_cinco]++;
                numero -= 5;
            }
        }
        else
        {

            contNotas[nota_dois]++;
            numero -= 2;
        }

    }

    /*
    contMoedas[moeda1] = (int)numero/1;
    numero -= (contMoedas[moeda1]*1);

    contMoedas[moeda50] = (int)(numero/0.5);
    numero -= (contMoedas[moeda50]*0.5);

    contMoedas[moeda25] = (int)(numero/0.25);
    numero -= (contMoedas[moeda25]*0.25);

    contMoedas[moeda10] = (int)(numero/0.10);
    numero -= (contMoedas[moeda10]*0.10);

    contMoedas[moeda5] = (int)(numero/0.05);
    numero -= (contMoedas[moeda5]*0.05);*/




    for(int i = 0; i < 6; i++)
    {
        if(contNotas[i] != 0)
            cout << Notas[i] << " " <<contNotas[i] << endl;
    }

    /* for( int i = 0; i< 5; i++){
         if(contMoedas[i] != 0 ){
             cout << Moedas[i] << " " << contMoedas[i] << endl;
         }
     }*/
// para usar as moedas o número de entrada deve ser mudado para float

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Numero;
    int continua = 1;

    do
    {
        system("cls");
        LerValor(Numero);

        cout << endl;

        if (Numero < 0.01)
            cout << "Insira um número válido !!"<< endl;
        else
        {
            Troco(Numero);
        }

        cout << endl;
        cout << " 1 - para retirar um valor valor" << endl;
        cout << " 0 - para sair do programa " << endl;
        cin >> continua;

    }
    while(continua != 0);

}




