

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;


main()
{
    setlocale(LC_ALL, "portuguese");

    string texto;
    int numCaractere = 0,emBranco = 0, numero = 0, vogal = 0, consoante = 0, especial = 0, totalCaracteres;




    cout << "Digite um texto: ";
    getline(cin, texto);


    for(int i = 0; i < texto.size(); i++){
        if(isalnum(texto[i])){
            numCaractere++;
            if(isdigit(texto[i])){
               numero++;
               } else {
                switch(texto[i]){
                case 'a' :
                    vogal++;
                break;
                case 'e' :
                    vogal++;
                    break;
                case 'i' :
                    vogal++;
                    break;
                case 'o' :
                    vogal++;
                    break;
                case 'u' :
                    vogal++;
                    break;
                default :
                    consoante++;

                }

               }
        }else if(isspace(texto[i]))
            emBranco++;
        else
            especial++;

    }

    totalCaracteres = especial + numCaractere;

    cout << "N�mero de caracteres " << totalCaracteres << endl;
    cout << "N�meros de espa�os em branco " << emBranco << endl;
    cout << "A quantidade de n�meros � " << numero << endl;
    cout << "O n�mero de vogais � " << vogal << endl;
    cout << "O n�mero de consoantes � " << consoante << endl;
    cout << "N�meros de caracteres especiais " << especial << endl;


}

