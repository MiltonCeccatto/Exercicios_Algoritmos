#include <iostream>
#include <ctime>
using namespace std;

main()
{
    srand(time(NULL));
    int *vetor = new int[10];

    for(int i = 0; i < 10; i++){
        *(vetor+i) = rand()% 31 + 20;

    }

    for(int i = 0; i < 10; i++){
        cout << *(vetor+i) << " | ";
    }

    delete[] vetor;
    vetor = NULL;

}
