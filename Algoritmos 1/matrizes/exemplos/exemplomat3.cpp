#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define TOTAL_LIN 4
#define TOTAL_COL 4

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    cout << fixed << setprecision(2);
    //const int TAM = 100;
    int M[TOTAL_LIN][TOTAL_COL];

    for(int lin=0; lin<TOTAL_LIN; lin++)
    {
        for(int col=0; col<TOTAL_COL; col++)
        {
            M[lin][col] = rand()%100;
        }
    }

    cout << "Matriz M:\n";
    for(int lin=0; lin<TOTAL_LIN; lin++)
    {
        for(int col=0; col<TOTAL_COL; col++)
        {
            cout << M[lin][col] << "\t";
        }
        cout << endl;

    }
    cout << endl;


    cout << "Diagonal principal: ";
    for(int lin=0; lin<TOTAL_LIN; lin++)
    {
        for(int col=0; col<TOTAL_COL; col++)
        {
            if(lin == col)
                cout << M[lin][col] << ", ";
        }

    }
    cout << endl;


    cout << "\n\nAcima da diagonal\n";
    for(int lin=0; lin<TOTAL_LIN; lin++)
    {
        for(int col=0; col<TOTAL_COL; col++)
        {
            if(lin < col)
                cout << M[lin][col] << "\t";
            else
                cout << "-\t";
        }
        cout <<endl;

    }
    cout << endl;

    cout << "\n\nAbaixo da diagonal\n";
    for(int lin=0; lin<TOTAL_LIN; lin++)
    {
        for(int col=0; col<TOTAL_COL; col++)
        {
            if(lin > col)
                cout << M[lin][col] << "\t";
            else
                cout << "-\t";
        }
        cout <<endl;

    }
    cout << endl;


    cout << "\n\nDiagonal secundária\n";
    for(int lin=0; lin<TOTAL_LIN; lin++)
    {
        for(int col=0; col<TOTAL_COL; col++)
        {
            if(lin + col == 4-1) //matriz quandra de ordem 4, então fica 4-1
                cout << M[lin][col] << "\t";
            else
                cout << "-\t";
        }
        cout <<endl;

    }
    cout << endl;




}
