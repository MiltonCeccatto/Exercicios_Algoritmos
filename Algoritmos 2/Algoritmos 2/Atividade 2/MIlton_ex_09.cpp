
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string texto1, texto2, texto3;
    int n1, n2, n3;

    cout << "Insira o texto 1: ";
    getline(cin, texto1);

    cout << "Insira o texto 2: ";
    getline(cin, texto2);

    cout << "Insira o texto 3: ";
    getline(cin, texto3);

    n1 = texto1.size();
    n2 = texto2.size();
    n3 = texto3.size();



    if(n1 >= n2 && n2 >= n3){
        cout << "O texto 1 � o maior " << endl;
        cout << "O texto 2 � o do meio " << endl;
        cout << "O texto 3 � o menor " << endl;
    } else if( n1 >= n2 && n3 >=n2){
        cout << "O texto 1 � o maior " << endl;
        cout << "O texto 3 � o do meio " << endl;
        cout << "O texto 2 � o menor " << endl;
    } else if (n2 >= n1 && n1 >= n3){
        cout << "O texto 2 � o maior " << endl;
        cout << "O texto 1 � o do meio " << endl;
        cout << "O texto 3 � o menor " << endl;
    } else if (n2 >= n3 && n3 >= n1){
        cout << "O texto 2 � o maior " << endl;
        cout << "O texto 3 � o do meio " << endl;
        cout << "O texto 1 � o menor " << endl;
    } else if (n3 >= n1 && n1 >= n2){
        cout << "O texto 3 � o maior " << endl;
        cout << "O texto 1 � o do meio " << endl;
        cout << "O texto 2 � o menor " << endl;
    } else if (n3 >= n2 && n2 >= n1){
        cout << "O texto 3 � o maior " << endl;
        cout << "O texto 2 � o do meio " << endl;
        cout << "O texto 1 � o menor" << endl;
    }

}



