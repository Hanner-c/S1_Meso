// Ejercicio 1, numeros del 1 al 50.
#include <iostream>
using namespace std;

int conteo, suma = 0;

int main()
{
  cout << "***************************Numeros de 1 al 50***************************" << endl;
  for (int i = 0; i <= 50; i++)
  {
    cout << i << endl;
    if ((i % 2) == 0)
    {
      suma = (i + suma);
      cout << "Numero para: " << suma << endl;
    }
  }

  return 0;
}