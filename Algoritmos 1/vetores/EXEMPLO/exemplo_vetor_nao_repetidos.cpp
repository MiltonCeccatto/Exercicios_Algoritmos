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

    int numero; //variável para a leitura de um número

    //contador usado para contar quantos elementos já foram gravados no vetor V
    int contV =0;

    bool jaExiste; //boleano para controlar se um número já existe no vetor

    //Laço FOR -> a cada iteração, um número não repetido é gravado no vetor
    for(int i=0; i<TAM; i++)
    {
        //laço do while -> usado para ler um número não repetido
        //percorre o vetor V e verificar se o número lido já foi armazenado no vetor
        //percorre somente as posições já gravadas no vetor, ou seja, de 0 até contV-1
        do{
            cout << "Informe um número: ";
            cin >> numero; //se o número for gerado, substitua esta linha por "numero = rand()%100;"

            jaExiste = false; //inicialmente, assume-se que o valor lido não existe no vetor (não repetido)

            //Laço FOR -> percorre as posições já gravadas do vetor, verificando se o número já existe no vetor
            for(int k=0; k<contV; k++) //IMPORTANTE, usar a condição de parada "k<contV" e não "k<=contV"
            {
                if(V[k] == numero)
                {
                    jaExiste = true;
                    break; //interrompe a execução apenas deste laço
                }
            }

            //depois da verificação, se o numero lido não existe no vetor V, adicionamos o número no vetor e incrementamos o contador!
            if(jaExiste == false)
            {
                V[contV] = numero;
                contV++;
            }else{
                //número repetido, não adiciona no vetor
            }

        }while(jaExiste == true); //se o número é peretido, uma nova leitura será realizada

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
