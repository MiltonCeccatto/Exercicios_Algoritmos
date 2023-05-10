#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#define lin 5
#define col 5
#define tam 25

using namespace std;

void gerar(int m[][5]);
void mostrar(int m[][5]);
void diagonalP(int m[][5]);
void maiorElemento(int m[][5]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int matriz[lin][col];

    /// Obs: Realizar o menu, sendo possível mostrar, mostrar a diagonal principal e mostrar o maior elemento
    ///      somente se a opção de gerar for selecionada.
    gerar(matriz);
    mostrar(matriz);
    cout << endl;
    diagonalP(matriz);
    cout << endl;
    maiorElemento(matriz);

    return EXIT_SUCCESS;
}

void gerar(int m[][5]){

    int V[tam];
    int quantidade = 0;

    int valor;
    bool nRepetido = true;
    bool repetido = false;

    bool trocou;
    int aux;

    /// Gera o vetor sem repetição
    for (int i = 0; i < tam; ++i) {
       do{
          V[i] = rand() % 25;
          valor = nRepetido;
          for (int j = 0; (j < i) && (valor == nRepetido); ++j)
             if (V[i] == V[j])
                valor = repetido;
       }while (valor == repetido);
    }

    /// Faz a ordenação do vetor (verificar repetido)
    do{
        trocou = false;
        for (int k=0; k<tam-1; k++){
            if (V[k] > V[k+1]){
                aux = V[k];
                V[k] = V[k+1];
                V[k+1] = aux;
                trocou = true;
            }
        }

    }while(trocou == true);

    /// Passa o vetor para a matriz
    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            m[linha][coluna] = V[quantidade];
            quantidade++;
        }
    }
}

void mostrar(int m[][5]){
    cout << "Matriz: " << endl;

    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            cout << m[linha][coluna] << "\t";
        }
        cout << endl;
    }
}

void diagonalP(int m[][5]){
    /// Verifica se a linha == coluna (diagonal principal)
    cout << "Diagonal Principal: " << endl;

    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            if(linha == coluna)
                cout << m[linha][coluna] << "\t";
            else
                cout << "\t";
        }
        cout << endl;
    }
}

void maiorElemento(int m[][5]){
    /// Encontra o maior, obtendo também sua posição X e Y
    int maior = m[0][0];
    int posX, posY;

    for(int linha = 0; linha < lin; linha++){
        for(int coluna = 0; coluna < col; coluna++){
            if(maior < m[linha][coluna]){
                maior = m[linha][coluna];
                posX = linha;
                posY = coluna;
            }
        }
    }

    cout << "Maior elemento: " << maior << endl;
    cout << "Posição linha: " << posX << endl;
    cout << "Posição coluna: " << posY << endl;
}
