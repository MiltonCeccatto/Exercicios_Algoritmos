#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;

    cout << "Digite o n�mero A: ";
    cin >> a;

    cout << "Digite o n�mero B: ";
    cin >> b;

    cout << "digite o n�mero C: ";
    cin >> c;

    if ( a == b && b == c)
    {
        cout << "Os n�meros s�o iguais" << endl;
        cout << "Os N�meros s�o " << a;
    }
    else if (a >= b && b >= c)
    {
        cout << "O maior n�mero � A: " << a << endl;
        cout << "O menor n�mero � C: " << c << endl;
        cout << "O n�mero do meio � B:" << b << endl;
        cout << "Os n�meros em ordem crescente s�o: " << c << "; " << b << "; " << a <<endl;

    }
    else if (a >= c && c >= b)
    {
        cout << "O maior n�mero � A: " << a << endl;
        cout << "O menor n�mero � B: " << b << endl;
        cout << "O n�mero do meio � C:" << c << endl;
        cout << "Os n�meros em ordem crescente s�o: " << b << "; " << c << "; " << a <<endl;

    }


    else if (b >= a && a >= c)
    {
        cout << "O maior n�mero � B: " << b << endl;
        cout << "O menor n�mero � C: " << c << endl;
        cout << "O n�mero do meio � A:" << a << endl;
        cout << "Os n�meros em ordem crescente s�o: " << c << "; " << a << "; " << b <<endl;

    }
    else if (b >= c && c >= a)
    {
        cout << "O maior n�mero � B: " << b << endl;
        cout << "O menor n�mero � A: " << a << endl;
        cout << "O n�mero do meio � C:" << c << endl;
        cout << "Os n�meros em ordem crescente s�o: " << a << "; " << c << "; " << b <<endl;

    }
    else if (c >= a && a >= b)
    {
        cout << "O maior n�mero � C: " << c << endl;
        cout << "O menor n�mero � B: " << b << endl;
        cout << "O n�mero do meio � A:" << a << endl;
        cout << "Os n�meros em ordem crescente s�o: " << b << "; " << a << "; " << c <<endl;
    }

    else if (c >= b && b >= a)
    {
        cout << "O maior n�mero � C: " << c << endl;
        cout << "O menor n�mero � A: " << a << endl;
        cout << "O n�mero do meio � B:" << b << endl;
        cout << "Os n�meros em ordem crescente s�o: " << a << "; " << b << "; " << c <<endl;
    }

    return EXIT_SUCCESS ;
}

