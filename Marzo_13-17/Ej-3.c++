// Ejercicio 3, numeros del 1 a 300.
#include <iostream>
using namespace std;

int conteo, suma = 0;

int main()
{
  cout << "***************************numeros del 1 a 300***************************" << endl;
  for (int i = 0; i <= 300; i++)
  {
    if ((i % 10) == 0)
    {
      cout << "----------------" << endl;
      cout << "Numero: " << i << endl;
    }
  }
  cout << endl
       << "Fin del ciclo";
  return 0;
}