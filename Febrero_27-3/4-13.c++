// ejercicio 4.13
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  float r, c, area;

  // entradas
  cout << "*************************** Circunferencia y area de un circulo ***************************" << endl;
  cout << "Introdusca un valor para radio, r: ";
  cin >> r;
  // calculo
  c = (r * 3.141516 * 2);
  area = (3.141516 * r * r);

  cout << "La circunferencia es = " << c << endl;
  cout << "El area del circulo es = " << area << endl;
  return 0;
}