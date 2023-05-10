#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int fibonacci(int num);

main(){

   int n,i;

   cout << "Digite a quantidade de termos da sequência de Fibonacci: ";
   cin >> n;

   cout << "A sequência de Fibonacci e: \n";
   for(i=0; i<n; i++)
       cout << fibonacci(i+1);
}

int fibonacci(int num){
   if(num==1 || num==2)
       return 1;
   else
       return fibonacci(num-1) + fibonacci(num-2);
}
