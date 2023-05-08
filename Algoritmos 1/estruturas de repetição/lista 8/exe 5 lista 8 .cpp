#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
    int i, contFora=0, num, maior, leituraMaior;
    for (i=1; i<=10; i++) //leitura dos 10 valores
    {
        do
        {
            cout << "Informe um número entre 1 a 50: ";
            cin >> num;
//verifica se está dentro do intervalo
            if(num>=1 && num<=50)
            {

                if(i==1 || num > maior)
                {
                    maior = num;
                    leituraMaior = i;
                }
            }
            else
            {
                contFora++;
                cout << "O valor digitado está fora do intervalo e foi desconsiderado.\n";
            }
        }
        while(num<1 || num>50);
    }
    cout << "O maior valor é " << maior << " e ele foi informado na " << leituraMaior << " leitura\n";
    cout << "Quantidade de valores digitados fora do intervalo: " << contFora << endl;

    //Programa do professor
}
