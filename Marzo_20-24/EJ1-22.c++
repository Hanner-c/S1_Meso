#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int num1, num2;
  cout << "**********************************************************" << endl;
  cout << "ingrese un numero cualquiera: ";
  cin >> num1;
  cout << "ingrese otro numero: ";
  cin >> num2;

  if (num1 == num2)
  {
    cout << "Error, los numeros no puede tener el mismo valor." << endl;
  }
  else
  {
    cout << "**********************************************************" << endl;
    cout << "el intervalo entre los dos numeros ingresados es: " << endl;
    if (num1 > num2)
    {
      for (int i = num2; i < num1; i++)
      {
        cout << i << endl;
      }
    }
    else if (num1 < num2)
    {
      for (int i = num1; i <= num2; i++)
      {
        cout << i << endl;
      }
    }
  }
  cout << "Fin del ciclo...." << endl;

  return 0;
}