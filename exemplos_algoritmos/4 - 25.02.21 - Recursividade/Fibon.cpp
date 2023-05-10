#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void fibo(int cont, int t1, int t2);

main()
{
    setlocale(LC_ALL, "Portuguese");

    fibo(1, 0, 1);
}

void fibo(int cont, int t1, int t2){
    int soma;

    if (cont < 2){
        cout << t1 << " - " << t2;
    } else {
        soma = t1 + t2;
        t1 = t2;
        t2 = soma;
        cout << " - " << t2;
    }

    cont++;

    if(cont >= 20)
        return;
    else
        fibo(cont, t1, t2);


}
