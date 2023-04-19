#include <iostream>
#include <cmath>
using namespace std;

double calcular_lado(double hipotenusa, double angulo)
{
  // Calcula el lado opuesto o adyacente dado la hipotenusa y un ángulo
  return hipotenusa * sin(angulo * M_PI / 180);
}

double calcular_hipotenusa(double lado1, double lado2)
{
  // Calcula la hipotenusa dado dos lados
  return sqrt(pow(lado1, 2) + pow(lado2, 2));
}

double calcular_angulo(double lado_opuesto, double hipotenusa)
{
  // Calcula el ángulo opuesto dado un lado opuesto y la hipotenusa
  return asin(lado_opuesto / hipotenusa) * 180 / M_PI;
}

int main()
{
  // Declaración de variables
  double a, b, c, A, B, C;

  // Entrada de datos
  cout << "Ingrese los datos del triangulo rectangulo:" << endl;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "c = ";
  cin >> c;
  cout << "A = ";
  cin >> A;
  cout << "B = ";
  cin >> B;
  cout << "C = ";
  cin >> C;

  // Cálculo de datos faltantes
  if (A != 0)
  {
    if (a == 0 && c != 0)
    {
      a = calcular_lado(c, A);
    }
    else if (a != 0 && c == 0)
    {
      c = a / sin(A * M_PI / 180);
    }
    else if (a == 0 && c == 0)
    {
      c = b / sin(B * M_PI / 180);
      a = c * sin(A * M_PI / 180);
    }
    B = calcular_angulo(a, c);
    C = 90 - A;
    b = calcular_lado(c, B);
  }
  else if (B != 0)
  {
    if (b == 0 && c != 0)
    {
      b = calcular_lado(c, B);
    }
    else if (b != 0 && c == 0)
    {
      c = b / cos(B * M_PI / 180);
    }
    else if (b == 0 && c == 0)
    {
      c = a / cos(A * M_PI / 180);
      b = c * sin(B * M_PI / 180);
    }
    A = calcular_angulo(b, c);
    C = 90 - B;
    a = calcular_lado(c, A);
  }
  else if (C != 0)
  {
    if (a == 0 && b != 0)
    {
      a = calcular_lado(b, C);
    }
    else if (a != 0 && b == 0)
    {
      b = a / tan(A * M_PI / 180);
    }
    else if (a == 0 && b == 0)
    {
      a = c * cos(C * M_PI / 180);
      b = c * sin(C * M_PI / 180);
    }
    A = 90 - C;
    B = calcular_angulo(b, c);
    return 0;
  }