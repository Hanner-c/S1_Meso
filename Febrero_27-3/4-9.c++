// ejercicio 4.9
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  long x, y, resultado;
  //
  cout << "*************************** Superficie ***************************" << endl;
  cout << "Introdusca un valor para largo x: ";
  cin >> x;

  cout << "Introdusca un valor para ancho y: ";
  cin >> y;

  resultado = (x * y);

  cout << "El area es:" << endl;
  cout << "________________________" << endl;
  cout << "|                      |" << endl;
  cout << "|                      |" << endl;
  cout << "|                      |" << endl;
  cout << "|                      | = " << resultado << endl;
  cout << "|                      |" << endl;
  cout << "|                      |" << endl;
  cout << "|                      |" << endl;
  cout << "________________________" << endl;

  return 0;
}
