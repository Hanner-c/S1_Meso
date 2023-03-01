#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int numero = 0;

  cout << "***************************Numeros Pares e Impares***************************" << endl;
  cout << "ingrese un numero entero cualquiera" << endl;
  cin >> numero;
  if ((numero % 2) == 1)
  {
    cout << "El numero ingresado es impar";
  }
  else if ((numero % 2) == 0)
  {
    cout << "El numero ingresado es par";
  }

  return 0;
}
