#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void avaliar(int *vetor);

main(){
    //setlocale(LC_ALL, "Portuguese");

    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    cout << x << ",";
    cout << y << ",";
    cout << *p << endl;



}
