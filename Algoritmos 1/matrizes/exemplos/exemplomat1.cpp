#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define TOTAL_LIN 7
#define TOTAL_COL 3

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


    for(int lin=0; lin<TOTAL_LIN; lin++)
    {
        for(int col=0; col<TOTAL_COL; col++)
        {
            cout << M[lin][col] << "\t";
        }
        cout << endl;
    }
    cout << endl;



}
