#include <iostream>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int matricula;
    float n1, n2, n3, media;
    const float p1 = 3.2 , p2 = 5.5 , p3 = 1.3;

    cout << "Informe o número de matrícula do aluno: ";
    cin >> matricula;

    cout << "informe a primeira nota: ";
    cin >> n1;

    cout << "Informe a segunda nota: ";
    cin >> n2;

    cout << "informe a terceira nota: ";
    cin >> n3;

    media = (((n1*p1) + (n2*p2) + (n3*p3))/(p1 + p2 + p3));

    cout << "Aluno: " << matricula << endl;
    cout << "Média do aluno: " << media << endl;

    return EXIT_SUCCESS ;
}
