#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int fibonacci(int cont = 20);

int main() {
    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 20; i++){
        cout << fibonacci(i) << endl;
    }

}

int fibonacci(int cont){
    if(cont == 1 || cont == 2)
        return 1;
    else
        return fibonacci(cont - 1) + fibonacci(cont - 2);
}
