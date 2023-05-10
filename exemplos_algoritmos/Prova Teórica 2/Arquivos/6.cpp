#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

void avaliar(int *vetor);

main(){
    int x = 4, i = 8, *px, *pi, **px2, ***px3;
    px = &x;
    pi = &i;
    px2 = &px;
    px3 = &px2;

    **px2 += *pi + 5;
    x = ***px3 - (*px + i);

    while(i > 1)
    {
        **px2 = *pi + 4 * i;
        i--;
    }

    if(*px % 2 != 0)
        ***px3 = *px - 8;
    else
        **px2 += i + 3;

    cout << *px << endl;
    cout << *pi << endl;
    cout << **px2 << endl;
    cout << ***px3 << endl;

}
