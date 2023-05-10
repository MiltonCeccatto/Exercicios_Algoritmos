#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

void mostra(int x[][5]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mat[3][5];

    cout << "Matriz normal: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            mat[i][j] = rand()%20;
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    mostra(mat);
}

void mostra(int x[][5]){
    int l;
    for(l = 0; l < 5; ++l){
        for(int c = 0; c < 3; c++){
            cout << x[c][l] << "\t";
        }
        cout << "\n";
    }
}

