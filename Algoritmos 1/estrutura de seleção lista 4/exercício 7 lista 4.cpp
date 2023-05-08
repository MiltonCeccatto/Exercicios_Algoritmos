#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float media, nota1, nota2, nota3;
    const float p1 = 2.5, p2 = 5.0, p3 = 2.5;

    cout << "Informe a primeira nota: ";
    cin >> nota1;

    cout << "Informe a segunda nota: ";
    cin >> nota2;

    cout << "Informe a terceira nota: ";
    cin >> nota3;

    media = ((nota1*p1) + (nota2*p2) + (nota3*p3)) /(p1 + p2 + p3);

    if (media < 3){
        cout << "O conceito do aluno é D" << endl;
        cout << "A media do aluno é: " << media;
    }
    else if (media > 3 && media <= 4.9)
    {
        cout << "O conceito do aluno é C"<< endl;
        cout << "A media do aluno é: " << media;
    }
    else if (media >= 5 && media <= 7.4)
    {
        cout << "O conceito do aluno é B"<< endl;
        cout << "A media do aluno é: " << media;
    }
    else if (media > 7.4)
    {
        cout << "O conceito do aluno é A"<< endl;
        cout << "A media do aluno é: " << media;
    }
    else
        cout << "Nota é inválida ";


    return EXIT_SUCCESS ;
}

