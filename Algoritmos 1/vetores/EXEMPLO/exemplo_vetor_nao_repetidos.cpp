#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));


    const int TAM = 5;

    //vetor
    int V[TAM];

    int numero; //vari�vel para a leitura de um n�mero

    //contador usado para contar quantos elementos j� foram gravados no vetor V
    int contV =0;

    bool jaExiste; //boleano para controlar se um n�mero j� existe no vetor

    //La�o FOR -> a cada itera��o, um n�mero n�o repetido � gravado no vetor
    for(int i=0; i<TAM; i++)
    {
        //la�o do while -> usado para ler um n�mero n�o repetido
        //percorre o vetor V e verificar se o n�mero lido j� foi armazenado no vetor
        //percorre somente as posi��es j� gravadas no vetor, ou seja, de 0 at� contV-1
        do{
            cout << "Informe um n�mero: ";
            cin >> numero; //se o n�mero for gerado, substitua esta linha por "numero = rand()%100;"

            jaExiste = false; //inicialmente, assume-se que o valor lido n�o existe no vetor (n�o repetido)

            //La�o FOR -> percorre as posi��es j� gravadas do vetor, verificando se o n�mero j� existe no vetor
            for(int k=0; k<contV; k++) //IMPORTANTE, usar a condi��o de parada "k<contV" e n�o "k<=contV"
            {
                if(V[k] == numero)
                {
                    jaExiste = true;
                    break; //interrompe a execu��o apenas deste la�o
                }
            }

            //depois da verifica��o, se o numero lido n�o existe no vetor V, adicionamos o n�mero no vetor e incrementamos o contador!
            if(jaExiste == false)
            {
                V[contV] = numero;
                contV++;
            }else{
                //n�mero repetido, n�o adiciona no vetor
            }

        }while(jaExiste == true); //se o n�mero � peretido, uma nova leitura ser� realizada

    }

    cout << "Vetor V: ";
    for(int i=0; i<TAM; i++)
    {
        cout << V[i];
        if(i<TAM-1)
            cout << ", ";
    }
    cout << endl;


}
