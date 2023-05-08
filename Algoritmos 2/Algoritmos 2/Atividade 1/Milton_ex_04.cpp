

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

int potenciacao(int a, int b)
{

    int resultado;

    resultado = pow(a,b);

    return resultado;
}

int raizQuadrada(int a)
{
    int resultado;

    resultado = sqrt(a);

    return resultado;
}

float ArredondaValor(float a)
{
    float resultado;

    resultado = round(a);

    return resultado;
}



main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo, continua, n1,n2, cont= 0;
    float arredondar;

    do
    {
        system("cls");
        cout << "Informe a operação a ser feita: " << endl;
        cout << "1 - Potenciação" << endl;
        cout << "2 - Raiz quadrada" << endl;
        cout << "3 - Arredondar valor" << endl;
        cout << "4 - Verifica se um valor é primo" << endl;
        cout << "5 - verificar se é um número perfeito" << endl;
        cin >> codigo;

        if (codigo > 5 ){
              cout << "Código invalido" << endl;
        } else{
        if (codigo == 1)
        {
            cout << "Informe um valor inteiro: " << endl;
            cin >> n1;
            cout << "Informe um valor inteiro: " << endl;
            cin >> n2;
            cout << "O resultado da potenciação de " << n1 << " por " << n2 << " é: " <<potenciacao(n1,n2) << endl;
        }
        else if (codigo == 2)
        {
            cout << "Informe um valor inteiro e positivo" << endl;
            cin >> n1;
            cout << "O resultado da raiz quadrada de " << n1 << " é: " <<raizQuadrada(n1) << endl;
        }
        else if (codigo == 3)
        {
            cout << "Informe um número com vírgula para ser arredondado: " << endl;
            cin >> arredondar;
            cout << "O valor " << arredondar << " arredondado é: " << ArredondaValor(arredondar) << endl;
        }
        else if (codigo == 4)
        {
            cout << "Informe um número inteiro e positivo: " << endl;
            cin >> n1;

            for(int i = 1; i <= n1; i++)
            {
                if (n1%i == 0)
                    cont++;
            }
            if (cont == 2)
                cout << "---- É primo -----" << endl;
            else
                cout << "---- Não é primo ----" << endl;

        } else if (codigo == 5)
        {
            cout << "Insira um número inteiro" << endl;
            cin >> n1;
            for(int i = 1; i <= n1/2;i++){
                if (n1%i == 0)
                    cont+=i;
            }

            if (cont == n1)
            cout << endl << "--- O número " << n1 << " é um número perfeito ---\n" << endl;
            else
            cout << endl << "--- O número " << n1 << " não é um númro perfeito ---\n" <<endl;
        }

        }

        cont = 0;


        cout << "1 - Para realizar outra operação" << endl;
        cout << "2 - Para encerrar o programa "<< endl;
        cin >> continua;

    }
    while(continua == 1);

}
