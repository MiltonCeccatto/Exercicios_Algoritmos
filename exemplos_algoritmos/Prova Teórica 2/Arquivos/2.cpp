#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

void avaliar(int *vetor);

main(){
    setlocale(LC_ALL, "Portuguese");

    int *px = new int[4];
    int i = 0;
    int cont = 1;

    while(i < 5){
        *px = cont;
        cout << *px << " ";
        i++;
        cont++;
        px++;
    }

    px -= i;
    i = 0;

    /*while(i < 5){
        cout << *px << " ";
        i++;
        px++;
    }*/

    px -= i;
    i = 0;

    cout << endl;

    cout << *(px + 2) <<  endl;
    //cout << *(px + 3) <<  endl;
    //cout << px + 3 <<  endl;
    //cout << *px + 2 <<  endl;


}
