#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    int x[5] = {5,6,7,8,9};
    int *px, i = 0;
    px = x;
    while(i < 5)
    {
        cout << px << endl;//mostra o endere�o atual do px
        cout << *px << endl;
        px++;
        i++;
    }
    px -= i;
    i = 0;
    while(i < 5)
    {
        cout << px << endl;
        cout << *px << endl;
        px++;
        i++;
    }
}
