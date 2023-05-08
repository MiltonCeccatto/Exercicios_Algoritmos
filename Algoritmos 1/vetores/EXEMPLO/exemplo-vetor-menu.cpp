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
    int continuar;
    int menu;
    float soma;
    int menor;

    for(int i=0; i<TAM; i++)
        V[i] = rand()%10;

    do
    {
        system("cls");
        cout << "###MENU###\n";
        cout << "1- Gerar vetor\n";
        cout << "2- Mostar vetor\n";
        cout << "3- Soma\n";
        cout << "4- Menor\n";
        cout << "5- Sair\n";
        cin >> menu;
        if(menu == 1)
        {
            for(int i=0; i<TAM; i++)
                V[i] = rand()%10;

            cout << "Vetor gerado com sucesso!\n";
        }
        else if(menu == 2)
        {
            cout << "\nV: ";
            for(int i=0; i<TAM; i++)
            {
                cout << V[i];
                if(i<TAM-1)
                    cout << ", ";
            }
            cout << endl;
        }
        else if(menu == 3)
        {
            soma = 0;
            for(int i=0; i<TAM; i++)
                soma += V[i];

            cout << "Soma: " << soma << endl;
        }
        else if(menu == 4)
        {
            for(int i=0; i<TAM; i++)
            {

                if(i ==0 || V[i] < menor)
                   menor = V[i];
            }


            cout << "Menor: " << menor << endl;
        }

        cout << "Deseja continuar (1-SIM, 0-NAO): ";
        cin >> continuar;

    }while(continuar==1);



}
