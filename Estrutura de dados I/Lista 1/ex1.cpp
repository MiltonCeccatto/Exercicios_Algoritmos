#include <iostream>
using namespace std;
int *p, *p2, a = 9;
main()
{
 p = &a;
 *p = 2 * *p;
 a += 3 + *p;
 p2 = p;
 cout << *p2 << endl;
}
