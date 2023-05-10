#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void informar(float (*notas)[3], int *l, int *p, float *m);
void mostrar(float (*notas)[3], int *l, int *p);
void maiorMenor(float (*notas)[3], int *l, int *p, float *m);
void superiorInferior(int *l, float *m);


main(){
    setlocale(LC_ALL, "Portuguese");

    int *linhas;
    float (*notas)[3];

    int menu = -1;
    int *leu = new int(0);

    cout << "Informe o número de linhas: ";
    cin >> *linhas;
    fflush(stdin);

    notas = new float[*linhas][3];

    int *peso = new int[3];
    float *media = new float[*linhas];


    while(menu != 0){
        system("cls");
        cout << "#########################MENU########################" << endl;
        cout << "#                                                   #" << endl;
        cout << "# MATRIZ GERADA COM " << *linhas << " LINHAS                        #" << endl;
        cout << "#                                                   #" << endl;
        cout << "# 0 - Sair                                          #" << endl;
        cout << "# 1 - Informar notas e peso                         #" << endl;
        cout << "# 2 - Mostrar                                       #" << endl;
        cout << "# 3 - Maior e menor média ponderada                 #" << endl;
        cout << "# 4 - Alunos com nota >= a 6 e < que 6              #" << endl;
        cout << "#                                                   #" << endl;
        cout << "#####################################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu){
            case 0:
                system("cls");
                cout << "Programa Finalizado!" << endl << endl;
                break;
            case 1:
                system("cls");
                informar(notas, linhas, peso, media);
                *leu = 1;
                break;
            case 2:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário informar as notas primeiro!" << endl << endl;
                else{
                    mostrar(notas, linhas, peso);
                    cout << endl;
                }
                break;
            case 3:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    maiorMenor(notas, linhas, peso, media);
                    cout << endl;
                }
                break;
            case 4:
                system("cls");
                if(*leu == 0)
                    cout << "É necessário gerar os valores primeiro!" << endl << endl;
                else {
                    superiorInferior(linhas, media);
                    cout << endl;
                }
                break;
            default:
                system("cls");
                cout << "Opção inválida!" << endl << endl;
        }
        system("pause");
        system("cls");
    }

    delete linhas;
}

void informar(float (*notas)[3], int *l, int *p, float *m){
    int *i = new int;
    int *j = new int;

    srand(time(NULL));

    cout << "OPÇÃO 1 - INFORMAR NOTAS" << endl << endl;
    ///INFORMA AS NOTAS - ARMAZENA NA MATRIS NOTAS
    for(*i = 0; *i < *l; (*i)++){
        for(*j = 0; *j < 3; (*j)++){
            do{
                cout << "Aluno "<< *i + 1 << ": ";
                cin >> notas[*i][*j];
            } while(notas[*i][*j] < 0 || notas[*i][*j] > 10);
        }
    }

    cout << endl;

    ///INFORMA OS PESOS DE CADA NOTA - ARMAZENA NO VETOR P
    cout << "INFORMAR PESOS" << endl;
    for(*i = 0; *i < 3; (*i)++){
        cout << "Peso nota " << *i + 1 << ": ";
        cin >> p[*i];
    }

    cout << endl;

    ///CRIA UM VETOR COM AS MÉDIAS - ARMAZENA NO VETOR M
    int *k = new int(0);
    float *somal;
    int *divisao = new int(0);

    for(*i = 0; *i < *l; (*i)++){
            somal = new float(0);
        for(*j = 0; *j < 3; (*j)++){
            *somal += notas[*i][*j] * p[*k];
            *divisao += p[*k];
            (*k)++;
        }
        *k = 0;
        m[*i] = *somal / *divisao;
        *divisao = 0;
        delete somal;
    }

}

void mostrar(float (*notas)[3], int *l, int *p){
    int *i = new int;
    int *j = new int;

    cout << "OPÇÃO 2 - EXIBIR A MATRIZ" << endl << endl;
    ///EXIBE A MATRIZ NOTAS
    cout << "MATRIZ: " << endl;
    for(*i = 0; *i < *l; (*i)++){
        for(*j = 0; *j < 3; (*j)++){
            cout << notas[*i][*j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    ///EXIBE OS PESOS
    cout << "PESOS: " << endl;
    for(*i = 0; *i < 3; (*i)++){
        cout << "Peso nota " << *i + 1 << ": " << p[*i] << endl;
    }

    delete i;
    delete j;
}

void maiorMenor(float (*notas)[3], int *l, int *p, float *m){
    int *i = new int;
    int *j = new int;

    int *menor = new int(10);
    int *maior = new int(0);

    int *posMaior = new int(0);
    int *posMenor = new int(0);

    cout << "OPÇÃO 3 - EXIBIR A MAIOR E MENOR MÉDIA PONDERADA" << endl << endl;

    for(*i = 0; *i < *l; (*i)++){
        if(*menor > m[*i]){
            *menor = m[*i];
            *posMenor = *i;
        }

        if(*maior < m[*i]){
            *maior = m[*i];
            *posMaior = *i;
        }

    }

    cout << "Menor média ponderada foi do aluno " << *posMenor + 1 << " com nota: " << *menor << endl;
    cout << "Maior média ponderada foi do aluno " << *posMaior + 1 << " com nota: " << *maior << endl;

    delete i;
    delete j;
}

void superiorInferior(int *l, float *m){
    int *i = new int;
    int *superior = new int(0);
    int *inferior = new int(0);

    for(*i = 0; *i < *l; (*i)++){
        if(m[*i] >= 6)
            (*superior)++;
        if(m[*i] < 6)
            (*inferior)++;
    }

    cout << "Alunos com nota igual ou acima da média: " << *superior << endl;
    cout << "Alunos com nota abaixo da média: " << *inferior << endl;

    delete i;
}
