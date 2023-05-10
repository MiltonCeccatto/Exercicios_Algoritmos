#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstring>
using namespace std;


main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    char texto[30], aux[30];

    cout << "Digite um texto: ";
    cin.getline(texto, sizeof(texto));

   for(int i = 0; i < sizeof(texto); i++){
        if (isspace(texto[i])){
            aux[i] = texto[i+1];
        } else
        aux[i] = texto[i];
    }

    cout << texto << endl;
    cout << aux << endl;



return 0;
}
