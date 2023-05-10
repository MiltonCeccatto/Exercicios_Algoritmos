#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    int x = 4, *px, **px2, ***px3;
    px = &x;
    px2 = &px;
    px3 = &px2;
    cout << *px << endl;
    cout << **px2 << endl;
    cout << ***px3 << endl;

    cout << "\nEnderecos: " << endl;
    cout << &x << endl;
    cout << px << endl;
    cout << &px << endl;
    cout << px2 << endl;
    cout << &px2 << endl;
    cout << px3 << endl;
}
