#include <iostream>
#include<ctime>
using namespace std;
#define tam 10
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int i;
    float vetor[tam], media=0, menor, maior;

    cout << fixed;
    cout.precision(2);

    for(i=0; i<tam; i++){
        vetor[i] = rand();

        if(i==0 || vetor[i] > maior){
            maior = vetor[i];
        }
        if(i==0 || vetor[i] < menor){
            menor = vetor[i];
        }

        media += vetor[i];
    }
    media /= tam;

    cout << "Vetor: ";
    for(i=0; i<tam; i++){
        cout << vetor[i] << ", ";
    }

    cout << "\n\nMaior valor: " << maior << ".\nMenor valor: " << menor << ".\nMedia: " << media << "." << endl;

    return EXIT_SUCCESS;
}
