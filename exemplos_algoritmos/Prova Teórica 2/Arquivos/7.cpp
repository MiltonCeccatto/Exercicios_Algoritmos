#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

void avaliar(int *vetor);

main(){
    int i = 10, x = 2;
    int *pi, *px;
    pi = &i;
    px = &x;

    i = *pi + *px * 3 - i;
    cout << *pi;

}
