#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void avaliar(int *vetor);

main(){

    int i = 10, x = 12;
    int *pi, *px;
    pi = &i;
    px = &x;

    *pi++;
    cout << i;
}

