#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

#define tam 5

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v[tam];
    int valor;
    int total = 0;
    bool repetido, trocou;
    int aux = 0;

    srand(time(NULL));

    do{
        valor = rand()%5;
        repetido = false;
        for(int j=0; j<tam; j++){
            if(v[j] == valor)
                repetido = true;
        }
            if(repetido == false){
                v[total] = valor;
                total ++;
            }
    } while(total < 5);

    do{
        trocou = false;
        for (int k=0; k<tam-1; k++){
            if (v[k] > v[k+1]){
                aux = v[k];
                v[k] = v[k+1];
                v[k+1] = aux;
                trocou = true;
            }
        }

    }while(trocou == true);

    cout << "Vetor [";
    for(int i = 0; i < tam; i++) {
        cout << v[i];
        if(i < tam - 1)
            cout << ", ";
        else
            cout << "]" << endl;
    }


}
