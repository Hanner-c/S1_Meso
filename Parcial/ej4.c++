#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  int n_2;

  cout << "***************************Numeros Pares e Impares***************************" << endl;
  cout << "ingrese un numero entero cualquiera" << endl;
  cin >> n;

  cout << "ingrese otro numero entero cualquiera" << endl;
  cin >> n_2;

  if ((n % 2) == 1 && (n_2 % 2) == 1)
  {
    cout << "Los numeros ingresados son impares";
  }
  else if ((n % 2) == 0 && (n_2 % 2) == 1)
  {
    cout << "El primero es par y el segundo es inpar";
  }
  else if ((n % 2) == 1 && (n_2 % 2) == 0)
  {
    cout << "El primero es inpar y el segundo par";
  }
  else if ((n % 2) == 0 && (n_2 % 2) == 0)
  {
    cout << "Los numeros ingresados son pares";
  }

  return 0;
}
