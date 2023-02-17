#include <iostream>
using namespace std;

int main()
{
  int numero_1 = 0;
  int numero_2 = 0;
  int total;
  cout << "***************************MULTIPLICACION DE DOS NUMEROS***************************" << endl;
  cout << "Intrucciones: ingrese dos numeros enteros para que puedan ser multiplicados" << endl;
  cout << "numero 1: ";
  cin >> numero_1;
  cout << "numero 2: ";
  cin >> numero_2;
  total = numero_1 * numero_2;
  cout << "El resultado es: " << total << endl;
  if (total > 100)
  {
    cout << "El resultado es mayor a 100";
  }
  else if (total < 100)
  {
    cout << "El resultado es menor a 100";
  }
  return 0;
}