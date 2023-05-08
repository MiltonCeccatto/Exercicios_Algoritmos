
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;

void leitura(float &a, float &b, float &c){
    cout << "Informe o tamanho da base menor: ";
    cin >> a;
    fflush(stdin);

    cout << "Informe a base maior: ";
    cin >> b;
    fflush(stdin);

    cout << "Informe a altura: ";
    cin >> c;
    fflush(stdin);


}

float calcula(float a, float b, float c){

    int res;

    res = ((a + b)*c)/2;
    return res;
}

void mostra(float a){

    cout << "A área do trapézio é: " << a;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float baseMaior, baseMenor, altura;

    leitura(baseMaior, baseMenor, altura);
    cout << endl;
    calcula(baseMaior, baseMenor, altura);
    mostra(calcula(baseMaior, baseMenor, altura));



}


