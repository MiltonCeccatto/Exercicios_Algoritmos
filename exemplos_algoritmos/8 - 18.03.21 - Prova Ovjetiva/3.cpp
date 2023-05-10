#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int recursiva(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");

    cout << recursiva(27);
}

int recursiva(int n){
    if(n <=10)
        return n * 2;
    else
        return recursiva(recursiva(n/3));
}

