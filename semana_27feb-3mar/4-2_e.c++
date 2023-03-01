// ejercicio 4.2 - inciso e
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int r1, r2, r3, r4, r5, total;

  // 3 + 4 * (8 * (4 − (9 + 3) / 6))
  r1 = (9 + 3);
  r2 = 4 - (r1 / 6);
  r3 = (8 * r2);
  r4 = (4 * r3);
  total = (3 + r4);

  cout << "Relresultado es: " << total;
  return 0;
}
