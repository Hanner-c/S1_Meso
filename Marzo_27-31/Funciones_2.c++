#include <iostream>
#include <cmath>
using namespace std;

int clasificador(int num_1, int num_2)
{
  int r = 0;
  if ((num_1 % 2) == 0 && (num_2 % 2) == 0)
  {
    r = 0;
  }
  else if ((num_1 % 2) == 1 && (num_2 % 2) == 1)
    r = 1;
  else if ((num_1 % 2) == 1 && (num_2 % 2) == 0)
    r = 2;
  else if ((num_1 % 2) == 0 && (num_2 % 2) == 1)
    r = 2;
  return r;
}

int main()
{
  unsigned int num_1, num_2, resultado;
  cout << "Ingrese primer numero: ";
  cin >> num_1;
  cout << "Ingrese segundo numero: ";
  cin >> num_2;
  cout << endl;
  if (num_1 == 0 || num_2 == 0)
  {
    cout << "Error, valores no pueden ser iguales a 0, resultado sera alterado." << endl;
  }

  resultado = clasificador(num_1, num_2);

  if (resultado == 0)
  {
    cout << "los numeros seleccionados son pares, valor resultante = " << resultado;
  }
  else if (resultado == 1)
  {
    cout << "los numeros seleccionados son impares, valor resultante = " << resultado;
  }
  else if (resultado == 2)
  {
    cout << "los numeros seleccionados son distintos, valor resultante = " << resultado;
  }

  return 0;
}