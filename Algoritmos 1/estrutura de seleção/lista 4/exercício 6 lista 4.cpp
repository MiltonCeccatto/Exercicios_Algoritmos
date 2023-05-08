#include <iostream>
using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;

    cout << "Digite o número A: ";
    cin >> a;

    cout << "Digite o número B: ";
    cin >> b;

    cout << "digite o número C: ";
    cin >> c;

    if ( a == b && b == c)
    {
        cout << "Os números são iguais" << endl;
        cout << "Os Números são " << a;
    }
    else if (a >= b && b >= c)
    {
        cout << "O maior número é A: " << a << endl;
        cout << "O menor número é C: " << c << endl;
        cout << "O número do meio é B:" << b << endl;
        cout << "Os números em ordem crescente são: " << c << "; " << b << "; " << a <<endl;

    }
    else if (a >= c && c >= b)
    {
        cout << "O maior número é A: " << a << endl;
        cout << "O menor número é B: " << b << endl;
        cout << "O número do meio é C:" << c << endl;
        cout << "Os números em ordem crescente são: " << b << "; " << c << "; " << a <<endl;

    }


    else if (b >= a && a >= c)
    {
        cout << "O maior número é B: " << b << endl;
        cout << "O menor número é C: " << c << endl;
        cout << "O número do meio é A:" << a << endl;
        cout << "Os números em ordem crescente são: " << c << "; " << a << "; " << b <<endl;

    }
    else if (b >= c && c >= a)
    {
        cout << "O maior número é B: " << b << endl;
        cout << "O menor número é A: " << a << endl;
        cout << "O número do meio é C:" << c << endl;
        cout << "Os números em ordem crescente são: " << a << "; " << c << "; " << b <<endl;

    }
    else if (c >= a && a >= b)
    {
        cout << "O maior número é C: " << c << endl;
        cout << "O menor número é B: " << b << endl;
        cout << "O número do meio é A:" << a << endl;
        cout << "Os números em ordem crescente são: " << b << "; " << a << "; " << c <<endl;
    }

    else if (c >= b && b >= a)
    {
        cout << "O maior número é C: " << c << endl;
        cout << "O menor número é A: " << a << endl;
        cout << "O número do meio é B:" << b << endl;
        cout << "Os números em ordem crescente são: " << a << "; " << b << "; " << c <<endl;
    }

    return EXIT_SUCCESS ;
}

