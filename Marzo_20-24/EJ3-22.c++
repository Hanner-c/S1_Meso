#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  long num1, factorial = 1;
  cout << "******************************Factorial de un numero****************************" << endl;
  cout << "ingrese un numero cualquiera: ";
  cin >> num1;
  cout << endl;

  cout << "**********************************************************" << endl;
  cout << "La Factorial de " << num1 << " es:" << endl;
  for (int i = 1; i <= num1; i++)
  {
    factorial = i * factorial;
    if (i < num1)
    {
      cout << i << "x";
    }
    else if (i == num1)
    {
      cout << i << " = ";
    }
  }

  cout << factorial << endl;
  if (factorial == 0)
  {
    cout << "numero demaciado grande para representarse." << endl;
  }

  cout << "Fin del ciclo...." << endl;

  return 0;
}