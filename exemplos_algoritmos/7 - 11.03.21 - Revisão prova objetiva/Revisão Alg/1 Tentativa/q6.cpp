#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int x, idade, m, a;

main(){
    setlocale(LC_ALL, "Portuguese");

    x = 0;
    a = 0;
    while(x < 10){
        cout << "Digite a idade do aluno" << x + 1 << ": ";
        cin >> idade;
        fflush(stdin);
        x++;
        a += idade;
    }
    m = (a / (x-1));
    system("cls");
    cout << "Resultado: " << m << endl;
    getchar();
}



