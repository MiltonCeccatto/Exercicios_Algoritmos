#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

struct livro{
    char nome[50];
    char editora[50];
    int isbn;
    int ano;
    int paginas;
    float preco;
};

void incluir(livro x[], int i);
void mostrar(livro x[], int i);
void maiscaro(livro x[], int i);
void maisbarato(livro x[], int i);
void livrosano(livro x[], int i);

int main() {
    setlocale(LC_ALL, "Portuguese");

    livro x[20];
    int indice = -1;
    int n1, lido = 0;

    while(n1 != 6) {
        cout << "***************************************************" << endl;
        cout << "* Livros -> Opções possíveis:                     *" << endl;
        cout << "*                                                 *" << endl;
        cout << "* 1. Incluir Livro                                *" << endl;
        cout << "* 2. Mostrar Livros                               *" << endl;
        cout << "* 3. Livro mais caro                              *" << endl;
        cout << "* 4. Livro mais barato                            *" << endl;
        cout << "* 5. Publicações no ano                           *" << endl;
        cout << "* 6. Sair                                         *" << endl;
        cout << "*                                                 *" << endl;
        cout << "***************************************************" << endl;

        cout << endl;

        cin >> n1;
        fflush(stdin);

        cout << endl;

        switch(n1) {
            case 1:
                indice++;
                if(indice == 20)
                    cout << "O limite de contas cadastradas foi atingido!" << endl;
                else
                    incluir(x, indice);
                break;

            case 2:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    mostrar(x, indice);
                break;

            case 3:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    maiscaro(x, indice);
                break;

            case 4:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    maisbarato(x, indice);
                break;

             case 5:
                if(indice < 0) {
                    system("cls");
                    cout << "Escolha a opção 1 antes de continuar!" << endl << endl;
                } else
                    livrosano(x, indice);
                break;

            case 6:
                system("cls");
                cout << "Programa encerrado." << endl << endl;
                break;

            default:
                system("cls");
                cout << "Opção inválida!" << endl << endl;
        }

        system("pause");
        system("cls");
    }
}

void incluir(livro x[], int i) {
    system("cls");

    cout << "CADASTRO DOS LIVROS" << endl << endl;

    cout << "Informe o nome: ";
        gets(x[i].nome);
        fflush(stdin);

        cout << "Informe a editora: ";
        gets(x[i].editora);
        fflush(stdin);

        cout << "Informe o isbn: ";
        cin >> x[i].isbn;
        fflush(stdin);

        cout << "Informe o ano de edição: ";
        cin >> x[i].ano;
        fflush(stdin);

        cout << "Informe o número de páginas: ";
        cin >> x[i].paginas;
        fflush(stdin);

        cout << "Informe o preço: ";
        cin >> x[i].preco;
        fflush(stdin);

        cout << endl;
}

void mostrar(livro x[], int i) {
    system("cls");

    cout << "CONTAS CADASTRADAS" << endl << endl;

    for(int j = 0; j <= i; j++) {
        cout << "Nome: " << x[j].nome<< endl;
        cout << "Editora: " << x[j].editora<< endl;
        cout << "ISBN: " << x[j].isbn << endl;
        cout << "Ano de edição: " << x[j].ano << endl;
        cout << "Páginas: " << x[j].paginas << endl;
        cout << "Preço: " << x[j].preco << endl;
        cout << "--------------------------------------------------------" << endl;
    }
}

void maiscaro(livro x[], int i) {
    system("cls");

    float maiorpreco = 0;
    int posicao;

    for(int j = 0; j <= i; j++){
        if(x[j].preco > maiorpreco){
            maiorpreco = x[j].preco;
            posicao = j;
        }
    }

    cout << "O livro mais caro é: " << endl << endl;

    cout << "Nome: " << x[posicao].nome<< endl;
    cout << "Editora: " << x[posicao].editora<< endl;
    cout << "ISBN: " << x[posicao].isbn << endl;
    cout << "Ano de edição: " << x[posicao].ano << endl;
    cout << "Páginas: " << x[posicao].paginas << endl;
    cout << "Preço: " << x[posicao].preco << endl << endl;

}

void maisbarato(livro x[], int i) {
    system("cls");

    float menorpreco = 10000000;
    int posicao;

    for(int j = 0; j <= i; j++){
        if(x[j].preco < menorpreco){
            menorpreco = x[j].preco;
            posicao = j;
        }
    }

    cout << "O livro mais barato é: " << endl << endl;

    cout << "Nome: " << x[posicao].nome<< endl;
    cout << "Editora: " << x[posicao].editora<< endl;
    cout << "ISBN: " << x[posicao].isbn << endl;
    cout << "Ano de edição: " << x[posicao].ano << endl;
    cout << "Páginas: " << x[posicao].paginas << endl;
    cout << "Preço: " << x[posicao].preco << endl << endl;

}

void livrosano(livro x[], int i){
    system("cls");

    int a;

    cout << "Informe o ano: ";
    cin >> a;

    for(int j = 0; j <= i; j++){
        if(x[j].ano == a){
            cout << endl;
            cout << "Nome: " << x[j].nome<< endl;
            cout << "Editora: " << x[j].editora<< endl;
            cout << "ISBN: " << x[j].isbn << endl;
            cout << "Ano de edição: " << x[j].ano << endl;
            cout << "Páginas: " << x[j].paginas << endl;
            cout << "Preço: " << x[j].preco << endl << endl;
            cout << "--------------------------------------------------------" << endl;
        }
    }
}
