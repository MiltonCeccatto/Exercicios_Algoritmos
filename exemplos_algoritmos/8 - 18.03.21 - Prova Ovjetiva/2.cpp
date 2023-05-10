#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

char s1[50];
char s2[50];

int main() {
    setlocale(LC_ALL, "Portuguese");

    gets(s1);

    gets(s2);

    if(strcmp(s1, s2) == 0){
        cout << "iguais";
    } else
    cout << "diferente";


}


