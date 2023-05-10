#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace std;

main(){
    int l, c;
    cout << "Informe o numero de linhas: ";
    cin >> l;
    fflush(stdin);

    cout << "Informe o numero de colunas: ";
    cin >> c;
    fflush(stdin);

    int *mat = new int[l * c];
    int i;
    srand(time(NULL));
    for(i = 0; i < (l * c); i++)
    {
        *mat = rand() % 500;
        mat++;
    }

    mat-=i;

    for(i = 0; i < (l *c); i++)
    {
        cout << *mat << ", ";
        mat++;
    }

    delete mat;


}
