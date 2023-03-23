// ejercicio 4.7
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int x, y, temp;
  //
  cout << "*************************** Asignacion ***************************" << endl;
  cout << "Introdusca un valor para x: ";
  cin >> x;

  cout << "Introdusca un valor para y: ";
  cin >> y;

  temp = x;
  x = y;
  y = temp;

  cout << "nuevos valores: x = " << x << " y = " << y;
  return 0;
}
