#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct {
    int num;
    float res;
};

int prova (int n, int v[]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v[6] = {3,6,71,25,89,15};
    int n = 6;
    cout << prova(n, v);
}

int prova (int n, int v[]){
    if (n == 1)
        return v[0];
    else {
        int x;
        x = prova (n - 1, v);
        if (x > v[n - 1])
            return x;
        else
            return v[n - 1];
    }
}

