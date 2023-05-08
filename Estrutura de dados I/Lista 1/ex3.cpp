#include <iostream>
#include <ctime>
using namespace std;

void GerarValores(int **v);
void MostrarVetor(int *v);
main()
{
    srand(time(NULL));
    int *vetor = NULL;
    int menu;
    bool continua = true;


    cout << " MENU " << endl;
    cout << " 1 - Gerar Vetor " << endl;
    cout << " 2 - Mostrar Vetor " << endl;
    cout << " 0 - Sair do programa " << endl;
    do
    {
        cout << "Menu: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            continua = false;
            break;
        case 1 :
            GerarValores(&vetor);
            break;
        case 2 :
            MostrarVetor(vetor);
            break;
        default :
            cout << "Menu não existente " << endl;

        }
    }
    while(continua == true);

    delete[] vetor;
    vetor = NULL;
}

void GerarValores(int **v)
{
    if(*v != NULL){
        delete[]*v;
        cout << "Valores antigos deletados" << endl;
    }

    *v = new int[10];
    for(int i = 0; i < 10; i++)
    {
        *(*v + i) = rand()% 31 + 20;
    }
    cout << "Valores Gerados com sucesso " << endl;

}

void MostrarVetor(int *v)
{

    if(v != NULL)
    {
        for(int i = 0; i < 10; i++)
        {
            cout << *(v + i) << " | ";
        }
        cout << endl;
    }
    else
    {
        cout << "Vetor esta nulo" << endl;
    }
}

