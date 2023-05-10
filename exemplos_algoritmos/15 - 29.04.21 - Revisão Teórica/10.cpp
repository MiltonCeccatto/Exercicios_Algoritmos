#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 5, j = 10;
    int *pi, *pj;

    pi = &i;
    pj = &j;

    //pi = &i; cout << *pi;
    //pj = &i; cout << *pj;
    //*pj = &j;
    //i = *pj; cout << i;
    //i = (*pi)++ + *pj; cout << i;

}

