
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;

void LerValor(int &a){
    cout << "Insira um valor qualquer ";
    cin >> a;

}

void VerificaPrimo(int &a){
    int cont= 0;

    if (a == 0 || a==1){
        cout << "O número "<< a <<" não é primo " << endl;
    } else{
    for(int i = 1; i < a; i++){
        if(a%i == 0 ){
            cont++;
            if (cont > 2){
                break;
            }
        }
    }

    if (cont > 2)
        cout << "O número " << a << " não é primo" << endl;
    else
        cout << "O número " << a  << " é primo" << endl;
    }
}

void SomaAlgarismo(int a){
    int res, soma = 0;

while(a > 0){

    res = a%10;
    a = (a-res)/10;
    soma += res;

}

    cout << "A soma dos algarismos é: " << soma << endl;

}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor = 0, continua = 1, menu;


    cout << "### MENU ###" << endl;
    cout << " 1 - Para inserir um número " << endl;
    cout << " 2 - Para verificar se o número é primo" << endl;
    cout << " 3 - Para fazer a soma dos algarismos " << endl;
    cout << " 0 - Para sair do programa " << endl;

    do {
        cout << "Menu: ";
        cin >> menu;
        fflush(stdin);
        switch(menu) {
        case 0 :
            continua = 0;
            break;
        case 1 :
            LerValor(valor);
            cout << "Valor lido !! " << endl;
            break;
        case 2 :{
            if (valor == 0 ){
                cout << "Primeiro insira um número !!" << endl;
                break;
            } else if (valor < 0){
                cout << "Insira um valor maior que 0" << endl;
                break;
            }else {
                VerificaPrimo(valor);
                break;
            }
        }
        case 3 :{
            if (valor == 0){
                cout << "Primeiro insira um número !!" << endl;
                break;
            } else if(valor < 0 || valor > 999){
                cout << "Insira um número entre 1 e 999 " << endl;
                break;
            }else{
                SomaAlgarismo(valor);
                break;
            }
        }
        default :
            cout << "Código inválido !" << endl;

        }



    }while(continua != 0);

}




