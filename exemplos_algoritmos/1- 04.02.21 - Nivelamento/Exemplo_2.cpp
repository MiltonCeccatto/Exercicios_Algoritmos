#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{

    float v = -48.6;
    cout.width(10);
    cout.fill('*');
    cout << internal << v << endl;


    cout.width(10);
    cout << left << v << endl;


    cout.width(10);
    cout << right << v << endl;

}
