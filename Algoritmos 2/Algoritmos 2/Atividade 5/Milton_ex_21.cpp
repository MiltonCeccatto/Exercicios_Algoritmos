#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

#define TAM 7

using namespace std;

int soma(int n);
int fatorial(int n);
void fibonacci(int cont, int t1, int t2);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*int v;
    int num;
    cout << "informe um valor qualquer: ";
    cin >>num;
    fflush(stdin);
    cout <<"Soma :" << soma(v) << endl;
    cout <<"Fatorial : " << fatorial(v) << endl;
    */
    fibonacci(2,0,1);

    }

int soma(int n){
    if(n == 1)
        return 1;
    else
        return(n+soma(n-1));

}

int fatorial(int n){
    if(n == 1)
        return 1;
    else
        return(n*soma(n-1));

}

void fibonacci(int cont, int t1, int t2){

    if(cont == 20)
        return;
    else{
        if (cont == 2){
            cout << t1 << ", " << t2 << ", "<< t2<< ", ";
            cont++;
            fibonacci(cont, t2, t1 + t2);
        }
        else {
            cout << t1 +t2 << ", ";
            cont++;
            fibonacci(cont, t2, t1 + t2);

        }
    }
}





