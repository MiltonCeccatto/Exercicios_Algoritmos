#include <iostream>
#include <string>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    // sempre inicializar o laço atribuindo um valor para as variáveis

   int menu;
   float n1, n2, operacao;

   do {
        system("cls");
        cout << "Menu: " << endl;
        cout << "0 - para sair do programa " << endl;
        cout << "1 - para soma " << endl;
         cout << "2 - para subtração " << endl;
          cout << "3 - para multiplicação " << endl;
           cout << "4 - para divisão " << endl;
           cin >> menu;
           fflush(stdin);

           if (menu = 1){
            cout << "Digite n1: ";
            cin >> n1;

            cout << "Digite n2: ";
            cin >> n2;

            operacao = n1 + n2;

           }


   } while(menu!=0);





    return EXIT_SUCCESS ;
}



