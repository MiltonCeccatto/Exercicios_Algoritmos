#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <stdio.h>

using namespace std;

int MDC(int n1, int n2, int resto);

int main()
{
    int a, b;
    setlocale(LC_ALL, "Portuguese");
    cout << "Informe um valor para ser a base : ";
    cin >> a;
    cout << "Informe um valor para ser o expoente : ";
    cin >> b;

    cout << MDC(a,b,1);
}

int MDC(int n2, int n1, int resto)
{
   if (resto == 0){
         if (n1 > n2)
            return n2;
         else
            return n1;
   }else if (n1 > n2)
   {
       resto = n1%n2;
       if (resto != 0 )
        MDC(resto, n2 , resto);
       else
        MDC(n1, n2 , resto);

   }else if (n2 > n1)
   {
      resto = n2%n1;
       if (resto != 0 )
        MDC(resto, n1 , resto);
       else
        MDC(n1, n2, resto);
   }


 }









