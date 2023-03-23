// ejercicio 4.11
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
  float x, y, resultado;

  // entradas
  cout << "*************************** Superficie ***************************" << endl;
  cout << "Introdusca un valor x: ";
  cin >> x;

  cout << "Introdusca un valor y: ";
  cin >> y;
  // calculo
  resultado = (x + y);

  cout << "El resultado de la suma es: " << endl;
  cout << "|%10d|" << x << endl;
  cout << "|%10d|" << y << endl;
  cout << resultado << endl;
  return 0;
}