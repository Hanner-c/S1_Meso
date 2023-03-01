// ejercicio 4.3 - inciso d
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  float b, c, d, total;

  cout << "*************************** Operaciones ***************************" << endl;
  cout << "Introdusca un valor para b: ";
  cin >> b;

  cout << "Introdusca un valor para c: ";
  cin >> c;

  cout << "Introdusca un valor para d: ";
  cin >> d;

  float r1 = (c + d);
  float r2 = (b / r1);

  if (r1 == 0)
  {
    cout << "Error: el denomidador es 0";
  }
  else
  {
    total = r2;
  }
  cout << "Relresultado es: " << total;
  return 0;
}
