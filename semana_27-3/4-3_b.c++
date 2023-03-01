// ejercicio 4.3 - inciso b
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  float x, y, total;

  cout << "*************************** Operaciones ***************************" << endl;
  cout << "Introdusca un valor para x: ";
  cin >> x;

  cout << "Introdusca un valor para y: ";
  cin >> y;

  float r1 = (x + y);
  float r2 = (x - y);

  if (r2 == 0)
  {
    cout << "Error: el denomidador es 0";
  }
  else
  {
    total = r1 / r2;
  }
  cout << "Relresultado es: " << total;
  return 0;
}
